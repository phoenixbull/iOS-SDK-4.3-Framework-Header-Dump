/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebKit-Structs.h"

@protocol WebDocumentRepresentation;

__attribute__((visibility("hidden")))
@interface WebDataSourcePrivate : XXUnknownSuperclass {
@private
	WebDocumentLoaderMac* loader;
	id<WebDocumentRepresentation> representation;
	BOOL representationFinishedLoading;
	BOOL includedInWebKitStatistics;
}
+(void)initialize;
-(void)dealloc;
-(void)finalize;
@end

