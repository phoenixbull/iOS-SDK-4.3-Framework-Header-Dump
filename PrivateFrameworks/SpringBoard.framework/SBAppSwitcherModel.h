/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBAppSwitcherModel : XXUnknownSuperclass {
	NSMutableArray* _recentDisplayIdentifiers;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_saveRecents;
-(id)_recentsFromPrefs;
-(void)addToFront:(id)front;
-(void)remove:(id)remove;
-(id)appAtIndex:(unsigned)index;
-(id)identifierAtIndex:(unsigned)index;
-(unsigned)count;
-(id)identifiers;
-(void)appsRemoved:(id)removed added:(id)added;
@end

