//
//  UBEInterstitialAdvertisementViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 6/18/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEInterstitialAdvertisementViewController.h"
#import <UbeeAPI/Ubee.h>

@interface UBEInterstitialAdvertisementViewController () <UBEInterstitialAdDelegate>

@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@end

@implementation UBEInterstitialAdvertisementViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (IBAction)requestInterstitial:(id)sender
{
    [_descriptionLabel setText:@"Requesting Interstitial..."];
    UBEInterstitialAd *ad = [[UBEInterstitialAd alloc] init];
    [ad setRequestTimeout:kUBEAdRequestTimeoutMin];
    [ad setDelegate:self];
    [ad loadAd];
}

- (void)ubeInterstitialAdDidReceiveAd:(UBEInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd was received. Will be shown in half second"];
    [self performSelector:@selector(openAd:) withObject:interstitialAd afterDelay:0.5];
}

- (void)ubeInterstitialAd:(UBEInterstitialAd *)adView didFailToReceiveAdWithError:(UBEError *)error
{
    [self.descriptionLabel setText:error.localizedDescription];
}

- (void)ubeInterstitialAdWillAppear:(UBEInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd has appeared"];
}

- (void)ubeInterstitialAdWillDisappear:(UBEInterstitialAd *)interstitialAd
{
    [self.descriptionLabel setText:@"The InterstitialAd has disappeared"];
}

- (void)openAd:(UBEInterstitialAd *)ad
{
    [ad presentFromViewController:self];
}

@end
