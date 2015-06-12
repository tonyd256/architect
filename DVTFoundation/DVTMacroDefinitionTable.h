//
//  DVTMacroDefinitionTable.h
//  Cacao
//
//  Created by Tony DiPasquale on 3/10/14.
//  Copyright (c) 2014 Tony DiPasquale. All rights reserved.
//

@interface DVTMacroDefinitionTable : NSObject

- (void)setValue:(id)value forMacroName:(NSString *)name conditionSet:(id)arg3;
- (NSDictionary *)dictionaryRepresentation;

@end
