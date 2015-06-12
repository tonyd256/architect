//
//  XCSpecification.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@interface XCSpecification : NSObject

@property(readonly) NSString *identifier;

+ (NSArray *)allRegisteredSpecifications;
+ (NSArray *)registeredSpecifications;
+ (NSArray *)registeredBaseSpecifications;

+ (NSString *)specificationType;

- (instancetype)initWithPropertyListDictionary:(NSDictionary *)propertyList;

@end
