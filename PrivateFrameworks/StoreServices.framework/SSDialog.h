/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSArray, SSDialogButton;

@interface SSDialog : XXUnknownSuperclass {
@private
	NSArray* _buttons;
	NSDictionary* _dialogDictionary;
}
@property(readonly, assign, nonatomic) NSString* dialogKind;
@property(readonly, assign, nonatomic) NSDictionary* dialogDictionary;
@property(readonly, assign, nonatomic) SSDialogButton* defaultButton;
@property(readonly, assign, nonatomic) NSArray* buttons;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSString* message;
-(id)init;
-(id)initWithDialogDictionary:(id)dialogDictionary;
-(void)dealloc;
-(id)valueForProperty:(id)property;
@end

