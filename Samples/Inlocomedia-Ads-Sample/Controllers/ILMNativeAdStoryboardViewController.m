//
//  ILMNativeAdStoryboardViewController.m
//  InLocoMedia-Ads-Sample
//
//  Created by Rafael Gouveia on 5/3/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMNativeAdStoryboardViewController.h"

@interface ILMNativeAdStoryboardViewController () <ILMAdViewDelegate>

@end

@implementation ILMNativeAdStoryboardViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    ILMAdRequest *request = [[ILMAdRequest alloc] init];
    [request setAdUnitId:NATIVE_AD_UNIT_ID];
    [self.adView loadAdWithRequest:request];
}

- (void)ilmAdView:(ILMAdView *)adView didFailToReceiveAdWithError:(ILMError *)error
{
    [_descLabel setHidden:NO];
    [_descLabel setText:error.localizedDescription];
    NSLog(@"App: %@", [error localizedDescription]);
}

- (void)ilmAdViewDidReceiveAd:(ILMAdView *)adView
{
    [_descLabel setHidden:YES];
}

@end
