//
//  ILMNativeAdvertisementViewController.m
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by Rafael Gouveia on 3/9/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMNativeAdvertisementViewController.h"

@interface ILMNativeAdvertisementViewController () <ILMAdViewDelegate>

@property (weak, nonatomic) IBOutlet UILabel *descLabel;

@end

@implementation ILMNativeAdvertisementViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self createAd];
}

- (void)createAd
{
    ILMAdView *adView = nil;
    ILMAdType *adType = self.element.adType;
    ILMAdRequest *request = [[ILMAdRequest alloc] init];
    
    // check if ad is native type
    if (adType.isNative) {
        adView = [[ILMAdView alloc] initWithNativeAdType:adType andNibName:self.element.nibName];
        [request setAdUnitId:NATIVE_AD_UNIT_ID];
    } else {
        NSAssert(NO, @"Wrong advertisement type");
    }
    
    [adView setDelegate:self];
    [adView loadAdWithRequest:request];
    
    adView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:adView];
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
    [self.view layoutSubviews];
    
    NSDictionary *views = NSDictionaryOfVariableBindings(adView);
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|[adView]|" options:0 metrics:nil views:views]];
    [self.view addConstraint:[NSLayoutConstraint constraintWithItem:adView attribute:NSLayoutAttributeHeight relatedBy:0 toItem:self.view attribute:NSLayoutAttributeHeight multiplier:0.6 constant:0]];
}

@end
