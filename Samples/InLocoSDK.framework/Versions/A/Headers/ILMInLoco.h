//
//  ILMInLoco.h
//  InLocoMedia-iOS-SDK-Common
//
//  Created by Marcel Rebouças on 31/05/19.
//  Copyright © 2019 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMOptions.h"
#import "ILMConsentTypes.h"

typedef void (^ILMFetchResultBlock)(UIBackgroundFetchResult);
typedef void (^ILMBoolBlock)(BOOL);

NS_ASSUME_NONNULL_BEGIN

@interface ILMInLoco : NSObject

/**
 Initializes the In Loco SDK with the options parameters.
 */
+ (void)initSdkWithOptions:(ILMOptions *)options;

/**
 Initializes the In Loco SDK with the InLocoOptions.plist properties file. To know more, please refer to the In Loco documentation.
 */
+ (void)initSdk;

/**
 Allows background operations.

 Should be called inside [-application:performFetchWithCompletionHandler:].
 */
+ (void)performFetchWithCompletionBlock:(nullable ILMFetchResultBlock)fetchResultBlock;

/**
 If the SDK is set to require the user's privacy consent, this method should be called once the user does or
 doesn't provide privacy consent. If the consent is true, this method is equivalent to calling [ILMInLoco giveUserPrivacyConsentForTypes:]
 with ILM_CONSENT_SET_ALL as the consent types parameter. Otherwise, it is equivalent to using ILM_CONSENT_SET_NONE.
 This value is persisted through initializations.
 */
+ (void)giveUserPrivacyConsent:(BOOL)userPrivacyConsent;

/**
 If the SDK is set to require the user's privacy consent, this method should be called with the
 consent types the user has accepted. Predefined types can be found on ILM_CONSENT_TYPE_.
 This value is persisted through initializations.
 */
+ (void)giveUserPrivacyConsentForTypes:(NSSet <NSString *> *)consentTypes;

/**
 Returns through a block if the SDK is waiting for the user privacy consent to be set.

 If YES, the method [ILMInLoco giveUserPrivacyConsent:] has not been called yet - neither to give or deny the consent.
 If NO, the method [ILMInLoco giveUserPrivacyConsent:] has already been called or the SDK isn't set to require privacy consent.
 */
+ (void)checkPrivacyConsentMissing:(ILMBoolBlock)block;

/**
 Sets the current user id. This information will be used on the In Loco services (i.e., for events).
 This value is persisted.
 */
+ (void)setUserId:(NSString *)userId;

/**
 Clears the current persisted user id.
 */
+ (void)clearUserId;

@end

NS_ASSUME_NONNULL_END
