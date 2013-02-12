/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKGetTopGamesListDataRequest : GKDataRequest {
    NSDictionary *_topGamesList;
}

@property(retain) NSDictionary * topGamesList;

- (BOOL)authenticationRequired;
- (id)cacheKey;
- (int)cachePriority;
- (int)cacheType;
- (void)dealloc;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (void)setTopGamesList:(id)arg1;
- (id)topGamesList;

@end