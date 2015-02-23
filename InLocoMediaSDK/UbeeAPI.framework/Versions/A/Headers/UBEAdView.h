//
//  UBEAdView.h
//  UbeeAPI
//
//  Created by Ubee on 2/27/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBEError.h"
#import "UBEAdType.h"
#import "UBEUserProfile.h"
#import "UBEAdRequest.h"
#import "UBEAdViewDelegate.h"

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

/*
 UBEAdView is the parent view that hold the generic Advertisement Properties. It should not be instantiated directly.
 */
@interface UBEAdView : UIView

//Property to determine the adType in a NSString value for loading on the User Defined Runtime Attributes in the Interface editor.
@property (nonatomic, strong) IBInspectable NSString *adTypeKey;

//If YES, the loadAd method will be called on the - (void)awakeFromNib method
@property (nonatomic, assign) IBInspectable BOOL loadOnAwake;

//AdView manager
@property (nonatomic, strong) id viewManager;

- (instancetype)initWithAdType:(UBEAdType)type;

//Sets the AdView Delegate
- (void)setDelegate:(id<UBEAdViewDelegate>)delegate;

//Sets the AdView Type
- (void)setAdType:(UBEAdType)adType;

//Sets the AdView Refresh Timeout
- (void)setRefreshInterval:(NSTimeInterval)refreshInterval;

//Sets the AdView request timeout. This timeout is only for searching if there is Ads Available.
- (void)setRequestTimeout:(NSTimeInterval)requestTimeout;

//Method to load an Advertisement. It uses the default UBEAdRequest
- (void)loadAd;

//Method to load
- (void)loadAdWithRequest:(UBEAdRequest *)request;

@end