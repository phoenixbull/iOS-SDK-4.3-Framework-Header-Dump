/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKImageBackgroundView, UIPopoverController;

@interface XXUnknownSuperclass (GKPlayerStringAddtions)
+(id)stringForRelativeRankInGame:(id)game withPlayer:(id)player;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(id)stringForPercentileWithRank:(float)rank totalScores:(float)scores asPercentile:(BOOL)percentile isTop:(BOOL*)top;
+(id)stringForPercentileRankingWithRank:(float)rank totalScores:(float)scores;
+(id)stringForRankAndPercentileWithRank:(float)rank totalScores:(float)scores;
-(id)_gkQuotedString;
-(id)stringByAddingPercentEscapesIncludingReservedCharacters;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(id)gkRankFormatter;
+(id)gk_formatInteger:(int)integer withGrouping:(BOOL)grouping;
+(id)gk_formatUnsignedInteger:(unsigned)integer withGrouping:(BOOL)grouping;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(void)_gkUpdateLocale;
@end

@interface XXUnknownSuperclass (GKLocalDataCache)
+(id)profileCacheKeyForPlayerID:(id)playerID detailed:(BOOL)detailed;
-(id)cacheKeyRepresenation;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(id)urlByAddingQueryParameters:(id)parameters;
@end

@interface XXUnknownSuperclass (GKLocalDataCache)
-(id)cacheKeyRepresenation;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(unsigned long)readXattrBytes:(void*)bytes count:(unsigned long)count withName:(id)name path:(id)path;
-(void)writeXattrBytes:(void*)bytes count:(unsigned long)count withName:(id)name path:(id)path;
-(void)removeXattrNamed:(id)named path:(id)path;
@end

@interface XXUnknownSuperclass (GKStringLocalization)
-(id)_gkLocalizedStringForKey:(id)key value:(id)value table:(id)table locale:(id)locale;
@end

@interface XXUnknownSuperclass (GameKitErrors)
+(id)userErrorForCode:(int)code underlyingError:(id)error;
+(id)userErrorForServerError:(id)serverError;
+(id)serverErrorForCode:(int)code withUserInfo:(id)userInfo;
+(id)serverErrorForCode:(int)code withReason:(id)reason;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(void)openStoreURL:(id)url forContext:(id)context;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(void)_gkRefreshContents;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(void)_gkRefreshContents;
-(UIEdgeInsets)_gkAddFormSheetFrameImages;
-(void)_gkSaveStatusBarStyle:(BOOL)style;
-(void)_gkRestoreStatusBarStyle:(BOOL)style;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(void)_gkRefreshContents;
@end

@interface XXUnknownSuperclass (GKAdditions)
@property(assign, nonatomic) CGPoint integralCenter;
-(UIEdgeInsets)_gkAddFormSheetFrameImagesAtOffset:(CGPoint)offset;
-(id)_gkTileBackgroundImage:(id)image existingTiles:(id)tiles withBounds:(CGRect)bounds offset:(CGSize)offset;
-(id)_gkParentCell;
@end

@interface XXUnknownSuperclass (GKAdditions)
@property(readonly, assign, nonatomic) UIPopoverController* gkPopoverController;
@property(readonly, retain, nonatomic) GKImageBackgroundView* gkBackgroundView;
-(void)_gkRefreshContents;
-(void)gkAdjustBackgroundForSplitPosition;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(id)sectionHeaderLabelWithText:(id)text theme:(id)theme;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(void)_gkloadRemoteImageForURL:(id)url withCompletionHandler:(id)completionHandler;
+(void)_gkPurgeRemoteImageCache;
-(id)GKScaleToSize:(CGSize)size;
-(void)_gkDrawTiledInRect:(CGRect)rect;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(CTFontRef)_gkCTFont;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(id)buttonWithTitle:(id)title theme:(id)theme;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(BOOL)isReallyFirstResponder;
@end

@interface XXUnknownSuperclass (GKAdditions)
-(id)_gkTableView:(id)view buttonCellWithTitle:(id)title theme:(id)theme;
@end

@interface XXUnknownSuperclass (GKAdditions)
+(id)_gkColorFromRGBAHexString:(id)rgbahexString;
-(id)copyWithZone:(NSZone*)zone;
@end

@interface XXUnknownSuperclass (GKNSMutableURLRequestAdditions)
+(int)hashForPlayerID:(id)playerID;
+(void)setPlayerIDHashParametersFromBag:(id)bag;
-(void)setPlayerID:(id)anId authToken:(id)token;
-(void)setGameDescriptor:(id)descriptor;
-(void)setDeviceScreenCapabilities:(id)capabilities;
-(void)setRestrictions:(id)restrictions;
-(void)setDeviceUniqueID:(id)anId;
-(void)setProcessName:(id)name;
-(void)setProtocolVersion:(id)version;
-(void)setBuildVersion:(id)version;
-(void)setPushToken:(id)token;
-(void)setInternal:(BOOL)internal;
@end

@interface XXUnknownSuperclass (ComposeRecipientConvenience)
-(id)composeRecipientAddresses;
@end

@interface XXUnknownSuperclass (GKRecipientListStrings)
-(id)gk_commaSeparatedRecipientListWithWidth:(float)width forFont:(id)font;
-(id)gk_commaSeparatedRecipientListWithWidth:(float)width forFont:(id)font usingSelector:(SEL)selector;
@end

@interface XXUnknownSuperclass (GKUITheme)
-(void)_gkApplyTheme:(id)theme navbarStyle:(int)style;
-(void)_gkApplyTheme:(id)theme;
@end

@interface XXUnknownSuperclass (GKUITheme)
-(void)_gkApplyTheme:(id)theme;
@end

@interface XXUnknownSuperclass (GKSpringboardSupport)
-(BOOL)_gkGameCenterEnabled;
@end

@interface XXUnknownSuperclass (GKStringDrawing)
+(CTParagraphStyleRef)_gkCTParagraphStyleWithLineBreakMode:(unsigned char)lineBreakMode textAlignment:(unsigned char)alignment lineHeight:(float)height leading:(float)leading;
-(id)_gkRenderer;
-(void)_gkSetRenderer:(id)renderer;
-(id)_gkInstantiateCoreTextRenderer;
-(CGSize)_gkSizeWithConstraints:(CGSize)constraints;
-(void)_gkDrawInContext:(CGContextRef)context bounds:(CGRect)bounds;
@end

