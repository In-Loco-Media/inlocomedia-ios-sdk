//
//  UbeeAPI.h
//  UbeeAPI
//
//  Created by Luis Medeiros on 11/14/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBERequestDelegate.h"
#import "UBEAdvertisement.h"
#import "UBEOptions.h"
#import "UBEDisplayAdView.h"
#import "UBENativeAdView.h"
#import "UBEAdsTableViewManager.h"
#import "UBEURLParser.h"
#import "UBERetail.h"
#import "UBEUserProfile.h"
#import "UBEError.h"
#import "UBEAdRequest.h"
#import "UBEInterstitialAd.h"

@interface Ubee : NSObject

/**
 Initialize the API
 **/
+ (void)initWithOptions:(UBEOptions *)options;

/**
 Request single location for the user current position
**/
+ (void)requestLocationAtBlock:(void (^) (UBELocation *location))success failure:(void (^) (UBEError *error))failure;

/**
 Method to enable notification ads
 **/
+ (void)enableNotificationAds:(BOOL)enabled withFrequency:(NSTimeInterval)frequency andIntervalAfterNotification:(NSTimeInterval)interval;

/**
 Method to be called when you receive a local notification after enabling notification ads
 **/
+ (UBEAdvertisement *)didReceivedNotification:(UILocalNotification *)notification;

/**
 Method to request a list of the retails registered to your application
 **/
+ (void)requestRetails:(id <UBERetailsDelegate>)delegate;

/**
 Method to request a list of the categories available for this application
 **/
+ (void)requestAdCategoriesWithLocale:(NSString *)locale withDelegate:(id <UBECategoriesDelegate>)delegate;

/**
 Call it in your:
    - (void)applicationDidEnterBackground:(UIApplication *)application method.
 It will start monitoring location significant changes if notification is available.
 **/
+ (void)applicationDidEnterBackground;

@end
