/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDWarnings : XXUnknownSuperclass {
@private
	CFArrayRef mWarnings;
}
-(id)init;
-(void)dealloc;
-(void)addWarning:(CPTaggedMessageStructure*)warning;
-(void)reportWarningsWithAssociatedObject:(id)associatedObject;
@end

