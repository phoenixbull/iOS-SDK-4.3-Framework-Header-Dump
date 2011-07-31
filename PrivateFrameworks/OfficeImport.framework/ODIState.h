/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, OADGroup, OADShapeStyle, ODDDiagram, OADDrawingTheme, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface ODIState : XXUnknownSuperclass {
@private
	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	float mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;
}
-(id)initWithDiagram:(id)diagram group:(id)group drawingTheme:(id)theme;
-(void)dealloc;
-(id)diagram;
-(id)diagramOrientedBounds;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)bounds maintainAspectRatio:(BOOL)ratio;
-(float)scale;
-(void)setLogicalBounds:(CGRect)bounds;
-(id)group;
-(void)setGroup:(id)group;
-(id)presentationNameForPointType:(int)pointType;
-(void)setPresentationName:(id)name forPointType:(int)pointType;
-(id)defaultStyleLabelNameForPointType:(int)pointType;
-(void)setDefaultStyleLabelName:(id)name forPointType:(int)pointType;
-(int)pointCount;
-(void)setPointCount:(int)count;
-(int)pointIndex;
-(void)setPointIndex:(int)index;
-(id)textStyle;
-(void)setTextStyle:(id)style;
-(id)drawingTheme;
@end
