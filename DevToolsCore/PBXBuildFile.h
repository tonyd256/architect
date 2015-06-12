//
//  PBXBuildFile.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/7/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@class PBXFileReference;

@interface PBXBuildFile : NSObject

+ (PBXBuildFile *)buildFileWithReference:(PBXFileReference *)fileReference;

- (NSString *)name;
- (PBXFileReference *)fileReference;

@end
