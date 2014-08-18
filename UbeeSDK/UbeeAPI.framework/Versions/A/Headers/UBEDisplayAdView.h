//
//  UBEAdView.h
//  UbeeAPI
//
//  Created by Ubee on 2/24/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBEAdView.h"

// Returns the CGSize for the provided UBEAdType.
// If the UBEAdType is unknown, returns CGSizeZero.
CGSize CGSizeFromUBEDisplayAdType(UBEAdType type);

@interface UBEDisplayAdView : UBEAdView

//Max size for DisplayBannerSmall type (320x50)
extern CGSize const kSizeDisplayBannerSmall;

//Max size for DisplayBannerSmall type. 320x160
extern CGSize const kSizeDisplayBannerLarge;

//Max size for DisplayBannerSmall type. 240x240
extern CGSize const kSizeDisplayTile;

//Max size for DisplayBannerSmall type. 320x480
extern CGSize const kSizeDisplayFullscreen;

- (instancetype)initWithAdType:(UBEAdType)type andOrigin:(CGPoint)origin;

@end
