//
//  UBEAdViewDelegate.h
//  UbeeAPI
//
//  Created by Ubee on 5/14/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBEAdView;
@class UBEError;
/*
 The delegate that notifies some of the actions that happened on the view.
 */
@protocol UBEAdViewDelegate <NSObject>

@optional

//This will be called when the view has received an advertisement and will load the image
- (void)ubeAdViewDidReceiveAd:(UBEAdView *)adView;

//Called when an ad request has failed.
- (void)ubeAdView:(UBEAdView *)adView didFailToReceiveAdWithError:(UBEError *)error;

/*
 This will be called after the view is clicked and before the click action is performed
 Return YES if you allow the click action to be performed, NO otherwise.
 */
- (BOOL)ubeAdViewWillPerformClick:(UBEAdView *)adView;

/*
 This will be called after the view is clicked and before leaving the application to open the content of the advertisement.
 */
- (void)ubeAdViewWillLeaveApplication:(UBEAdView *)adView;

@end
