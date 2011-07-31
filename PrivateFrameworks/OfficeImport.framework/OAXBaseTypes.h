/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXBaseTypes : XXUnknownSuperclass {
}
+(id)rectAlignmentEnumMap;
+(long)readRequiredLongFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(long)readOptionalLongFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readRequiredLengthFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readOptionalLengthFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readRequiredAngleFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readOptionalAngleFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readRequiredFractionFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(float)readOptionalFractionFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(CGPoint)readPoint2DFromXmlNode:(xmlNode*)xmlNode;
+(CGSize)readSize2DFromXmlNode:(xmlNode*)xmlNode;
+(id)readRelativeRectFromXmlNode:(xmlNode*)xmlNode;
+(int)readRectAlignmentFromXmlNode:(xmlNode*)xmlNode name:(const char*)name;
+(id)readVector3DFromXmlNode:(xmlNode*)xmlNode;
+(id)readPoint3DFromXmlNode:(xmlNode*)xmlNode;
+(id)readRotation3DFromXmlNode:(xmlNode*)xmlNode;
@end

