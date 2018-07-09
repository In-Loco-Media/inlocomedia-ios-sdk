//
//  InLoco.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 10/13/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMError.h"
#import "ILMLocationModules.h"
#import "ILMLocationOptions.h"
#import "ILMUserProfile.h"

/**
 Location SDK interface.
*/
@interface ILMInLoco : NSObject

/**
 Initializes the Location SDK.
 
 @param options A valid ILMLocationOptions instance.
*/
+ (void)initWithOptions:(ILMLocationOptions *)options;

/**
 Enables or disables the SDK location services.
 
 Setting this property to NO will automatically disable all geofencing and location monitoring, and clean any cached location data.
*/
+ (void)setLocationServicesEnabled:(BOOL)enable;

/**
 Enables or disables iOS location monitoring services: Visit tracking and Significant Location Changes.
 Location monitoring is active in background and persists even if the app closes.
*/
+ (void)setLocationMonitoringEnabled:(BOOL)enable;

/**
 Returns whether the location monitoring is active or not.
*/
+ (BOOL)isMonitoringLocation;

/*
 Enables the SDK to work properly in background. Should be called inside [-application:performFetchWithCompletionHandler:].
 Please look at our documentation in order to find more details about its usage.
*/
+ (void)applicationPerformFetchWithResult:(void (^)(UIBackgroundFetchResult))fetchResultBlock;

/**
 Requests the Location 'When In Use' Authorization.
*/
+ (void)requestLocationAuthorizationWhenInUse;

/**
 Requests the Location 'Always' Authorization.
*/
+ (void)requestLocationAuthorizationAlways;

/**
 If the SDK is set to require the user's privacy consent, this method should be called once the user does or
 doesn't provide privacy consent. This value is persisted through initializations.
*/
+ (void)giveUserPrivacyConsent:(BOOL)userPrivacyConsent;

/**
 Returns if the SDK has the user privacy consent.
 
 If YES, either the user has already provided consent or the SDK isn't set to require privacy consent.
 If NO, the SDK hasn't received the user's privacy consent yet.
 */
+ (BOOL)hasUserPrivacyConsent;

/**
 Returns if the SDK is waiting for the user privacy consent to be set.
 
 If YES, the method [ILMInLoco giveUserPrivacyConsent:] has not been called yet - neither to give or deny the consent.
 If NO, the method [ILMInLoco giveUserPrivacyConsent:] has already been called or the SDK isn't set to require privacy consent.
 */
+ (BOOL)isWaitingUserPrivacyConsent;

/**
 Registers an in-app event.
 Note that custom properties must have key-value pairs of NSStrings.
 */
+ (void)trackEvent:(NSString *)eventName properties:(NSDictionary *)properties;

@end
