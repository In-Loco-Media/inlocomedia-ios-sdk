//
//  UBEInterstitialAdDelegate.h
//  UbeeAPI
//
//  Created by Ubee on 6/18/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBEInterstitialAd;
@class UBEError;

/*
 The delegate that notifies some of the actions that happened on the view.
 */
@protocol UBEInterstitialAdDelegate <NSObject>

@optional

//This will be called when the interstitial ad has been completed and is ready to be shown
- (void)ubeInterstitialAdDidReceiveAd:(UBEInterstitialAd *)interstitialAd;

//Called when an ad request has failed.
- (void)ubeInterstitialAd:(UBEInterstitialAd *)adView didFailToReceiveAdWithError:(UBEError *)error;

//Called before the Interstitial appear
- (void)ubeInterstitialAdWillAppear:(UBEInterstitialAd *)interstitialAd;

//Called before the Interstitial will close
- (void)ubeInterstitialAdWillDisappear:(UBEInterstitialAd *)interstitialAd;

//Called after the Interstitial did close
- (void)ubeInterstitialAdDidDisappear:(UBEInterstitialAd *)interstitialAd;

//This will be called after the view is clicked and before leaving the application to open the content of the advertisement.
- (void)ubeInterstitialAdViewWillLeaveApplication:(UBEInterstitialAd *)interstitialAd;

@end