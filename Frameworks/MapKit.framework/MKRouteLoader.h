/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MKTilePathArray;

@interface MKRouteLoader : NSObject {
    struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
     /* Encoded args for previous method: v12@0:4^{GMMTileRequester=^^?i^{Connection}*BBBB{_opaque_pthread_mutex_t=l[40c]}^{GMMTileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@}8 */
     /* Encoded args for previous method: v12@0:4^{GMMTileRequester=^^?i^{Connection}*BBBB{_opaque_pthread_mutex_t=l[40c]}^{GMMTileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@}8 */
     /* Encoded args for previous method: v16@0:4^{GMMTileRequester=^^?i^{Connection}*BBBB{_opaque_pthread_mutex_t=l[40c]}^{GMMTileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@}8@12 */
    id _delegate;
    BOOL _isLoading;
    NSUInteger _loadingCount;
        } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; } *_requester;
    MKTilePathArray *_tilePaths;
}

@property id delegate;

+ (NSUInteger)maxTilesToPreload;

- (void)_checkLoading;
- (void)_setLoading:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithTiles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)tileRequester:(struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; }*)arg1 failedWithError:(id)arg2;
- (void)tileRequesterCompleted:(struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; }*)arg1;
- (void)tileRequesterProgress:(struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; }*)arg1;

@end