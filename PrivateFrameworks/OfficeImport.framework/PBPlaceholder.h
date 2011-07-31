/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBPlaceholder.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBPlaceholder : XXUnknownSuperclass {
}
+(int)readPlaceholderType:(int)type;
+(int)readPlaceholderSize:(int)size;
+(int)readPlaceholderOrientation:(int)orientation;
+(int)placeholderTypeFromTextType:(int)textType;
+(BOOL)isBodyPlaceholder:(int)placeholder;
+(BOOL)isTitlePlaceholder:(int)placeholder;
@end

@interface PBPlaceholder (Private)
@end

