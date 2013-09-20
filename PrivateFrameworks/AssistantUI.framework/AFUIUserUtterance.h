/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class NSArray, NSDictionary, NSMutableArray;

@interface AFUIUserUtterance : NSObject {
    NSDictionary *_correctionIdentifier;
    NSMutableArray *_dictationResult;
    BOOL _openToInterpretation;
    NSMutableArray *_phrases;
}

@property(readonly) NSDictionary * correctionIdentifier;
@property(readonly) NSArray * dictationResult;

- (void).cxx_destruct;
- (id)correctionIdentifier;
- (id)description;
- (id)dictationResult;
- (id)init;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (BOOL)openToInterpretation;
- (id)phrases;
- (id)recursiveDescription;
- (id)text;

@end