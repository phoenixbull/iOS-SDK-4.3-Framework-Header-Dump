/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class OADDrawableProperties;
@protocol OADDrawableContainer, OADClient;

__attribute__((visibility("hidden")))
@interface OADDrawable : XXUnknownSuperclass {
@private
	BOOL mHidden;
	unsigned mId;
	OADDrawableProperties* mDrawableProperties;
	id<OADClient> mClientData;
	OADDrawable<OADDrawableContainer>* mParent;
}
-(id)initWithPropertiesClass:(Class)propertiesClass;
-(void)dealloc;
-(BOOL)hidden;
-(void)setHidden:(BOOL)hidden;
-(unsigned long)id;
-(void)setId:(unsigned long)anId;
-(id)drawableProperties;
-(void)setDrawableProperties:(id)properties;
-(void)setClientData:(id)data;
-(id)clientData;
-(id)ensureClientDataOfClass:(Class)aClass;
-(void)setParent:(id)parent;
-(id)parent;
-(void)setParentTextListStyle:(id)style;
-(void)removeUnnecessaryOverrides;
-(id)createOrientedBoundsWithBounds:(CGRect)bounds;
@end

@interface OADDrawable (WDClient)
-(id)createWordClientDataWithTextType:(int)textType;
@end

