/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

typedef struct _NSZone NSZone;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	double latitude;
	double longitude;
} XXStruct_zYrK5D;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	int _field5;
	int _field6;
	BOOL _field7;
} XXStruct_g6RH7D;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	int _field5;
	float _field6;
} XXStruct_3B_lsC;

typedef struct {
	id _field1;
	int _field2;
} XXStruct_lMgBbA;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct __CFArray* CFArrayRef;

@class NSString;
typedef struct {
	id _field1;
	float _field2;
	CFArrayRef _field3;
	float _field4;
	BOOL _field5;
	NSString* _field6;
} XXStruct_6rcd1D;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	int version;
	void* info;
	/*function-pointer*/ void* retain;
	/*function-pointer*/ void* release;
	/*function-pointer*/ void* copyDescription;
} XXStruct_4pnlqD;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	XXStruct_zYrK5D center;
	XXStruct_zYrK5D span;
} XXStruct_SRdqoD;

typedef struct CGPath* CGPathRef;

typedef struct {
	id _field1;
	float _field2;
	CFArrayRef _field3;
	float _field4;
	BOOL _field5;
	id _field6;
} XXStruct_pqCwAA;

typedef struct sqlite3 sqlite3;

typedef struct {
	unsigned char byte0;
	unsigned char byte1;
	unsigned char byte2;
	unsigned char byte3;
	unsigned char byte4;
	unsigned char byte5;
	unsigned char byte6;
	unsigned char byte7;
	unsigned char byte8;
	unsigned char byte9;
	unsigned char byte10;
	unsigned char byte11;
	unsigned char byte12;
	unsigned char byte13;
	unsigned char byte14;
	unsigned char byte15;
} XXStruct_RubF8C;

typedef struct {
	XXStruct_RubF8C _field1;
	unsigned _field2;
	unsigned _field3;
	int _field4;
} XXStruct_5DmkVA;

typedef struct __CFUUID* CFUUIDRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;


