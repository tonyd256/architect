//
//  PBXTargetDependency.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/7/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@class PBXTarget;

@interface PBXTargetDependency : NSObject

+ (PBXTargetDependency *)dependencyWithTarget:(PBXTarget *)target;

@end
