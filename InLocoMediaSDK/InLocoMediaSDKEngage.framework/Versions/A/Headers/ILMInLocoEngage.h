//
//  ILMInLocoEngage.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Dicksson Oliveira on 11/24/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ILMEngageOptions.h"
#import "ILMError.h"
#import "ILMFirebaseProvider.h"
#import "ILMPushProvider.h"
#import "ILMPushProviders.h"
#import "ILMPushMessage.h"
#import "ILMUserProfile.h"
#import "ILMEngageUser.h"
#import "ILMUserAddress.h"

typedef void (^ILMBlock)(void);
typedef void (^ILMNSErrorBlock)(NSError *);
typedef void (^ILMFetchResultBlock)(UIBackgroundFetchResult);

#if defined(__IPHONE_10_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
@import UserNotifications;
#endif

/**
 Engage SDK interface.
*/
@interface ILMInLocoEngage : NSObject

/**
 Initializes the Engage SDK.

 @param options A valid ILMEngageOptions instance.
*/
+ (void)initWithOptions:(ILMEngageOptions *)options;

/**
 Sets the current user information. This information will be used on the engage services (i.e., when device registering occurs and for analytics events).
 This value is persisted.
*/
+ (void)setUser:(ILMEngageUser *)user;

/**
 Returns the current persisted user.
*/
+ (ILMEngageUser *)user;

/**
 Clears the current persisted user.
*/
+ (void)clearUser;

/**
 Sets the current user id. This information will be used on the engage services (i.e., when device registering occurs and for analytics events).
 This value is persisted.
 */
+ (void)setUserId:(NSString *)userId;

/**
 Returns the current persisted user id.
 */
+ (NSString *)userId;

/**
 Clears the current persisted user id.
 */
+ (void)clearUserId;

/**
 Sets the user address.
 This value is persisted locally.
 */
+ (void)setUserAddress:(ILMUserAddress *)userAddress;

/**
 Returns the current persisted user address.
 */
+ (ILMUserAddress *)userAddress;

/**
 Clears the current persisted user address.
 */
+ (void)clearUserAddress;

/**
 If the SDK is set to require the user's privacy consent, this method should be called once the user does or
 doesn't provide privacy consent. This value is persisted through initializations.
*/
+ (void)giveUserPrivacyConsent:(BOOL)userPrivacyConsent;

/**
 Returns if the SDK is waiting for the user privacy consent to be set.
 
 If YES, the method [ILMInLocoEngage giveUserPrivacyConsent:] has not been called yet - neither to give or deny the consent.
 If NO, the method [ILMInLocoEngage giveUserPrivacyConsent:] has already been called or the SDK isn't set to require privacy consent.
*/
+ (BOOL)isWaitingUserPrivacyConsent;

/**
 Returns if the SDK has the user privacy consent.
 
 If YES, either the user has already provided consent or the SDK isn't set to require privacy consent.
 If NO, the SDK hasn't received the user's privacy consent yet.
*/
+ (BOOL)hasUserPrivacyConsent;

/**
 Sets the Push Provider. This method should be called everytime that a new push provider token is generated. This value is persisted.
*/
+ (void)setPushProvider:(ILMPushProvider *)pushProvider;

/**
 Returns the last set Push Provider.
*/
+ (ILMPushProvider *)pushProvider;

/**
 Clears last set Push Provider.
*/
+ (void)clearPushProvider;

/**
 Enables or disables the device from targeted push notifications. This value is persisted. Default: YES.
*/
+ (void)setPushNotificationsEnabled:(BOOL)pushNotificationsEnabled;

/**
 Returns whether push notifications are enabled or not.
 */
+ (BOOL)pushNotificationsEnabled;

/**
 Enables or disables the SDK location services.
 
 Setting this property to NO will automatically disable all geofencing and location monitoring, and clean any cached location data. Default: YES.
 */
+ (void)setLocationServicesEnabled:(BOOL)enabled;

/**
 Requests the Location 'Always' Authorization.
 */
+ (void)requestLocationAuthorization;

/**
 Register an in-app event in the Engage dashboard.
 Note that custom properties must have key-value pairs of NSStrings.
*/
+ (void)trackEvent:(NSString *)eventName;
+ (void)trackEvent:(NSString *)eventName properties:(NSDictionary<NSString *, NSString *> *)properties;

/**
 Registers tapped pushes that caused the application to start.
 
 Must be called inside [-application:didFinishLaunchingWithOptions:].
*/
+ (void)appDidFinishLaunchingWithMessage:(ILMPushMessage *)message;

/**
 Registers push messages received through the [-application:didReceiveRemoteNotification:] methods.
 
 Must be called inside [-application:didReceiveRemoteNotification:] and/or [-application:didReceiveRemoteNotification:fetchCompletionHandler:].
*/
+ (void)appDidReceiveRemoteNotification:(ILMPushMessage *)message;
+ (void)appDidReceiveRemoteNotification:(ILMPushMessage *)message
                        completionBlock:(ILMFetchResultBlock)completionBlock;

#if defined(__IPHONE_10_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpartial-availability"

/**
 Registers push messages received through the [-userNotificationCenter:willPresentNotification:withCompletionHandler:] method.
 
 Must be called inside [-userNotificationCenter:willPresentNotification:withCompletionHandler:],
 with the same notificationOptions passed to the method's completion handler.
*/
+ (void)willPresentNotification:(ILMPushMessage *)message
            notificationOptions:(UNNotificationPresentationOptions)notificationOptions;
+ (void)willPresentNotification:(ILMPushMessage *)message
            notificationOptions:(UNNotificationPresentationOptions)notificationOptions
                completionBlock:(ILMBlock)completionBlock;

/**
 Registers tapped pushes.
 
 Must be called inside [-userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:].
*/
+ (void)didReceiveNotificationResponse:(ILMPushMessage *)message;
+ (void)didReceiveNotificationResponse:(ILMPushMessage *)message
                       completionBlock:(ILMBlock)completionBlock;

#pragma clang diagnostic pop
#endif

/**
 Allows background operations, such as retrying failed device registers.
 
 Should be called inside [-application:performFetchWithCompletionHandler:].
*/
+ (void)performFetchWithCompletionBlock:(ILMFetchResultBlock)fetchResultBlock;

@end
