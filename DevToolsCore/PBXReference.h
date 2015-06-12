//
//  PBXReference.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@interface PBXReference : NSObject

- (void)setName:(NSString *)name;
- (NSString *)name;
- (void)setPath:(NSString *)path;
- (NSString *)path;
- (NSString *)absolutePath;

@end
