/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebHistoryItem.h"
#import "NSCopying.h"
#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WebHistoryItemPrivate;

@interface WebHistoryItem : XXUnknownSuperclass <NSCopying> {
@private
	WebHistoryItemPrivate* _private;
}
+(void)initialize;
-(id)init;
-(id)initWithURLString:(id)urlstring title:(id)title lastVisitedTimeInterval:(double)interval;
-(void)dealloc;
-(void)finalize;
-(id)copyWithZone:(NSZone*)zone;
-(id)URLString;
-(id)originalURLString;
-(id)title;
-(void)setAlternateTitle:(id)title;
-(id)alternateTitle;
-(double)lastVisitedTimeInterval;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
@end

@interface WebHistoryItem (WebPrivate)
-(id)initWithURL:(id)url title:(id)title;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationIncludingChildren:(BOOL)children;
-(id)target;
-(BOOL)isTargetItem;
-(int)visitCount;
-(id)RSSFeedReferrer;
-(void)setRSSFeedReferrer:(id)referrer;
-(id)children;
-(void)setAlwaysAttemptToUsePageCache:(BOOL)usePageCache;
-(id)URL;
-(void)_setLastVisitedTimeInterval:(double)interval;
-(id)_lastVisitedDate;
-(id)targetItem;
-(id)_transientPropertyForKey:(id)key;
-(void)_setTransientProperty:(id)property forKey:(id)key;
-(BOOL)lastVisitWasFailure;
-(void)_setLastVisitWasFailure:(BOOL)failure;
-(BOOL)_lastVisitWasHTTPNonGet;
-(id)_redirectURLs;
-(unsigned long)_getDailyVisitCounts:(const int**)counts;
-(unsigned long)_getWeeklyVisitCounts:(const int**)counts;
-(void)_setScale:(float)scale isInitial:(BOOL)initial;
-(float)_scale;
-(BOOL)_scaleIsInitial;
-(id)_viewportArguments;
-(void)_setViewportArguments:(id)arguments;
-(CGPoint)_scrollPoint;
-(void)_setScrollPoint:(CGPoint)point;
@end

@interface WebHistoryItem (WebInternal)
+(id)entryWithURL:(id)url;
+(void)initWindowWatcherIfNecessary;
-(id)initWithURL:(id)url target:(id)target parent:(id)parent title:(id)title;
-(id)initWithURLString:(id)urlstring title:(id)title displayTitle:(id)title3 lastVisitedTimeInterval:(double)interval;
-(id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>)webCoreHistoryItem;
-(void)setTitle:(id)title;
-(void)setVisitCount:(int)count;
-(void)setViewState:(id)state;
-(void)_mergeAutoCompleteHints:(id)hints;
-(id)initFromDictionaryRepresentation:(id)dictionaryRepresentation;
-(CGPoint)scrollPoint;
-(void)_visitedWithTitle:(id)title increaseVisitCount:(BOOL)count;
-(void)_recordInitialVisit;
@end

