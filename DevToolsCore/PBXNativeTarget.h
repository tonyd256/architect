//
//  PBXNativeTarget.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/6/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXTarget.h>

@interface PBXNativeTarget : PBXTarget

- (instancetype)initWithName:(NSString *)name productTypeIdentifier:(NSString *)productType;

@end
