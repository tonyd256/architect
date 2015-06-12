//
//  PBXBuildStyle.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/10/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DVTFoundation/DVTMacroDefinitionTable.h>

@interface PBXBuildStyle : NSObject

- (void)setBuildSettings:(DVTMacroDefinitionTable *)buildSettings;
- (DVTMacroDefinitionTable *)buildSettings;

@end
