//
//  PBXContainer.h
//  Cacao
//
//  Created by Tony DiPasquale on 2/28/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXGroup.h>
//#import "PBXFileReference.h"

@interface PBXContainer : NSObject

- (PBXGroup *)rootGroup;
//- (id<PBXFileReference>)fileReferenceForPath:(NSString *)path;

@end
