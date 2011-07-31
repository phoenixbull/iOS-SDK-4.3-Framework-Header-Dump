/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

typedef struct _NSZone NSZone;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFSet* CFSetRef;

typedef struct __CFHost* CFHostRef;

typedef struct sockaddr sockaddr;

typedef struct _xmlDoc xmlDoc;
typedef struct _xmlDtd xmlDtd;
typedef struct _xmlNs xmlNs;
typedef struct _xmlDict xmlDict;
typedef struct _xmlNode xmlNode;
typedef struct _xmlDoc {
	void* _field1;
	int _field2;
	char* _field3;
	xmlNode* _field4;
	xmlNode* _field5;
	xmlNode* _field6;
	xmlNode* _field7;
	xmlNode* _field8;
	xmlDoc* _field9;
	int _field10;
	int _field11;
	xmlDtd* _field12;
	xmlDtd* _field13;
	xmlNs* _field14;
	char* _field15;
	char* _field16;
	void* _field17;
	void* _field18;
	char* _field19;
	int _field20;
	xmlDict* _field21;
	void* _field22;
	int _field23;
	int _field24;
} xmlDoc;

typedef struct {
	unsigned _field1;
	sockaddr* _field2;
	xmlDoc* _field3;
	xmlDoc** _field4;
	xmlDoc** _field5;
	xmlDoc** _field6;
	xmlDoc** _field7;
} XXStruct_uGjhZD;

typedef struct __CFArray* CFArrayRef;

typedef struct _xmlTextWriter xmlTextWriter;

struct _xmlNode xmlNode;

struct _xmlDoc xmlDoc;

struct _xmlDtd xmlDtd;

struct _xmlNs xmlNs;

struct _xmlDict xmlDict;

typedef struct _xmlSAXHandler {
	/*function-pointer*/ void* _field1;
	/*function-pointer*/ void* _field2;
	/*function-pointer*/ void* _field3;
	/*function-pointer*/ void* _field4;
	/*function-pointer*/ void* _field5;
	/*function-pointer*/ void* _field6;
	/*function-pointer*/ void* _field7;
	/*function-pointer*/ void* _field8;
	/*function-pointer*/ void* _field9;
	/*function-pointer*/ void* _field10;
	/*function-pointer*/ void* _field11;
	/*function-pointer*/ void* _field12;
	/*function-pointer*/ void* _field13;
	/*function-pointer*/ void* _field14;
	/*function-pointer*/ void* _field15;
	/*function-pointer*/ void* _field16;
	/*function-pointer*/ void* _field17;
	/*function-pointer*/ void* _field18;
	/*function-pointer*/ void* _field19;
	/*function-pointer*/ void* _field20;
	/*function-pointer*/ void* _field21;
	/*function-pointer*/ void* _field22;
	/*function-pointer*/ void* _field23;
	/*function-pointer*/ void* _field24;
	/*function-pointer*/ void* _field25;
	/*function-pointer*/ void* _field26;
	/*function-pointer*/ void* _field27;
	unsigned _field28;
	void* _field29;
	/*function-pointer*/ void* _field30;
	/*function-pointer*/ void* _field31;
	/*function-pointer*/ void* _field32;
} xmlSAXHandler;

typedef struct _xmlParserInput xmlParserInput;

typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

typedef struct _xmlParserNodeInfoSeq {
	unsigned long maximum;
	unsigned long length;
	xmlParserNodeInfo* buffer;
} xmlParserNodeInfoSeq;

typedef struct _xmlValidState xmlValidState;

typedef struct _xmlAutomata xmlAutomata;

typedef struct _xmlAutomataState xmlAutomataState;

typedef struct _xmlValidCtxt {
	void* userData;
	/*function-pointer*/ void* error;
	/*function-pointer*/ void* warning;
	xmlNode* node;
	int nodeNr;
	int nodeMax;
	xmlNode** nodeTab;
	unsigned finishDtd;
	xmlDoc* doc;
	int valid;
	xmlValidState* vstate;
	int vstateNr;
	int vstateMax;
	xmlValidState* vstateTab;
	xmlAutomata* am;
	xmlAutomataState* state;
} xmlValidCtxt;

typedef struct _xmlHashTable xmlHashTable;

typedef struct _xmlAttr xmlAttr;

typedef struct _xmlError {
	int domain;
	int code;
	char* message;
	int level;
	char* file;
	int line;
	char* str1;
	char* str2;
	char* str3;
	int int1;
	int int2;
	void* ctxt;
	void* node;
} xmlError;

typedef struct _xmlParserCtxt {
	xmlSAXHandler* _field1;
	void* _field2;
	xmlDoc* _field3;
	int _field4;
	int _field5;
	char* _field6;
	char* _field7;
	int _field8;
	int _field9;
	xmlParserInput* _field10;
	int _field11;
	int _field12;
	xmlParserInput** _field13;
	xmlNode* _field14;
	int _field15;
	int _field16;
	xmlNode** _field17;
	int _field18;
	xmlParserNodeInfoSeq _field19;
	int _field20;
	int _field21;
	int _field22;
	int _field23;
	int _field24;
	int _field25;
	xmlValidCtxt _field26;
	int _field27;
	int _field28;
	char* _field29;
	char* _field30;
	int _field31;
	int _field32;
	char** _field33;
	long _field34;
	long _field35;
	int _field36;
	int _field37;
	int _field38;
	char* _field39;
	char* _field40;
	char* _field41;
	int* _field42;
	int _field43;
	int _field44;
	int* _field45;
	int _field46;
	xmlParserInput* _field47;
	int _field48;
	int _field49;
	int _field50;
	int _field51;
	void* _field52;
	int _field53;
	int _field54;
	void* _field55;
	int _field56;
	int _field57;
	xmlDict* _field58;
	char** _field59;
	int _field60;
	int _field61;
	char* _field62;
	char* _field63;
	char* _field64;
	int _field65;
	int _field66;
	int _field67;
	char** _field68;
	int* _field69;
	void** _field70;
	xmlHashTable* _field71;
	xmlHashTable* _field72;
	int _field73;
	int _field74;
	int _field75;
	int _field76;
	xmlNode* _field77;
	int _field78;
	xmlAttr* _field79;
	xmlError _field80;
	int _field81;
	unsigned long _field82;
	unsigned long _field83;
} xmlParserCtxt;


