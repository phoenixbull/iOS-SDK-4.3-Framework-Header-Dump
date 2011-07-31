/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LBSAddress : XXUnknownSuperclass {
@private
	NSString* _raw_text;
	NSMutableArray* _components;
	BOOL _is_physical;
	BOOL _hasIs_physical;
	BOOL _is_mailing;
	BOOL _hasIs_mailing;
	NSMutableArray* _cross_streets;
}
@property(retain, nonatomic) NSString* raw_text;
@property(retain, nonatomic) NSMutableArray* components;
@property(assign, nonatomic) BOOL is_physical;
@property(readonly, assign, nonatomic) BOOL hasIs_physical;
@property(assign, nonatomic) BOOL is_mailing;
@property(readonly, assign, nonatomic) BOOL hasIs_mailing;
@property(retain, nonatomic) NSMutableArray* cross_streets;
@property(readonly, assign, nonatomic) int cross_streetsCount;
@property(readonly, assign, nonatomic) int componentsCount;
@property(readonly, assign, nonatomic) BOOL hasRaw_text;
-(id)init;
-(void)dealloc;
-(void)setComponent:(id)component atIndex:(unsigned)index;
-(id)componentAtIndex:(unsigned)index;
-(void)addComponent:(id)component;
-(void)setCross_street:(id)street atIndex:(unsigned)index;
-(id)cross_streetAtIndex:(unsigned)index;
-(void)addCross_street:(id)street;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end
