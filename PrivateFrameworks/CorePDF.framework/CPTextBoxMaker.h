/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPZone, CPBody;

@interface CPTextBoxMaker : XXUnknownSuperclass {
	CPBody* bodyZone;
	CPZone* mainZone;
}
+(void)promoteLayoutsIn:(id)anIn;
+(void)boxLayoutsIn:(id)anIn;
-(void)makeBoxesWith:(id)with parent:(id)parent;
-(void)rotateTextBox:(id)box;
-(void)rotate:(id)rotate;
-(BOOL)layoutIsSliced:(id)sliced;
-(void)promoteLayoutsInCertainRegions:(id)certainRegions;
-(void)promoteLayoutsIn:(id)anIn;
-(void)boxLayout:(id)layout;
-(void)boxLayoutsIn:(id)anIn;
@end

