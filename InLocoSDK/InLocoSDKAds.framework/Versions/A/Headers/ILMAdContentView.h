//
//  ILMAdView.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 2/27/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMAdViewDelegate.h"
#import "ILMAdCloseButton.h"
#import "ILMAdType.h"

@class ILMAdvertisementModel;
@class ILMAdEventManager;
@protocol ILMAdDelegate;

@interface ILMAdContentView : UIView

@property (nonatomic, strong, readonly) ILMAdType *adType;
@property (nonatomic, strong) ILMAdvertisementModel *loadedAd;
@property (nonatomic, weak) ILMAdCloseButton *closeButton;
@property (nonatomic, weak) NSObject <ILMAdDelegate> *delegate;
@property (nonatomic, strong, readwrite) ILMAdEventManager *eventManager;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (instancetype)initWithAdType:(ILMAdType *)adType;

- (BOOL)canRefreshAd;

/// Abstract method. Implement in super class.
- (BOOL)validateAdType:(ILMAdType *)adType;

/// Abstract method. Implement in super class.
- (void)loadAd:(ILMAdvertisementModel *)ad error:(ILMError **)error;

- (NSUInteger)supportedInterfaceOrientations;

- (void)setCloseButton;
- (void)setCustomCloseButtonAtPosition:(ILMAdCloseButtonPosition)position;
- (void)setBlankCloseButtonAtPosition:(ILMAdCloseButtonPosition)position;
- (void)setCloseButton:(ILMAdCloseButtonPosition)position withFrame:(CGRect)frame withImage:(BOOL)image;
- (void)removeCloseButton;
- (void)close;

- (void)containerViewWillTransitionToSize:(CGSize)size;
- (ILMAdvertisementModel *)ad;
- (void)orientationDidChange;

@end
