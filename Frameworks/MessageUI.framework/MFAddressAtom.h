/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class NSString, UITextLabel, MFSlicedImageView;
@protocol MFAddressAtomDelegate;

@interface MFAddressAtom : XXUnknownSuperclass {
@private
	XXStruct_UUz0SD _atomImageSlices;
	MFSlicedImageView* _leftCap;
	MFSlicedImageView* _rightCap;
	MFSlicedImageView* _center;
	UITextLabel* _addressLabel;
	id<MFAddressAtomDelegate> _delegate;
	NSString* _fullAddress;
	void* _person;
	NSString* _displayString;
	unsigned _maxWidth;
	int _identifier;
	unsigned _addressIsPhoneNumber : 1;
	unsigned _needsToSendMouseUpEvents : 1;
	unsigned _dragging : 1;
	unsigned _updatedABPerson : 1;
}
+(void)initialize;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(id)initWithAddress:(id)address isPhoneNumber:(BOOL)number maxWidth:(float)width useDisplayString:(BOOL)string;
-(void)setDelegate:(id)delegate;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)sendAction:(SEL)action to:(id)to forEvent:(id)event;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)setMaxWidth:(unsigned)width;
-(void)sizeToFit;
-(void)_updateABPerson;
-(void)_addressBookRecordDidChange;
-(void)_updateDisplayStringIncludingABPerson:(BOOL)person;
-(void*)ABPerson;
-(int)ABPropertyType;
-(int)identifier;
-(id)unmodifiedAddressString;
-(id)displayString;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setOpaque:(BOOL)opaque;
-(BOOL)_alwaysHandleScrollerMouseEvent;
@end

