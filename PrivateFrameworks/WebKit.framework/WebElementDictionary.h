/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : XXUnknownSuperclass {
@private
	HitTestResult* _result;
	NSMutableDictionary* _cache;
	NSMutableSet* _nilValues;
	BOOL _cacheComplete;
}
+(void)initialize;
+(void)initializeLookupTable;
-(id)initWithHitTestResult:(const HitTestResult*)hitTestResult;
-(void)dealloc;
-(void)finalize;
-(void)_fillCache;
-(unsigned)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)key;
-(id)_domNode;
-(id)_webFrame;
-(id)_altDisplayString;
-(id)_spellingToolTip;
-(id)_image;
-(id)_imageRect;
-(id)_absoluteImageURL;
-(id)_isSelected;
-(id)_title;
-(id)_absoluteLinkURL;
-(id)_targetWebFrame;
-(id)_titleDisplayString;
-(id)_textContent;
-(id)_isLiveLink;
-(id)_isContentEditable;
-(id)_isInScrollBar;
@end

