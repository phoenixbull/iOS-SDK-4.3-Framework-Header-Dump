/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface SSDialogButton : XXUnknownSuperclass {
@private
	NSDictionary* _actionDictionary;
	NSString* _title;
}
@property(readonly, assign, nonatomic) NSString* URLTarget;
@property(readonly, assign, nonatomic) NSString* buttonAction;
@property(readonly, assign, nonatomic) id actionParameter;
@property(readonly, assign, nonatomic) NSString* buttonTitle;
-(id)init;
-(id)initWithTitle:(id)title actionDictionary:(id)dictionary;
-(void)dealloc;
-(id)valueForActionProperty:(id)actionProperty;
@end

