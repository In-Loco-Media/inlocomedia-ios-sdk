//
//  UbeeAPI.h
//  UbeeAPI
//
//  Created by Luis Medeiros on 11/14/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBEModules.h"
#import "UBEAdType.h"
#import "UBERequestDelegate.h"
#import "UBEAdvertisement.h"
#import "UBEOptions.h"
#import "UBEAdView.h"
#import "UBEAdsTableViewManager.h"
#import "UBEURLParser.h"
#import "UBERetail.h"
#import "UBEUserProfile.h"
#import "UBEError.h"
#import "UBEAdRequest.h"
#import "UBEInterstitialAd.h"
#import "UBEAdTableViewCell.h"
#import "UBEButton.h"
#import "UBEContentImageView.h"
#import "UBEDescriptionLabel.h"
#import "UBEDiscountLabel.h"
#import "UBEHighlightLabel.h"
#import "UBEIconImageView.h"
#import "UBELogger.h"
#import "UBEOriginalPriceLabel.h"
#import "UBEPriceLabel.h"
#import "UBEPublicMacros.h"
#import "UBETitleLabel.h"
#import "UBEWebImageView.h"

@interface Ubee : NSObject

/**
 Initialize the API
 **/
+ (void)initWithOptions:(UBEOptions *)options;

/**
 Request single location for the user current position
**/
+ (void)requestLocationAtBlock:(void (^)(UBELocation *location))success failure:(void (^)(UBEError *error))failure;

/**
 Method to enable Notification Ads with location tracking. Notification can be created both when the app is running in background and when is in foreground.
 */
+ (void)enableNotificationAds;

/**
 Method to enable Notification Ads with location tracking. Notification can be created only whe app is in background.
 */
+ (void)enableNotificationAdsOnlyInBackground;

/**
 Method to disable Notification Ads.
 */
+ (void)disableNotificationAds;

/**
 Method to verify if NotificationAds is enabled
 */
+ (BOOL)isNotificationAdsEnabled;

/**
 Method to be called when you receive a local notification after enabling notification ads
 **/
+ (UBEAdvertisement *)didReceivedNotification:(UILocalNotification *)notification;

/**
 Method to request a list of the retails registered to your application
 **/
+ (void)requestRetails:(id<UBERetailsDelegate>)delegate;

/**
 Method to request a list of the categories available for this application
 **/
+ (void)requestAdCategoriesWithLocale:(NSString *)locale withDelegate:(NSObject<UBECategoriesDelegate> *)delegate;

/**
 Call it in your:
    - (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
 
 In its execution, it will verify if the application should monitor location changes for notification ads.
 */
+ (void)applicationPerformFetchWithResult:(void (^)(UIBackgroundFetchResult))fetchResultBlock;

@end
