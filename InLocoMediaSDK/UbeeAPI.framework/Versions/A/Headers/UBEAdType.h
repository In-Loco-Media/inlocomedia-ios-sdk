//
//  UBEAdOptions.h
//  UbeeAPI
//
//  Created by Ubee on 2/28/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//Keys for each advertisement type that may be used for the view runtime attributes on the Interface Builder
#define UBE_ADTYPE_KEY_NOTIFICATION @"notification"

#define UBE_ADTYPE_KEY_NATIVE_SMALL @"native_small"
#define UBE_ADTYPE_KEY_NATIVE_LARGE @"native_large"
#define UBE_ADTYPE_KEY_NATIVE_COUPON @"native_coupon"

#define UBE_ADTYPE_KEY_DISPLAY_BANNER_SMALL @"display_banner_small"
#define UBE_ADTYPE_KEY_DISPLAY_BANNER_SMALL_LANDSCAPE @"display_banner_small_landscape"
#define UBE_ADTYPE_KEY_DISPLAY_BANNER_TABLET @"display_banner_small_tablet"

#define UBE_ADTYPE_KEY_DISPLAY_SMART_BANNER_PORTRAIT @"display_smart_banner_portrait"
#define UBE_ADTYPE_KEY_DISPLAY_SMART_BANNER_LANDSCAPE @"display_smart_banner_landscape"

#define UBE_ADTYPE_KEY_DISPLAY_BANNER_LARGE @"display_banner_large"
#define UBE_ADTYPE_KEY_DISPLAY_TILE @"display_tile"
#define UBE_ADTYPE_KEY_DISPLAY_MEDIUM_RECTANGLE_IAB @"display_banner_medium_rectangle_iab"
#define UBE_ADTYPE_KEY_DISPLAY_FULL_BANNER_IAB @"display_banner_full_iab"

#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN @"display_full_screen"
#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN_LANDSCAPE @"display_full_screen_landscape"

#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN_TABLET @"display_full_screen_tablet"
#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN_TABLET_LANDSCAPE @"display_full_screen_tablet_landscape"

#define UBE_ADTYPE_KEY_DISPLAY_TILE @"display_tile"

#define UBEAdTypeNotification UBEAdType.notification
#define UBEAdTypeNativeAdSmall UBEAdType.nativeSmall
#define UBEAdTypeNativeAdLarge UBEAdType.nativeLarge
#define UBEAdTypeNativeAdCoupon UBEAdType.nativeCoupon
#define UBEAdTypeDisplayAdBannerSmall UBEAdType.displaySmall
#define UBEAdTypeDisplayAdBannerSmallLandscape UBEAdType.displaySmallLandscape
#define UBEAdTypeDisplayAdBannerTablet UBEAdType.displayTablet
#define UBEAdTypeDisplayAdSmartBannerPortrait UBEAdType.displaySmartPortrait
#define UBEAdTypeDisplayAdSmartBannerLandscape UBEAdType.displaySmartLandscape
#define UBEAdTypeDisplayAdMediumRectangleIAB UBEAdType.displayMediumRectangleIAB
#define UBEAdTypeDisplayAdFullBannerIAB UBEAdType.displayFullIAB
#define UBEAdTypeDisplayAdBannerLarge UBEAdType.displayLarge
#define UBEAdTypeDisplayAdFullScreen UBEAdType.displayFullScreen
#define UBEAdTypeDisplayAdFullScreenLandscape UBEAdType.displayFullScreenLandscape
#define UBEAdTypeDisplayAdFullScreenTablet UBEAdType.displayFullScreenTablet
#define UBEAdTypeDisplayAdFullScreenTabletLandscape UBEAdType.displayFullScreenTabletLandscape
#define UBEAdTypeDisplayAdTile UBEAdType.displayTile

@interface UBEAdType : NSObject

@property (nonatomic, assign, readonly) CGSize size;
@property (nonatomic, strong, readonly) NSString *key;

@property (nonatomic, assign, readonly) BOOL isFullscreen;
@property (nonatomic, assign, readonly) BOOL isNative;
@property (nonatomic, assign, readonly) BOOL isDisplay;
@property (nonatomic, assign, readonly) BOOL isSmart;

- (instancetype)init NS_UNAVAILABLE;

- (BOOL)isKeyEqual:(NSString *)key;

- (UBEAdType *)smartAdType;

+ (UBEAdType *)adTypeFromKey:(NSString *)key;

+ (UBEAdType *)adTypeFromSize:(CGSize)size;

/// Notification
+ (UBEAdType *)notification;

/// An ad that will be filled accordingly with the nib file that was used to inflate it.
+ (UBEAdType *)nativeSmall;

/// An ad that will be filled accordingly with the nib file that was used to inflate it.
+ (UBEAdType *)nativeLarge;

/// An ad that will be filled accordingly with the nib file that was used to inflate it.
+ (UBEAdType *)nativeCoupon;

/// 320x50
+ (UBEAdType *)displaySmall;

/// 480x32
+ (UBEAdType *)displaySmallLandscape;

/// 728x90
+ (UBEAdType *)displayTablet;

/// An ad that will fill the width of the screen.
/// The height will be either 50px for iphone/ipod, or 90px for ipad.
+ (UBEAdType *)displaySmartPortrait;

/// An ad that will fill the width of the screen.
/// The height will be either 32px for iphone/ipod, or 90px for ipad.
+ (UBEAdType *)displaySmartLandscape;

/// 300x250
+ (UBEAdType *)displayMediumRectangleIAB;

/// 468x60
+ (UBEAdType *)displayFullIAB;

/// 320x100
+ (UBEAdType *)displayLarge;

/// 320x480
+ (UBEAdType *)displayFullScreen;

/// 480x320
+ (UBEAdType *)displayFullScreenLandscape;

/// 768x1024
+ (UBEAdType *)displayFullScreenTablet;

/// 1024x768
+ (UBEAdType *)displayFullScreenTabletLandscape;

/// 240x240
+ (UBEAdType *)displayTile;

@end

extern CGSize CGSizeFromUBEAdType(UBEAdType *adType) __deprecated_msg("Use adType.size instead");
extern UBEAdType *UBEAdTypeFromCGSize(CGSize size) __deprecated_msg("Use [UBEAdType adTypeFromSize:size] instead");
