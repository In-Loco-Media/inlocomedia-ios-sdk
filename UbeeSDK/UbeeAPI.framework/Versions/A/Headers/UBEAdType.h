//
//  UBEAdOptions.h
//  UbeeAPI
//
//  Created by Ubee on 2/28/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

//Keys for each advertisement type that may be used for the view runtime attributes on the Interface Builder
#define UBE_ADTYPE_KEY_NATIVE_SMALL @"native_small"
#define UBE_ADTYPE_KEY_NATIVE_LARGE @"native_large"
#define UBE_ADTYPE_KEY_NATIVE_COUPON @"native_coupon"
#define UBE_ADTYPE_KEY_DISPLAY_BANNER_SMALL @"display_banner_small"
#define UBE_ADTYPE_KEY_DISPLAY_BANNER_LARGE @"display_banner_large"
#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN @"display_full_screen"
#define UBE_ADTYPE_KEY_DISPLAY_FULLSCREEN_LANDSCAPE @"display_full_screen_landscape"
#define UBE_ADTYPE_KEY_DISPLAY_TILE @"display_tile"

//Advertisements Types
typedef enum
{
    UBEAdTypeNotification = 1000,
    
    UBEAdTypeNativeAdSmall = 2001,
    UBEAdTypeNativeAdLarge = 2002,
    UBEAdTypeNativeAdCoupon = 2004,
    
    UBEAdTypeDisplayAdBannerSmall = 3000,
    UBEAdTypeDisplayAdBannerLarge = 3001,
    UBEAdTypeDisplayAdFullScreen = 30002,
    UBEAdTypeDisplayAdTile = 30003,
    UBEAdTypeDisplayAdFullScreenLandscape = 30004
    
} UBEAdType;