/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface GMMRoad : XXUnknownSuperclass {
@private
	unsigned numPoints;
	Point* points;
}
-(id)initWithPoints:(Point*)points count:(unsigned long)count;
-(void)dealloc;
-(void)getPoints:(Point**)points count:(unsigned*)count;
@end

