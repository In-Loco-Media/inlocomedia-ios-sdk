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

//InterstitialAd minimum request timeout interval, value = 5
extern NSTimeInterval const kUBEAdRequestTimeoutMin;

@interface UBEInterstitialAd : NSObject

@property (nonatomic, weak) NSObject<UBEInterstitialAdDelegate> *delegate;

@property (nonatomic, assign) NSTimeInterval requestTimeout;

- (void)loadAd;

- (void)loadAdWithRequest:(UBEAdRequest *)request;

- (void)presentFromViewController:(UIViewController *)viewController;

- (void)present;

- (void)setOrientation:(UIInterfaceOrientation)orientation;

- (void)setDelegate:(NSObject<UBEInterstitialAdDelegate> *)delegate;

@end
