/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVTask {
	NSString* _previousETag;
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property(retain) NSString* previousETag;
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)error;
@end

