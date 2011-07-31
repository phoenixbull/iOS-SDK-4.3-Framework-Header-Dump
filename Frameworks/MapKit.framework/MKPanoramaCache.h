/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKCache.h"


__attribute__((visibility("hidden")))
@interface MKPanoramaCache : MKCache {
@private
	unsigned _compactPass;
}
-(BOOL)needsCompaction;
-(BOOL)canStopCompaction;
-(void)compact;
-(void)evictObject:(id)object;
@end

