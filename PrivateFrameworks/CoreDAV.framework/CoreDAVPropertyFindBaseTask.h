/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;
}
@property(retain) NSSet* propertiesToFind;
@property(retain) CoreDAVMultiStatusItem* multiStatus;
-(id)initWithPropertiesToFind:(id)find atURL:(id)url;
-(void)dealloc;
-(id)description;
-(id)parseHints;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;
-(void)updateMultiStatusFromResponse;
-(id)getTotalFailureError;
-(void)finishCoreDAVTaskWithError:(id)error;
@end

