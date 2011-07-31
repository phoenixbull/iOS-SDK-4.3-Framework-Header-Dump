/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation {
@private
	id _delegate;
	NSString* _removePath;
	NSError* _error;
	void* _state;
	BOOL _filterUnderbars;
}
+(id)_errorWithErrno:(int)errno atPath:(id)path;
+(id)filesystemItemRemoveOperationWithPath:(id)path;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(id)error;
-(void)_setError:(id)error;
-(void)_setFilterUnderbars:(BOOL)underbars;
-(BOOL)_filtersUnderbars;
-(id)initWithPath:(id)path;
-(void)main;
-(void)dealloc;
@end

