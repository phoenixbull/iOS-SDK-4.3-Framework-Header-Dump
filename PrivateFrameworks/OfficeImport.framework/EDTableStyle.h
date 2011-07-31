/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDKeyedCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyle : XXUnknownSuperclass <NSCopying> {
@private
	NSString* mName;
	EDKeyedCollection* mTableStyleElements;
}
+(id)tableStyle;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)name;
-(void)setName:(id)name;
-(id)tableStyleElements;
@end

