/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSAppListController : PSListController {
}
-(id)_uiValueFromValue:(id)value specifier:(id)specifier;
-(id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;
-(id)_readToggleSwitchSpecifierValue:(id)value;
-(void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;
-(id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;
-(void)setPreferenceValue:(id)value specifier:(id)specifier;
-(id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)specifierFromDictionary:(id)dictionary stringsTable:(id)table;
-(id)specifiers;
-(id)bundle;
@end
