/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class CoreDAVXMLData, NSMutableDictionary, NSDictionary, NSString;

@interface CoreDAVMultiPutTask : CoreDAVTask {
	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	BOOL _validCTag;
	NSString* _newCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
}
@property(readonly, assign) NSString* newCTag;
@property(readonly, assign) NSDictionary* uuidToHREF;
@property(readonly, assign) NSDictionary* hrefToETag;
-(id)initWithURL:(id)url checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;
-(void)dealloc;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)requestBody;
-(void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;
-(id)copyDefaultParserForContentType:(id)contentType;
-(void)finishCoreDAVTaskWithError:(id)error;
@end

