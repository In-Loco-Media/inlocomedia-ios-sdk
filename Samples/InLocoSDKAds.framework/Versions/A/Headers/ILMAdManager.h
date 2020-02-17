

//
//  ILMAdManager.h
//  InLocoMedia-iOS-SDK
//
//  Created by Marcel Rebouças on 4/19/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMAdType.h"
#import "ILMAdRequest.h"
#import "ILMAdManagerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface ILMAdManager : NSObject

@property (nonatomic, assign) NSTimeInterval requestTimeout;
@property (nonatomic, assign) BOOL reloadAds;

/// Default init constructor is not available.
- (instancetype)init NS_UNAVAILABLE;

//Method to load an Advertisement. It uses the default ILMAdRequest
- (void)loadAd;

//Method to load an Advertisement.
- (void)loadAdWithRequest:(ILMAdRequest *)adRequest;

//Method to access the current Ad View.
- (UIView *)adView;

//Method that returns the refresh interval of the ad.
- (NSTimeInterval)refreshInterval;

@end

NS_ASSUME_NONNULL_END
