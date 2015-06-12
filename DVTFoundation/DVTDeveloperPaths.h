//
//  DVTDeveloperPaths.h
//  architect
//
//  Created by Tony DiPasquale on 6/10/14.
//  Copyright (c) 2014 thoughtbot. All rights reserved.
//

@interface DVTDeveloperPaths : NSObject

+ (void)initializeApplicationDirectoryName:(NSString *)name;
+ (NSString *)applicationDirectoryName;
+ (NSString *)defaultPaths;

@end
