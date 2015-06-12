//
//  PBXFileType.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/XCSpecification.h>

@interface PBXFileType : XCSpecification

+ (PBXFileType *)fileTypeForFileName:(NSString *)name;
+ (PBXFileType *)wrapperFolderType;

@end
