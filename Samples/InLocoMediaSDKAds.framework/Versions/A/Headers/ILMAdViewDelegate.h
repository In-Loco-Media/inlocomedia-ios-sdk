//
//  ILMAdViewDelegate.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 5/14/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ILMAdView;
@class ILMError;
/*
 The delegate that notifies some of the actions that happened on the view.
 */
@protocol ILMAdViewDelegate <NSObject>

@optional

//Called when the view has received an advertisement;
- (void)ilmAdViewDidReceiveAd:(ILMAdView *)adView;

//Called when an ad request has failed.
- (void)ilmAdView:(ILMAdView *)adView didFailToReceiveAdWithError:(ILMError *)error;

/**
 Called after the view is clicked and before the click action is performed
 Return YES if you allow the click action to be performed, NO otherwise.
 */
- (BOOL)ilmAdViewWillPerformClick:(ILMAdView *)adView;

 //Called after the view is clicked and before leaving the application to open the content of the advertisement.
- (void)ilmAdViewWillLeaveApplication:(ILMAdView *)adView;

 //Called when a rich media ad has been expanded into fullscreen.
- (void)ilmAdViewExpanded:(ILMAdView *)adView;

 //Called when a rich media ad has been resized in the current view controller;
- (void)ilmAdViewResized:(ILMAdView *)adView;

 //Called when the application returns from a click.
- (void)ilmAdViewDidReturnFromClick:(ILMAdView *)adView;

@end
