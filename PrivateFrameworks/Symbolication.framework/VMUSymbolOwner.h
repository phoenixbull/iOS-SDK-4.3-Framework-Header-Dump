/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VMUSymbolOwner.h"
#import "Symbolication-Structs.h"
#import "NSCopying.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : XXUnknownSuperclass <NSCopying> {
	NSString* _name;
	NSDictionary* _signature;
	id<VMUMemory> _textMemory;
	NSArray* _regions;
	NSArray* _symbols;
	NSArray* _sourceInfos;
	unsigned _flags;
	unsigned _currentVersion;
	unsigned _compatibilityVersion;
}
+(id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;
-(id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;
-(id)name;
-(id)signature;
-(id)path;
-(id)architecture;
-(BOOL)containsAddress:(unsigned long long)address;
-(id)regions;
-(id)regionsForName:(id)name;
-(id)regionForAddress:(unsigned long long)address;
-(id)symbolForAddress:(unsigned long long)address;
-(id)symbolsForName:(id)name;
-(id)symbolForName:(id)name;
-(id)symbolsForMangledName:(id)mangledName;
-(id)sourceInfoForAddress:(unsigned long long)address;
-(id)symbols;
-(id)sourceInfos;
-(id)symbolsInAddressRange:(VMURange)addressRange;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(unsigned)flags;
-(unsigned)currentVersion;
-(unsigned)compatibilityVersion;
-(BOOL)isMachO;
-(BOOL)isProtected;
-(BOOL)isPEF;
-(BOOL)isCommpage;
-(BOOL)isAOut;
-(BOOL)isDylib;
-(BOOL)isDyld;
-(BOOL)isBundle;
-(BOOL)isDsym;
-(BOOL)isEqualToSymbolOwner:(id)symbolOwner;
-(int)compare:(id)compare;
-(id)description;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end

@interface VMUSymbolOwner (Private)
-(BOOL)isLazy;
-(id)symbolOwnerByAddingContentsOfOwner:(id)owner;
-(void)slideToSegmentAddresses:(id)segmentAddresses;
-(id)programTextForAddress:(unsigned long long)address;
-(id)programTextForAddressRange:(VMURange)addressRange;
-(unsigned long long)size;
-(BOOL)validate;
@end

