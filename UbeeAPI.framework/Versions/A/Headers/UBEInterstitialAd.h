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

@interface UBEInterstitialAd : NSObject

- (void)loadAd;

- (void)loadAdWithRequest:(UBEAdRequest *)request;

- (void)presentFromViewController:(UIViewController *)viewController;

- (void)setRequestTimeout:(NSTimeInterval)requestInterval;

- (void)setDelegate:(id<UBEInterstitialAdDelegate>)delegate;

- (void)setOrientation:(UIInterfaceOrientation)orientation;

@end
