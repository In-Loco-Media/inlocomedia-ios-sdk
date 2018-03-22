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
#import "ILMFirebaseRegisterDeviceRequest.h"
#import "ILMPushProviders.h"
#import "ILMRegisterDeviceRequest.h"
#import "ILMPushMessage.h"
#import "ILMOptInDeviceRequest.h"
#import "ILMOptOutDeviceRequest.h"
#import "ILMWebhookRegisterDeviceRequest.h"

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
 Enables and disables location services
 
 The ILMEngageOptions used to start the SDK contains the locationEnabled property. This method allows changing this configuration after the SDK is initiated.
 Settings this property to NO will automatically disable all geofencing and location monitoring, and clean any cached location data.
 */
+ (void)setLocationServicesEnabled:(BOOL)enabled;

/**
 Requests the Location Always Authorization.
*/
+ (void)requestLocationAuthorization;

/**
 Registers the device to our services. This should be called everytime that a new push provider token is generated.
 This automatically opts the device in to receive targeted pushes.
*/
+ (void)registerDevice:(ILMRegisterDeviceRequest *)registerDeviceRequest;
+ (void)registerDevice:(ILMRegisterDeviceRequest *)registerDeviceRequest completionBlock:(ILMNSErrorBlock)completionBlock;

/**
 Opts the device in for targeted pushes.
 */
+ (void)optInDevice:(ILMOptInDeviceRequest *)optInDeviceRequest;
+ (void)optInDevice:(ILMOptInDeviceRequest *)optInDeviceRequest completionBlock:(ILMNSErrorBlock)completionBlock;

/**
 Opts the device out from targeted pushes.
*/
+ (void)optOutDevice:(ILMOptOutDeviceRequest *)optOutDeviceRequest;
+ (void)optOutDevice:(ILMOptOutDeviceRequest *)optOutDeviceRequest completionBlock:(ILMNSErrorBlock)completionBlock;

/**
 Registers tapped pushes that caused the application to start.
 
 Must be called inside [-application:didFinishLaunchingWithOptions:].
*/
+ (void)appDidFinishLaunchingWithMessage:(ILMPushMessage *)message;
+ (void)appDidFinishLaunchingWithMessage:(ILMPushMessage *)message completionBlock:(ILMBlock)completionBlock;

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
