/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPredictor : REObservableSingleton {
    REObserverStore * _engines;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
}

+ (id)availablePredictors;
+ (id)supportedFeatures;
+ (id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2;
+ (double)updateInterval;

- (void).cxx_destruct;
- (void)addRelevanceEngine:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (void)dealloc;
- (id)engines;
- (void)enumerateInflectionFeatureValues:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (bool)isRunning;
- (void)onQueue:(id /* block */)arg1;
- (void)onQueueSync:(id /* block */)arg1;
- (void)pause;
- (id)queue;
- (void)removeRelevanceEngine:(id)arg1;
- (void)resume;
- (void)setRunning:(bool)arg1;
- (void)update;
- (void)updateObservers;

@end
