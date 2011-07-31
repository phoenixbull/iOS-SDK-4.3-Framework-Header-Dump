/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBIconListModel, SBIcon, NSMutableArray;

@interface SBIconListView : XXUnknownSuperclass {
	SBIconListModel* _model;
	int _orientation;
	SBIcon* _bouncedIcon;
	NSMutableArray* _removedIcons;
	NSMutableArray* _iconContainerMatrix;
	unsigned _scattered : 1;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	unsigned _onWallpaper : 1;
	UIView* _fadeView;
	BOOL _iconsAreElsewhere;
	NSMutableArray* _rasterizedIcons;
}
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)maxIcons;
-(Class)modelClass;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setModel:(id)model;
-(id)model;
-(int)iconRowsForCurrentOrientation;
-(int)iconColumnsForCurrentOrientation;
-(int)iconsInRowForSpacingCalculation;
-(void)setOrientation:(int)orientation;
-(void)setDisplaysOnWallpaper:(BOOL)wallpaper;
-(int)indexForX:(int)x Y:(int)y forOrientation:(int)orientation;
-(void)getX:(unsigned*)x Y:(unsigned*)y forIndex:(unsigned)index forOrientation:(int)orientation;
-(unsigned)rowForIcon:(id)icon;
-(void)compactIcons:(BOOL)icons;
-(id)icons;
-(BOOL)isEmpty;
-(BOOL)isFull;
-(unsigned)firstFreeSlotIndex;
-(unsigned)firstFreeSlotOrLastSlotIndex;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
-(id)placeIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
-(id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now;
-(id)removedIcons;
-(void)removeIconAtIndex:(unsigned)index;
-(void)removeIcon:(id)icon;
-(BOOL)isScattered;
-(void)setAlphaForAllIcons:(float)allIcons;
-(void)scatterAnimationDidStop;
-(void)scatterWithDuration:(double)duration startTime:(double)time;
-(void)unscatterAnimationDidStop;
-(void)unscatterWithDuration:(double)duration startTime:(double)time;
-(void)setShouldRasterizeAllIcons:(BOOL)rasterizeAllIcons;
-(void)removeAllIconAnimations;
-(CGPoint)originForIconAtIndex:(int)index;
-(CGPoint)originForIcon:(id)icon;
-(void)setFrame:(CGRect)frame;
-(void)setIconsAreElsewhere:(BOOL)elsewhere;
-(BOOL)iconsAreElsewhere;
-(void)setIconsNeedLayout;
-(void)layoutIconsNow;
-(float)layoutIconsIfNeeded:(float)needed domino:(BOOL)domino;
-(id)iconAtPoint:(CGPoint)point index:(int*)index;
-(id)iconAtPoint:(CGPoint)point index:(int*)index proposedOrder:(int*)order grabbedIcon:(id)icon;
-(void)showIconImagesFromColumn:(int)column toColumn:(int)column2 totalColumns:(int)columns visibleIconsJitter:(BOOL)jitter;
-(void)stopJittering;
-(void)showCloseBoxes;
-(void)hideCloseBoxes;
-(void)makeIconsPerformSelector:(SEL)selector;
-(void)makeIconsPerformBlock:(id)block;
-(BOOL)isDock;
-(void)setBouncedIcon:(id)icon;
-(id)bouncedIcon;
-(float)topIconInset;
-(float)bottomIconInset;
-(float)sideIconInset;
-(float)horizontalBumpForColumn:(unsigned)column;
-(float)horizontalIconPadding;
-(float)verticalIconPadding;
-(CGPoint)originForIconAtX:(unsigned)x Y:(unsigned)y;
-(int)columnAtPoint:(CGPoint)point;
-(int)rowAtPoint:(CGPoint)point;
-(id)rotationIconContainers;
-(void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)performRotationWithDuration:(double)duration;
-(void)cleanupAfterRotation;
@end
