/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "ML3Track.h"

@class MLChapterTOC;

@interface ML3Track : ML3Entity {
}
+(void)initialize;
+(id)databaseTable;
+(id)defaultOrderingProperties;
+(id)albumsDefaultOrderingProperties;
+(id)genresDefaultOrderingProperties;
+(id)podcastsDefaultOrderingProperties;
+(id)artistAllAlbumsDefaultOrderingProperties;
+(id)artistsDefaultOrderingProperties;
+(id)albumAllArtistsDefaultOrderingProperties;
+(id)albumAndArtistDefaultOrderingProperties;
+(id)composersDefaultOrderingProperties;
+(id)podcastsEpisodesDefaultOrderingProperties;
+(id)TVShowEpisodesDefaultOrderingProperties;
+(id)subselectStatementForProperty:(id)property;
+(id)subselectPropertyForProperty:(id)property;
+(id)joinClauseForProperty:(id)property;
+(id)sectionPropertyForProperty:(id)property;
+(id)predisambiguatedProperties;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignColumnForProperty:(id)property;
+(id)extraTablesToDelete;
+(id)persistentIDColumnForTable:(id)table;
+(BOOL)libraryContentsChangeForProperty:(id)property;
-(BOOL)deleteFromLibrary;
-(id)initWithDictionary:(id)dictionary inLibrary:(id)library;
@end

@interface ML3Track (MLChapterTOCAdditions)
@property(readonly, assign, nonatomic) MLChapterTOC* chapterTOC;
@end

@interface ML3Track (ML3ContainerAdditions)
+(id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;
@end

@interface ML3Track (ML3ContainerQueryAdditions)
+(id)containerQueryWithContainer:(id)container;
+(id)containerQueryWithContainer:(id)container predicate:(id)predicate;
+(id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;
@end

@interface ML3Track (ML3ITImageLibraryAdditions)
-(BOOL)isOTAPurchasedContent;
-(long long)imageDBRecordID:(int)anId;
@end

@interface ML3Track (ML3TrackImporter)
-(BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;
-(void)populateChapterDataWithImportChapters:(id)importChapters;
-(void)populateLocationPropertiesWithPath:(id)path;
@end

