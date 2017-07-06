//
//  ILMInterstitialAdDelegate.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 6/18/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ILMInterstitialAd;
@class ILMError;

/*
 The delegate that notifies some of the actions that happened on the view.
 */
@protocol ILMInterstitialAdDelegate <NSObject>

@optional

//Called when the interstitial ad is complete and ready to be shown.
- (void)ilmInterstitialAdDidReceiveAd:(ILMInterstitialAd *)interstitialAd;

//Called when an ad request has failed.
- (void)ilmInterstitialAd:(ILMInterstitialAd *)adView didFailToReceiveAdWithError:(ILMError *)error;

//Called before the Interstitial appears.
- (void)ilmInterstitialAdWillAppear:(ILMInterstitialAd *)interstitialAd;

//Called before the Interstitial is closed.
- (void)ilmInterstitialAdWillDisappear:(ILMInterstitialAd *)interstitialAd;

//Called after the Interstitial is closed.
- (void)ilmInterstitialAdDidDisappear:(ILMInterstitialAd *)interstitialAd;

//Called after the ad is clicked and before leaving the application to open the content of the advertisement.
- (void)ilmInterstitialAdViewWillLeaveApplication:(ILMInterstitialAd *)interstitialAd;

// Called when the application returns from a click.
- (void)ilmInterstitialAdDidReturnFromClick:(ILMInterstitialAd *)interstitialAd;

@end
