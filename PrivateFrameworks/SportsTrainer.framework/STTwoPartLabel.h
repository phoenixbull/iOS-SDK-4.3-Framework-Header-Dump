/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SportsTrainer-Structs.h"

@class UILabel;

@interface STTwoPartLabel : XXUnknownSuperclass {
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
}
@property(readonly, assign, nonatomic) UILabel* primaryLabel;
@property(readonly, assign, nonatomic) UILabel* secondaryLabel;
+(id)defaultTextForPrimaryLabel;
+(id)defaultFormatForSecondaryLabel;
+(id)defaultTextForSecondaryLabel;
+(BOOL)shouldFlipLabels;
-(void)setFrame:(CGRect)frame primaryFont:(id)font secondaryFont:(id)font3 inset:(CGSize)inset;
@end

