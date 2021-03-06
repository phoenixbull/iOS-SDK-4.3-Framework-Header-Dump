/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "GQDWPPadding.h"
#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPPadding : XXUnknownSuperclass <GQDNameMappable> {
@private
	float mTop;
	float mLeft;
	float mBottom;
	float mRight;
}
+(const StateSpec*)stateForReading;
-(float)top;
-(float)left;
-(float)bottom;
-(float)right;
@end

@interface GQDWPPadding (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end

