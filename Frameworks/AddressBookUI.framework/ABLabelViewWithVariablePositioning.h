/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

@interface ABLabelViewWithVariablePositioning : XXUnknownSuperclass {
	UILabel* _label;
	float topPadding;
	float bottomPadding;
	float horizontalPadding;
}
@property(retain, nonatomic) UILabel* label;
@property(assign, nonatomic) float topPadding;
@property(assign, nonatomic) float bottomPadding;
@property(assign, nonatomic) float horizontalPadding;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)updateLabelFrame;
-(void)layoutSubviews;
@end

