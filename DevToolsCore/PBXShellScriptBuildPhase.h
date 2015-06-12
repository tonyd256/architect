//
//  PBXShellScriptBuildPhase.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/4/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

#import <DevToolsCore/PBXBuildPhase.h>

@interface PBXShellScriptBuildPhase : PBXBuildPhase

- (void)setShellScript:(NSString *)script;
- (NSString *)shellScript;

@end
