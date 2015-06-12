//
//  PBXGroup.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXReference.h>

@interface PBXGroup : PBXReference

+ (PBXGroup *)groupWithName:(NSString *)name path:(NSString *)path;

- (PBXGroup *)createNewGroupAtIndex:(NSUInteger)index;
- (NSArray *)children;

- (NSArray *)addFiles:(NSArray *)files copy:(BOOL)arg1 createGroupsRecursively:(BOOL)arg2;
- (void)addItem:(PBXReference *)item;
- (void)removeItem:(PBXReference *)item;

@end
