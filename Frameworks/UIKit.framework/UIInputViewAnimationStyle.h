/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : XXUnknownSuperclass {
@private
	BOOL animated;
	double duration;
	int outDirection;
	BOOL force;
}
@property(assign, nonatomic) BOOL animated;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) int outDirection;
@property(assign, nonatomic) BOOL force;
+(id)animationStyleImmediate;
+(id)animationStyleDefault;
+(id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;
-(BOOL)isEqual:(id)equal;
-(id)description;
@end

