/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKeyboardInputManager.h"
#import "UIKit-Structs.h"


@interface UIKeyboardInputManager : XXUnknownSuperclass {
}
+(id)sharedInstanceForInputMode:(id)inputMode inHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;
+(id)activeInstance;
+(void)releaseSharedInstance;
+(id)keyboardUserDirectory;
+(id)dynamicDictionaryFilePathForInputMode:(id)inputMode;
+(void)removeDynamicDictionaryForInputMode:(id)inputMode;
+(void)removeAllDynamicDictionaries;
+(void)beginRegisteringKeyplaneWithName:(id)name;
+(void)endRegisteringKeyplane;
+(void)registerCentroid:(CGPoint)centroid forKey:(id)key;
+(void)clearAllCentroids;
-(id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned*)aDelete fromVariantKey:(BOOL)variantKey;
-(void)setInput:(id)input;
-(void)setInput:(id)input typedString:(id)string;
-(id)deleteFromInput:(unsigned*)input;
-(void)clearInput;
-(void)acceptInput;
-(void)setInputIndex:(unsigned)index;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(id)inputString;
-(BOOL)inputEmpty;
-(void)inputLocationChanged;
-(BOOL)stringEndsWord:(id)word;
-(BOOL)acceptInputString:(id)string;
-(BOOL)acceptsCharacter:(unsigned short)character;
-(id)autocorrection;
-(id)candidates;
-(id)remainingInput;
-(void)setPhraseBoundary:(unsigned)boundary;
-(unsigned)phraseBoundary;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)usesCandidateSelection;
-(BOOL)usesAutoDeleteWord;
-(BOOL)suppressesCandidateDisplay;
-(id)defaultCandidate;
-(unsigned)defaultCandidateIndex;
-(id)searchStringForMarkedText;
-(BOOL)suppliesCompletions;
-(BOOL)suppressCompletionsForFieldEditor;
-(id)stringForDoubleKey:(id)doubleKey;
-(BOOL)isSentenceDelimiter:(unsigned short)delimiter;
-(BOOL)shouldShiftAfterChar:(unsigned short)aChar withSpaces:(int)spaces currentShift:(BOOL)shift;
-(BOOL)setInputMode:(id)mode;
-(void)addToTypingHistory:(id)typingHistory;
-(void)textAccepted:(id)accepted;
-(void)candidateAccepted:(id)accepted;
-(void)lastAcceptedCandidateCorrected;
-(void)increaseUserFrequency:(id)frequency;
-(void)decreaseUserFrequency:(id)frequency;
-(void)clearDynamicDictionary;
-(id)shadowTyping;
-(void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;
-(CFArrayRef)chargeableKeys;
-(CFDictionaryRef)chargedKeyProbabilities;
-(id)addInputObject:(id)object;
-(id)setInputObject:(id)object;
-(BOOL)canHandleKeyHitTest;
-(void)clearKeyAreas;
-(void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;
-(BOOL)keySlidIntoSwipe;
-(int)keyCancel:(CGPoint)cancel atTime:(double)time fromPath:(int)path withIdentity:(int)identity forceShift:(BOOL)shift;
-(void)deleteFromStrokeHistory:(BOOL)strokeHistory;
-(void)setKeyboardMatchType:(int)type;
-(void)beginRegisteringKeyplaneWithName:(id)name;
-(void)endRegisteringKeyplane;
-(void)registerCentroid:(CGPoint)centroid forKey:(id)key;
-(void)clearAllCentroids;
@end

@interface UIKeyboardInputManager (FeatureSpecializations)
-(void)setAutoCorrects:(BOOL)corrects;
-(void)setShallowPrediction:(BOOL)prediction;
-(void)setShift:(BOOL)shift;
-(void)setAutoShift:(BOOL)shift;
-(BOOL)shouldExtendPriorWord;
-(void)setKeyboardEventsLagging:(BOOL)lagging;
-(void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;
-(void)configureInputModeSpecificFeatures:(id)features;
-(void)configureKeyboard:(id)keyboard forCandidates:(id)candidates;
-(void)configureKeyboard:(id)keyboard forAutocorrection:(id)autocorrection;
@end
