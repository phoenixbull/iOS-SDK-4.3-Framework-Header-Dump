/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class OADTheme, WDText, NSMutableArray, NSDate, WDListDefinitionTable, WDStyleSheet, OADBackground, WDListTable, OADDrawingGroup, NSString, WDFontTable, WDRevisionAuthorTable;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet* mStyleSheet;
	WDFontTable* mFontTable;
	WDListDefinitionTable* mListDefinitionTable;
	WDRevisionAuthorTable* mRevisionAuthorTable;
	WDListTable* mListTable;
	NSMutableArray* mSections;
	unsigned short mDefaultTabWidth;
	WDText* mImageBulletText;
	WDText* mFootnoteSeparator;
	WDText* mFootnoteContinuationSeparator;
	WDText* mFootnoteContinuationNotice;
	WDText* mEndnoteSeparator;
	WDText* mEndnoteContinuationSeparator;
	WDText* mEndnoteContinuationNotice;
	int mFootnoteNumberFormat;
	int mEndnoteNumberFormat;
	int mFootnotePosition;
	int mEndnotePosition;
	int mFootnoteRestart;
	int mEndnoteRestart;
	unsigned short mFootnoteNumberingStart;
	int mGutterPosition;
	NSString* mOleFilename;
	short mZoomPercentage;
	NSString* mVersion;
	unsigned mMirrorMargins : 1;
	unsigned mBorderSurroundHeader : 1;
	unsigned mBorderSurroundFooter : 1;
	unsigned mAutoHyphenate : 1;
	unsigned mEvenAndOddHeaders : 1;
	unsigned mGraphicsInHeaderFooter : 1;
	unsigned mBookFold : 1;
	unsigned mShowMarkup : 1;
	unsigned mShowComments : 1;
	unsigned mTrackChanges : 1;
	unsigned mShowRevisionMarksOnScreen : 1;
	unsigned mShowInsertionsAndDeletions : 1;
	unsigned mShowFormatting : 1;
	unsigned mShowOutline : 1;
	NSMutableArray* mDocumentImages;
	NSMutableArray* mChangeTrackingEditDates;
	NSMutableArray* mChangeTrackingEditAuthors;
	NSDate* mCreationDate;
	NSMutableArray* mImageBullets;
	OADDrawingGroup* mDrawingGroup;
	int mZIndexTotalForMainText;
	int mZIndexTotalForHeaderFooterText;
	OADBackground* mDocumentBackground;
	OADTheme* mTheme;
}
+(int)thumbnailCutOff;
-(id)init;
-(void)dealloc;
-(id)styleSheet;
-(id)fontTable;
-(id)sections;
-(int)sectionCount;
-(id)sectionAt:(int)at;
-(id)lastSection;
-(id)addSection;
-(BOOL)mirrorMargins;
-(void)setMirrorMargins:(BOOL)margins;
-(BOOL)borderSurroundHeader;
-(void)setBorderSurroundHeader:(BOOL)header;
-(BOOL)borderSurroundFooter;
-(void)setBorderSurroundFooter:(BOOL)footer;
-(BOOL)graphicsInHeaderFooter;
-(void)setGraphicsInHeaderFooter:(BOOL)headerFooter;
-(unsigned short)defaultTabWidth;
-(void)setDefaultTabWidth:(unsigned short)width;
-(BOOL)autoHyphenate;
-(void)setAutoHyphenate:(BOOL)hyphenate;
-(BOOL)evenAndOddHeaders;
-(void)setEvenAndOddHeaders:(BOOL)headers;
-(id)footnoteSeparator;
-(id)footnoteContinuationSeparator;
-(id)footnoteContinuationNotice;
-(id)endnoteSeparator;
-(id)endnoteContinuationSeparator;
-(id)endnoteContinuationNotice;
-(int)footnoteNumberFormat;
-(void)setFootnoteNumberFormat:(int)format;
-(int)endnoteNumberFormat;
-(void)setEndnoteNumberFormat:(int)format;
-(int)footnotePosition;
-(void)setFootnotePosition:(int)position;
-(int)endnotePosition;
-(void)setEndnotePosition:(int)position;
-(int)footnoteRestart;
-(void)setFootnoteRestart:(int)restart;
-(int)endnoteRestart;
-(void)setEndnoteRestart:(int)restart;
-(unsigned short)footnoteNumberingStart;
-(void)setFootnoteNumberingStart:(unsigned short)start;
-(id)listDefinitionTable;
-(int)listDefinitionCount;
-(id)listDefinitionAt:(int)at;
-(id)listDefinitionWithId:(int)anId;
-(id)addListDefinition;
-(id)listTable;
-(int)listCount;
-(id)listAt:(int)at;
-(id)addList:(id)list;
-(int)gutterPosition;
-(void)setGutterPosition:(int)position;
-(id)oleFilename;
-(void)setOleFilename:(id)filename;
-(BOOL)bookFold;
-(void)setBookFold:(BOOL)fold;
-(short)zoomPercentage;
-(void)setZoomPercentage:(short)percentage;
-(id)applicationName;
-(id)imageBulletWithCharacterOffset:(int)characterOffset;
-(id)addImageBulletText;
-(id)imageBulletParagraph;
-(id)imageBullets;
-(void)addImageBullets;
-(id)version;
-(void)setVersion:(id)version;
-(id)revisionAuthorTable;
-(int)revisionAuthorCount;
-(id)revisionAuthorAt:(int)at;
-(int)revisionAuthorAddLookup:(id)lookup;
-(void)addRevisionAuthor:(id)author;
-(BOOL)showMarkup;
-(void)setShowMarkup:(BOOL)markup;
-(BOOL)showComments;
-(void)setShowComments:(BOOL)comments;
-(BOOL)trackChanges;
-(void)setTrackChanges:(BOOL)changes;
-(BOOL)showRevisionMarksOnScreen;
-(void)setShowRevisionMarksOnScreen:(BOOL)screen;
-(BOOL)showInsertionsAndDeletions;
-(void)setShowInsertionsAndDeletions:(BOOL)deletions;
-(BOOL)showFormatting;
-(void)setShowFormatting:(BOOL)formatting;
-(BOOL)showOutline;
-(void)setShowOutline:(BOOL)outline;
-(void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;
-(id)changeTrackingEditDates;
-(id)changeTrackingEditAuthors;
-(id)creationDate;
-(void)setCreationDate:(id)date;
-(id)imageBulletText;
-(void)setDocumentBackground:(id)background;
-(id)documentBackground;
-(id)theme;
-(void)removeEmptySections;
-(id)drawingGroup;
-(int)zIndexTotalForMainText;
-(void)setZIndexTotalForMainText:(int)mainText;
-(int)zIndexTotalForHeaderFooterText;
-(void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;
-(id)sectionIterator;
-(id)newSectionIterator;
-(id)mainBlocksIterator;
-(id)newMainBlocksIterator;
-(id)mainRunsIterator;
-(id)newMainRunsIterator;
-(id)footnoteIterator;
-(id)newFootnoteIterator;
-(id)endnoteIterator;
-(id)newEndnoteIterator;
-(id)annotationIterator;
-(id)newAnnotationIterator;
-(id)footnoteBlockIterator;
-(id)newFootnoteBlockIterator;
-(id)endnoteBlockIterator;
-(id)newEndnoteBlockIterator;
-(id)annotationBlockIterator;
-(id)newAnnotationBlockIterator;
-(BOOL)isFromBinary;
@end

