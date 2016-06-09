//
//  ILMInterstitialAdvertisementViewController.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 6/18/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <InLocoMediaAPI/InLocoMedia.h>

#import "ILMInterstitialAdvertisementViewController.h"

@interface ILMInterstitialAdvertisementViewController () <ILMInterstitialAdDelegate>

@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@end

@implementation ILMInterstitialAdvertisementViewController

- (IBAction)requestInterstitial:(id)sender
{
    [_descriptionLabel setText:@"Requesting Interstitial..."];
    ILMInterstitialAd *ad = [[ILMInterstitialAd alloc] init];
    [ad setRequestTimeout:kILMAdRequestTimeoutMin];
    [ad setDelegate:self];
    ILMAdRequest* request = [[ILMAdRequest alloc]init];
    [request setAdUnitId:INTERSTITIAL_AD_UNIT_ID];
    [ad loadAdWithRequest:request];
}

- (void)ilmInterstitialAdDidReceiveAd:(ILMInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd was received. Will be shown in half second"];
    [self performSelector:@selector(openAd:) withObject:interstitialAd afterDelay:0.5];
}

- (void)ilmInterstitialAd:(ILMInterstitialAd *)adView didFailToReceiveAdWithError:(ILMError *)error
{
    [self.descriptionLabel setText:error.localizedDescription];
}

- (void)ilmInterstitialAdWillAppear:(ILMInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd has appeared"];
}

- (void)ilmInterstitialAdWillDisappear:(ILMInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd has disappeared"];
}

- (void)openAd:(ILMInterstitialAd *)ad
{
    [ad presentFromViewController:self];
}

@end