/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EBAlignmentInfo.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : XXUnknownSuperclass {
}
+(id)edAlignmentInfoFromXlXf:(XlXf*)xlXf;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)xlDXfAlign;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)xlGraphicsInfo;
+(void)writeAlignmentInfo:(id)info toXlXf:(XlXf*)xlXf;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;
+(void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo*)xlGraphicsInfo;
@end

@interface EBAlignmentInfo (Private)
+(int)convertXlHorizAlignEnumToED:(int)ed;
+(int)convertXlVertAlignEnumToED:(int)ed;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)xl;
+(int)convertEDVerticalAlignmentEnumToXl:(int)xl;
@end

