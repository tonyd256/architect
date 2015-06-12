//
//  PBXTarget.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@class PBXTargetDependency;
@class PBXFrameworksBuildPhase;
@class PBXFileReference;

@interface PBXTarget : NSObject

- (instancetype)initWithName:(NSString *)name;

- (NSArray *)buildPhases;
- (void)insertBuildPhase:(PBXBuildPhase *)buildPhase atIndex:(NSUInteger)index;

- (void)addDependency:(PBXTargetDependency *)dependency;

- (XCConfigurationList *)buildConfigurationList;

- (NSString *)name;
- (NSString *)packageType;
- (NSString *)productType;
- (NSString *)productTypeIdentifier;

- (PBXFrameworksBuildPhase *)defaultFrameworksBuildPhase;
- (PBXHeadersBuildPhase *)defaultHeaderBuildPhase;
- (PBXSourcesBuildPhase *)defaultSourceCodeBuildPhase;

- (id)targetProductInfo;
- (PBXFileReference *)productReference;

@end
