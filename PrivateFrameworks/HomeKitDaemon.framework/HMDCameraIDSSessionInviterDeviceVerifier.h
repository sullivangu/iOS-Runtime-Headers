/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject {
    HMDDevice * _expectedInviter;
    HMDCameraSessionID * _session;
}

@property (nonatomic, readonly) HMDDevice *expectedInviter;
@property (nonatomic, readonly) HMDCameraSessionID *session;

- (void).cxx_destruct;
- (bool)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2;
- (id)expectedInviter;
- (id)initWithSession:(id)arg1 expectedInviter:(id)arg2;
- (id)session;

@end
