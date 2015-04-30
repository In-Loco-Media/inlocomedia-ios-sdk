//
//  UBEAdView.h
//  UbeeAPI
//
//  Created by Vitor on 2/18/15.
//  Copyright (c) 2015 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBEAdType.h"
#import "UBEAdViewDelegate.h"
#import "UBEAdRequest.h"

//Minimum AdView refresh interval, value = 30
extern NSTimeInterval const kUBEAdRefreshIntervalMin;

//Maximum AdView refresh interval, value = 120
extern NSTimeInterval const kUBEAdRefreshIntervalMax;

//AdView refresh deactivated, value = 0
extern NSTimeInterval const kUBEAdRefreshDeactivated;

//AdView minimum request timeout interval, value = 5
extern NSTimeInterval const kUBEAdRequestTimeoutMin;

//AdView request timeout, value = 7
extern NSTimeInterval const kUBEAdRequestTimeoutDefault;

//AdView long request timeout, value = 10
extern NSTimeInterval const kUBEAdRequestTimeoutLong;

@interface UBEAdView : UIView

/// The object that acts as a delegate of the UBEAdView
@property (nonatomic, weak) NSObject<UBEAdViewDelegate> *delegate;

/// The timeout of the requests that searches for Ads.
@property (nonatomic, assign) NSTimeInterval requestTimeout;

/// The frequency that the Ads will be changed
@property (nonatomic, assign) NSTimeInterval refreshInterval;

/// Property to determine the adType in a NSString value from the Interface Builder.
@property (nonatomic, strong) IBInspectable NSString *adTypeKey;

/// Property to determine the Native XIB file name in a NSString value from the Interface Builder.
@property (nonatomic, strong) IBInspectable NSString *nativeXibName;

/// Default init constructor is not available.
- (instancetype)init NS_UNAVAILABLE;

/// Default initWithFrame constructor is not available.
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 Constructor initWithCoder is available when creating UBEAdView in the Interface Builder.
 Certify that the UBEAdView in the nib file contains all required properties or an exception may be thrown.
 */
- (instancetype)initWithCoder:(NSCoder *)aDecoder;

/**
 Constructor for Display Ad types.
 The origin of the Ad is considered {0,0}.
 The size is automatically set according to the adType.
 */
- (instancetype)initWithDisplayAdType:(UBEAdType *)adType;

/**
 Constructor for Display Ad types.
 The size is automatically set according to the adType.
 */
- (instancetype)initWithDisplayAdType:(UBEAdType *)adType andOrigin:(CGPoint)origin;

/**
 Constructor for Native Ad Types.
 Certify that in the nib file all required properties are set or an exception may be thrown.
 */
- (instancetype)initWithNativeAdType:(UBEAdType *)adType andNibName:(NSString *)nibName;

//Sets the AdView Refresh Timeout
- (void)setRefreshInterval:(NSTimeInterval)refreshInterval;

//Sets the AdView request timeout. This timeout is only for searching if there is Ads Available.
- (void)setRequestTimeout:(NSTimeInterval)requestTimeout;

//Method to load an Advertisement. It uses the default UBEAdRequest
- (void)loadAd;

//Method to load an Advertisement.
- (void)loadAdWithRequest:(UBEAdRequest *)request;

@end
