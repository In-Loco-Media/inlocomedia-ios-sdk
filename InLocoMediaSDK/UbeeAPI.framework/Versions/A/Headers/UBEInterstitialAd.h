//
//  UBEInterstitialAd.h
//  UbeeAPI
//
//  Created by Ubee on 6/18/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>
#import "UBEAdRequest.h"
#import "UBEInterstitialAdDelegate.h"

@class UIViewController;

//InterstitialAd minimum request timeout interval, value = 5
extern NSTimeInterval const kUBEAdRequestTimeoutMin;

@interface UBEInterstitialAd : NSObject

- (void)loadAd;

- (void)loadAdWithRequest:(UBEAdRequest *)request;

- (void)presentFromViewController:(UIViewController *)viewController;

- (void)present;

- (void)setRequestTimeout:(NSTimeInterval)requestInterval;

- (void)setDelegate:(id<UBEInterstitialAdDelegate>)delegate;

- (void)setOrientation:(UIInterfaceOrientation)orientation;

@end
