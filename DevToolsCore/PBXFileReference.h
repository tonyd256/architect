//
//  PBXFileReference.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXReference.h>

@interface PBXFileReference : PBXReference

- (instancetype)initWithName:(NSString *)name path:(NSString *)path sourceTree:(NSString *)sourceTree;

- (void)setExplicitFileType:(PBXFileType *)fileType;
- (PBXFileType *)fileType;

@end
