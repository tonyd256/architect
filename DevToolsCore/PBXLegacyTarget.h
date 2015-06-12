//
//  PBXLegacyTarget.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXTarget.h>

@interface PBXLegacyTarget : PBXTarget

- (void)setBuildArgumentsString:(NSString *)arguments;
- (NSString *)buildArgumentsString;
- (void)setBuildToolPath:(NSString *)path;
- (NSString *)buildToolPath;

@end
