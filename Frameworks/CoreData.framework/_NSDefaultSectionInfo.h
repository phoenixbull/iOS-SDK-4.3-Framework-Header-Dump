/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSFetchedResultsSectionInfo.h"

@class NSFetchedResultsController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : XXUnknownSuperclass <NSFetchedResultsSectionInfo> {
@private
	NSFetchedResultsController* _controller;
	NSString* _name;
	NSString* _indexTitle;
	unsigned _sectionOffset;
	unsigned _numberOfObjects;
	unsigned _oldSectionNumber;
	id _sectionObjects;
}
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* indexTitle;
@property(readonly, assign, nonatomic) unsigned sectionOffset;
@property(readonly, assign, nonatomic) unsigned numberOfObjects;
@property(assign, nonatomic) unsigned oldSectionNumber;
@property(readonly, assign, nonatomic) NSArray* objects;
@property(readonly, assign, nonatomic) unsigned sectionNumber;
-(id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)setNumberOfObjects:(unsigned)objects;
-(void)setSectionOffset:(unsigned)offset;
-(void)setController:(id)controller;
-(void)clearSectionObjectsCache;
-(unsigned)indexOfObject:(id)object;
@end
