//
//  PBXBuildPhase.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@class PBXBuildFile;
@class PBXFileReference;

@interface PBXBuildPhase : NSObject

- (instancetype)initWithName:(NSString *)name;

- (NSArray *)buildFiles;
- (void)addBuildFile:(PBXBuildFile *)buildFile;
- (void)removeBuildFile:(PBXBuildFile *)buildFile;

- (NSString *)name;

@end
