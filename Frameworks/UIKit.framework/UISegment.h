/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, _UISegmentedControlAppearance;

__attribute__((visibility("hidden")))
@interface UISegment : UIView {
@private
	UIView* _info;
	_UISegmentedControlAppearance* _appearance;
	float _width;
	CGSize _contentOffset;
	UIColor* _tintColor;
	int _barStyle;
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;
}
@property(assign) int controlSize;
@property(assign, getter=isMomentary) BOOL momentary;
@property(assign, getter=isHighlighted) BOOL highlighted;
@property(assign, getter=isSelected) BOOL selected;
-(void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;
-(id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;
-(id)initWithInfo:(id)info appearance:(id)appearance position:(unsigned)position autosizeText:(BOOL)text;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)_dividerImageForRight:(BOOL)right;
-(void)insertDividerView;
-(void)updateDividerViewToMatchSegment:(id)matchSegment;
-(void)_tileImage:(id)image inRect:(CGRect)rect;
-(id)_texturedLeftCapImage;
-(id)_texturedRightCapImage;
-(id)_texturedFillImage;
-(void)_updateTexturedBackgroundImage;
-(void)_updateCustomTiledBackgroundImage;
-(void)_updateBackgroundImage;
-(void)_updateTextColors;
-(id)disabledTextColor;
-(void)setBarStyle:(int)style;
-(void)setTintColor:(id)color;
-(void)setAutosizeText:(BOOL)text;
-(void)setEnabled:(BOOL)enabled;
-(void)setShowDivider:(BOOL)divider;
-(void)animateAdd:(BOOL)add;
-(void)animateRemoveForWidth:(float)width;
-(CGRect)contentRect;
-(CGSize)contentSize;
-(void)_positionInfo;
-(BOOL)_needsUpdateOnSizeChange;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)setPosition:(unsigned)position;
-(void)setContentOffset:(CGSize)offset;
-(void)setInfo:(id)info;
-(id)info;
-(id)infoName;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(BOOL)useBlockyMagnificationInClassic;
@end

