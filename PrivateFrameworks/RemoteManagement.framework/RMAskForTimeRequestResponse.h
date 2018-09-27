/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeRequestResponse : NSManagedObject

@property (nonatomic, retain) NSNumber *amountGranted;
@property (nonatomic, retain) NSNumber *answer;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) RMFamilyOrganization *familyOrganization;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSDate *requestTimeStamp;
@property (nonatomic, copy) NSString *requestedApplicationBundleIdentifier;
@property (nonatomic, copy) NSString *requestedCategoryIdentifier;
@property (nonatomic, copy) NSString *requestedWebDomain;
@property (nonatomic, retain) RMCoreUser *requestingUser;
@property (nonatomic, retain) RMCoreUser *respondingUser;
@property (nonatomic, retain) NSDate *responseTimeStamp;
@property (nonatomic, retain) NSNumber *timeRequested;
@property (nonatomic) long long usageType;

+ (id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2;
+ (id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id*)arg4;

- (void)awakeFromInsert;

@end