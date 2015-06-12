//
//  PBXProject.h
//  Cacao
//
//  Created by Tony DiPasquale on 2/28/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@interface PBXProject : PBXContainer

+ (PBXProject *)projectWithFile:(NSString *)projectAbsolutePath;

- (NSString *)name;

- (BOOL)writeToFileSystemProjectFile:(BOOL)arg1 userFile:(BOOL)arg2 checkNeedsRevert:(BOOL)arg3;

- (NSArray *)targets;
- (void)addTarget:(PBXTarget *)target;

@end
