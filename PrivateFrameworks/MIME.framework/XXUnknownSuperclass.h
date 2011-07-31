/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (NSDataExtensions)
-(id)mf_subdataWithRange:(NSRange)range;
-(BOOL)mf_immutable;
@end

@interface XXUnknownSuperclass (NSEmailAddressArray)
-(id)mf_uncommentedAddressList;
@end

@interface XXUnknownSuperclass (NSEmailAddressString)
+(id)mf_nameExtensions;
+(id)mf_partialSurnames;
+(id)mf_formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;
-(id)mf_copyUncommentedAddress;
-(id)mf_uncommentedAddress;
-(id)mf_uncommentedAddressRespectingGroups;
-(id)mf_addressComment;
-(id)mf_copyAddressComment;
-(void)mf_firstName:(id*)name middleName:(id*)name2 lastName:(id*)name3 extension:(id*)extension;
-(BOOL)mf_appearsToBeAnInitial;
-(id)mf_trimCommasSpacesQuotes;
-(BOOL)mf_isLegalCommentedEmailAddress;
-(BOOL)mf_isLegalEmailAddress;
-(id)mf_addressDomain;
-(BOOL)mf_isEqualToAddress:(id)address;
@end

@interface XXUnknownSuperclass (MimeCharsetSupport)
-(id)mf_bestMimeCharset;
-(id)_mf_bestMimeCharset:(id)charset;
-(id)mf_bestMimeCharsetUsingHint:(unsigned long)hint;
@end

@interface XXUnknownSuperclass (MimeDataEncoding)
-(id)mf_decodeQuotedPrintableForText:(BOOL)text;
-(id)mf_decodeUuencoded;
-(id)mf_decodeBase64;
-(id)mf_decodeBase64InRange:(NSRange*)range;
-(id)mf_decodeModifiedBase64;
-(id)mf_encodeBase64WithoutLineBreaks;
-(id)mf_encodeBase64;
-(id)mf_encodeModifiedBase64;
-(id)mf_encodeBase64HeaderData;
@end

@interface XXUnknownSuperclass (RFC2231Support)
-(void)mf_appendRFC2231CompliantValue:(id)value forKey:(id)key;
@end

@interface XXUnknownSuperclass (RFC2231Support)
-(void)mf_fixupRFC2231Values;
@end

@interface XXUnknownSuperclass (MimeHeaderEncoding)
-(id)mf_encodedHeaderDataWithEncodingHint:(unsigned long)encodingHint;
-(id)mf_decodeMimeHeaderValueWithCharsetHint:(id)charsetHint;
@end

@interface XXUnknownSuperclass (NSDataUtils)
-(void)mf_appendCString:(const char*)string;
-(void)mf_convertNetworkLineEndingsToUnixInRange:(NSRange)range;
-(void)mf_convertNetworkLineEndingsToUnix;
-(void)mf_makeImmutable;
@end

@interface XXUnknownSuperclass (NSDataUtils)
-(NSRange)mf_rangeOfRFC822HeaderData;
-(id)mf_subdataToIndex:(unsigned)index;
-(id)mf_subdataFromIndex:(unsigned)index;
-(NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;
-(NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;
-(NSRange)mf_rangeOfByteFromSet:(id)set;
-(NSRange)mf_rangeOfCString:(const char*)cstring;
-(NSRange)mf_rangeOfCString:(const char*)cstring options:(unsigned)options;
-(NSRange)mf_rangeOfCString:(const char*)cstring options:(unsigned)options range:(NSRange)range;
-(id)mf_locationsOfUnixNewlinesNeedingConversion;
-(id)mf_dataByConvertingUnixNewlinesToNetwork;
-(id)mf_copyHexString;
@end

@interface XXUnknownSuperclass (NSScannerUtils)
-(id)mf_nextTokenWithPunctuation:(CFCharacterSetRef)punctuation;
-(BOOL)mf_scanUpAndOverString:(id)string;
@end

@interface XXUnknownSuperclass (MFStringUtils)
+(id)mf_stringWithData:(id)data encoding:(unsigned)encoding;
-(const void*)mf_lossyDefaultCStringBytes;
-(int)mf_caseInsensitiveCompareExcludingXDash:(id)dash;
-(id)mf_dataUsingEncoding:(unsigned)encoding;
-(id)mf_dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;
@end

@interface XXUnknownSuperclass (MFDateUtils)
+(id)mf_copyDateInCommonFormatsWithString:(id)string;
@end

@interface XXUnknownSuperclass (MFDateUtils_Private)
+(id)mf_copyLenientDateInCommonFormatsWithString:(id)string;
@end

@interface XXUnknownSuperclass (MessageAdditions)
-(void)mf_waitForLock;
@end

@interface XXUnknownSuperclass (LockingAdditions)
+(void)mf_clearLocks;
-(id)_mf_lockOrderingForType:(int)type;
-(void)_mf_checkToAllowOrderingWithLock:(id)lock;
-(void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;
-(void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;
-(void)_mf_checkToAllowLock:(id)allowLock;
-(void)mf_lock;
-(BOOL)mf_tryLock;
-(void)mf_lockWithPriority;
-(BOOL)mf_tryLockWithPriority;
-(void)mf_unlock;
-(BOOL)_mf_ntsIsLocked;
-(id)mf_strictLockOrdering;
-(id)mf_lockOrdering;
-(id)mf_exclusiveLocks;
@end

@interface XXUnknownSuperclass (MFMessageAdditions)
-(id)mf_uniquedObject:(id)object;
@end

@interface XXUnknownSuperclass (NSFileManagerAdditions)
-(id)mf_makeUniqueFileInDirectory:(id)directory;
-(BOOL)mf_makeCompletePath:(id)path mode:(int)mode;
-(BOOL)mf_canWriteToDirectoryAtPath:(id)path;
-(id)mf_fileModificationDateAtPath:(id)path traverseLink:(BOOL)link;
-(id)mf_pathsAtDirectory:(id)directory beginningWithString:(id)string;
-(void)mf_deleteFilesInSortedArray:(id)sortedArray matchingPrefix:(id)prefix fromDirectory:(id)directory;
-(BOOL)mf_protectFileAtPath:(id)path withClass:(int)aClass error:(id*)error;
@end

@interface XXUnknownSuperclass (MessagesFromMixedStoresConvenience)
-(id)mf_dictionaryWithMessagesSortedByStore;
@end

@interface XXUnknownSuperclass (SortedArrayExtensions)
-(unsigned)mf_indexOfObject:(id)object usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(id)mf_objectEquivalentTo:(id)to usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(unsigned)mf_indexWhereObjectWouldBeInserted:(id)inserted usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
@end

@interface XXUnknownSuperclass (SortedArrayExtensions)
-(unsigned)mf_insertObject:(id)object usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context allowDuplicates:(BOOL)duplicates;
-(unsigned)mf_removeObject:(id)object usingSortFunction:(/*function-pointer*/ void*)function context:(void*)context;
@end

@interface XXUnknownSuperclass (Convenience)
-(BOOL)mf_addObjectIfAbsent:(id)absent;
-(BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)equals;
@end

@interface XXUnknownSuperclass (DerivedArray)
-(id)mf_indicesOfStringsWithPrefix:(id)prefix;
@end
