//
//  UBEMediationViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 10/22/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEMediationViewController.h"
@import GoogleMobileAds;

@interface UBEMediationViewController () <GADBannerViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *desc;
@property GADBannerView *bannerView;
@property GADInterstitial *interstitial;
@end

@implementation UBEMediationViewController

- (void)viewDidLoad
{
    _bannerView = [[GADBannerView alloc] initWithAdSize:kGADAdSizeBanner];
    
    // Especificar o ID do bloco de anúncios.
    _bannerView.adUnitID = @"";
    
    _bannerView.rootViewController = self;
    [self.view addSubview:_bannerView];
    
    GADRequest *request = [GADRequest request];
    
    //request.testDevices = @[ GAD_SIMULATOR_ID ];
    [_bannerView loadRequest:request];
    
    [_bannerView setDelegate:self];
    
}

- (void)adViewDidReceiveAd:(GADBannerView *)view
{
    [self.desc setHidden:YES];
}

- (void)adView:(GADBannerView *)view didFailToReceiveAdWithError:(GADRequestError *)error
{
    NSLog(@"AdMediation request error: %@", error.localizedDescription);
    [self.desc setHidden:NO];
    [self.desc setText:error.description];
}

@end
