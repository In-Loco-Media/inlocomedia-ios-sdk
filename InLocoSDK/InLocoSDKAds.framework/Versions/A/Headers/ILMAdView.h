//
//  ILMAdView.h
//  InLocoMediaAPI
//
//  Created by Vitor on 2/18/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMAdType.h"
#import "ILMAdViewDelegate.h"
#import "ILMAdRequest.h"

/**
 Minimum AdView refresh interval. Default: 30
*/
extern NSTimeInterval const kILMAdRefreshIntervalMin;

/**
 Maximum AdView refresh interval. Default: 120
*/
extern NSTimeInterval const kILMAdRefreshIntervalMax;

/**
 AdView refresh deactivated. Default: 0
*/
extern NSTimeInterval const kILMAdRefreshDeactivated;

/**
 AdView minimum request timeout interval. Default: 5
*/
extern NSTimeInterval const kILMAdRequestTimeoutMin;

/**
 AdView default request timeout interval. Default: 7
*/
extern NSTimeInterval const kILMAdRequestTimeoutDefault;

/**
 AdView long request timeout interval. Default: 10
 */
extern NSTimeInterval const kILMAdRequestTimeoutLong;

NS_ASSUME_NONNULL_BEGIN

@interface ILMAdView : UIView

/**
 The object that acts as a delegate of the ILMAdView
*/
@property (nonatomic, weak, nullable) NSObject <ILMAdViewDelegate> *delegate;

/**
 The timeout of Ad requests.
*/
@property (nonatomic, assign) NSTimeInterval requestTimeout;

/**
 Property that determines the adType in a NSString value from the Interface Builder.
*/
@property (nonatomic, strong) IBInspectable NSString *adTypeKey;

/**
 Loads an Ad when it is awaken from NIB file
*/
@property (nonatomic, assign) IBInspectable BOOL loadOnAwake;

/**
 Property to determine the Native XIB file name in a NSString value from the Interface Builder.
*/
@property (nonatomic, strong) IBInspectable NSString *nibName;

/**
 The default init constructor is not available.
*/
- (instancetype)init NS_UNAVAILABLE;

/**
 The default initWithFrame constructor is not available.
*/
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 Constructor initWithCoder is available when creating ILMAdView in the Interface Builder.
 Certify that the ILMAdView in the NIB file contains all required properties or an exception may be thrown.
*/
- (instancetype)initWithCoder:(NSCoder *)aDecoder;

/**
 Constructor for Display Ad types.
 The origin of the Ad is considered {0,0}.
 The size is automatically set according to the adType.
*/
- (instancetype)initWithDisplayAdType:(ILMAdType *)adType;

/**
 Constructor for Display Ad types.
 The size is automatically set according to the adType.
*/
- (instancetype)initWithDisplayAdType:(ILMAdType *)adType andOrigin:(CGPoint)origin;

/**
 Constructor for Native Ad Types.
 Certify that in the nib file all required properties are set or an exception may be thrown.
*/
- (instancetype)initWithNativeAdType:(ILMAdType *)adType andNibName:(NSString *)nibName;

/**
 Sets the AdView request timeout.
*/
- (void)setRequestTimeout:(NSTimeInterval)requestTimeout;

/**
 Loads an Advertisement with a default ILMAdRequest object.
*/
- (void)loadAd;

/**
 Loads an Advertisement.
*/
- (void)loadAdWithRequest:(ILMAdRequest *)request;

/**
 Returns the refresh interval of the view.
*/
- (NSTimeInterval)refreshInterval;

@end

NS_ASSUME_NONNULL_END
