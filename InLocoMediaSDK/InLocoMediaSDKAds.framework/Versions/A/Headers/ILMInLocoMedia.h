//
//  InLocoMediaAPI.h
//  InLocoMediaAPI
//
//  Created by Luis Medeiros on 11/14/13.
//  Copyright (c) 2013 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMAdsModules.h"
#import "ILMAdType.h"
#import "ILMAdvertisement.h"
#import "ILMAdsOptions.h"
#import "ILMAdView.h"
#import "ILMUserProfile.h"
#import "ILMError.h"
#import "ILMAdRequest.h"
#import "ILMInterstitialAd.h"
#import "ILMPublicMacros.h"
#import "ILMWebImageView.h"
#import "ILMNotificationAdRequest.h"
#import "ILMNativeAdTableViewManager.h"
#import "ILMNativeAdResponse.h"
#import "ILMNativeAdManager.h"
#import "ILMNativeAdDelegate.h"
#import "ILMAdErrorConstants.h"
#import "ILMAdManager.h"
#import "ILMAdManagerDelegate.h"
#import "ILMAdManagerFactory.h"
#import "ILMImageViewContainer.h"
#import "ILMNativeViewBinder.h"
#import "ILMNativeAdCell.h"

/**
 Ads SDK interface.
*/
@interface ILMInLocoMedia : NSObject

/**
 Initializes the In Loco Media SDK.
 
 @param options A valid ILMAdsOptions instance.
*/
+ (void)initWithOptions:(ILMAdsOptions *)options;

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
 
 If YES, the method [ILMInLocoMedia giveUserPrivacyConsent:] has not been called yet - neither to give or deny the consent.
 If NO, the method [ILMInLocoMedia giveUserPrivacyConsent:] has already been called or the SDK isn't set to require privacy consent.
 */
+ (BOOL)isWaitingUserPrivacyConsent;

/**
 Enables Notification Ads with location tracking. Notifications will be received both in background and foreground.
*/
+ (void)enableNotificationAds;

/**
 Enables Notification Ads with location tracking. Notifications will only be received in background.
 */
+ (void)enableNotificationAdsOnlyInBackground;

/**
 Disables Notification Ads.
*/
+ (void)disableNotificationAds;

/**
 Sets the ILMNotificationAdRequest to be used when Notification Ads are requested.
 */
+ (void)setNotificationAdRequest:(ILMNotificationAdRequest *)notificationAdRequest;

/**
  Returns whether Notification Ads are enabled or not.
*/
+ (BOOL)isNotificationAdsEnabled;

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

/**
 Method to be called when you receive a Local Notification after enabling Notification Ads.
*/
+ (ILMAdvertisement *)didReceiveNotification:(UILocalNotification *)notification;

/*
 Enables the SDK to verify that the application should monitor location changes for Notification Ads.
 
 Should be called inside [-application:performFetchWithCompletionHandler:].
*/
+ (void)applicationPerformFetchWithResult:(void (^)(UIBackgroundFetchResult))fetchResultBlock;

/**
 Alerts the SDK that your application is registered to receive notifications. This will be used to start sending Notification Ads to your user.
*/
+ (void)applicationDidRegisterUserNotificationSettings;

/**
 Alerts the SDK that your application has entered the foreground state.
*/
+ (void)applicationDidBecomeActive;

/**
 Opens the URL of the clicked Notification Ad.
 
 This should not be used while in foreground, as it may interrupt the user.
*/
+ (void)handleNotificationWithDefaultBackgroundBehavior:(ILMAdvertisement *)ad;

@end
