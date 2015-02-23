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

//Advertisements Types
typedef NS_ENUM(NSUInteger, UBEAdType) {

    UBEAdTypeNotification = 1,

    //An ad that will be filled accordingly with the nib file that was used to inflate it.
    UBEAdTypeNativeAdSmall,

    //An ad that will be filled accordingly with the nib file that was used to inflate it.
    UBEAdTypeNativeAdLarge,

    //An ad that will be filled accordingly with the nib file that was used to inflate it.
    UBEAdTypeNativeAdCoupon,

    //CGSize(320,50)
    UBEAdTypeDisplayAdBannerSmall, //320x50

    //CGSize(480,32)
    UBEAdTypeDisplayAdBannerSmallLandscape, //480x32

    //CGSize(728,90)
    UBEAdTypeDisplayAdBannerTablet, //728x90

    // An ad that will fill the width of the screen.
    // The size will be either 50px for iphone/ipod, or 90px for ipad.
    UBEAdTypeDisplayAdSmartBannerPortrait,

    // An ad that will fill the width of the screen.
    // The size will be either 32px for iphone/ipod, or 90px for ipad.
    UBEAdTypeDisplayAdSmartBannerLandscape,

    //CGSize(300,250)
    UBEAdTypeDisplayAdMediumRectangleIAB,

    //CGSize(468x60)
    UBEAdTypeDisplayAdFullBannerIAB,

    //CGSize(320x100)
    UBEAdTypeDisplayAdBannerLarge,

    //CGSize(320x480)
    UBEAdTypeDisplayAdFullScreen,

    //CGSize(480x320)
    UBEAdTypeDisplayAdFullScreenLandscape,

    //CGSize(768x1024)
    UBEAdTypeDisplayAdFullScreenTablet,

    //CGSize(1024x768)
    UBEAdTypeDisplayAdFullScreenTabletLandscape,

    //CGSize(240x240)
    UBEAdTypeDisplayAdTile

};

extern NSString *UBEAdTypeToString(UBEAdType type);

extern CGSize CGSizeFromUBEAdType(UBEAdType type);

extern UBEAdType UBEAdTypeFromSmartBanner(UBEAdType adType);

extern UBEAdType UBEAdTypeFromCGSize(CGSize size);

extern BOOL UBEIsAdTypeFullScreen(UBEAdType adType);

extern BOOL UBEIsAdTypeSmart(UBEAdType adType);
