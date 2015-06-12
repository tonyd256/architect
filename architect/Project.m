//
//  Project.m
//  architect
//
//  Created by Tony DiPasquale on 6/10/14.
//  Copyright (c) 2014 thoughtbot. All rights reserved.
//

#import <dlfcn.h>
#import "Project.h"
#import <DevToolsCore/DevToolsCore.h>
#import <DVTFoundation/DVTFoundation.h>

typedef void (*IDEInit)(NSUInteger options, NSError **error);

@interface Project ()

@property (nonatomic) PBXProject *project;

@end

@implementation Project

- (instancetype)init
{
    self = [super init];
    if (!self) return nil;

    // Do hacky shit to initialize the IDE so loading a PBXProject works
    IDEInit IDEInitialize = (IDEInit)dlsym(RTLD_DEFAULT, "IDEInitialize");
    if (IDEInitialize) {
        NSError *error = nil;
        IDEInitialize(0, &error);
        if (error) {
            NSLog(@"IDEInitialize error: %@\n", error);
            exit(1);
        }
    } else {
        printf("IDEInitialize function not found.\n");
        exit(1);
    }

    NSString *path = [[NSFileManager defaultManager] currentDirectoryPath];
//    [DVTDeveloperPaths initializeApplicationDirectoryName:@"Xcode"];
//    NSLog(@"%@", [DVTDeveloperPaths applicationDirectoryName]);
//    [DVTPlatform loadAllPlatformsReturningError:nil];
    self.project = [PBXProject projectWithFile:[NSString stringWithFormat:@"%@/%@", path, @"architect.xcodeproj"]];
    NSLog(@"%@", self.project.name);
    NSLog(@"%@", self.project.targets);
    NSLog(@"%@", self.project.rootGroup.children);
//    [self.project writeToFileSystemProjectFile:YES userFile:YES checkNeedsRevert:YES];

    return self;
}

@end
