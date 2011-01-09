/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSTimer, NSMutableSet;



@interface MKCountdownTimer : NSObject 
{
    NSTimer *timer;
    NSMutableSet *observers;
}

+ (id)sharedTimer;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initOnce;
- (void)timerFired;
- (void)applicationResumed:(id)arg1;

@end