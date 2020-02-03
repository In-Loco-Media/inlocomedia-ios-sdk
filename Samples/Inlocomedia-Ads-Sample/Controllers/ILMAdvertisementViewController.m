//
//  ILMDetailViewController.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

@import InLocoSDK;
#import "ILMAdvertisementViewController.h"

@interface ILMAdvertisementViewController () <ILMAdViewDelegate>

@property (weak, nonatomic) IBOutlet UILabel *descLabel;

@end

@implementation ILMAdvertisementViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self createAd];
}

- (void)createAd
{
    ILMAdView *adView = nil;
    ILMAdType *adType = _element.adType;
    ILMAdRequest *request = [[ILMAdRequest alloc] init];
    
    // check if possible show the ad
    if (adType.isDisplay) {
        CGFloat containerHeight = self.view.bounds.size.height - self.navigationController.navigationBar.frame.size.height - [UIApplication sharedApplication].statusBarFrame.size.height;
        CGFloat containerWidth = self.view.bounds.size.width;
        CGSize adSize = _element.adType.size;
        CGPoint adViewOrigin = CGPointMake((containerWidth - adSize.width) / 2, containerHeight - adSize.height);
        
        if (adType.isSmart) {
            adViewOrigin.x = 0;
        }
        
        adView = [[ILMAdView alloc] initWithDisplayAdType:adType andOrigin:adViewOrigin];
        [request setAdUnitId:DISPLAY_AD_UNIT_ID];
    } else {
        NSAssert(NO, @"Wrong advertisement type");
    }
    
    [adView setDelegate:self];
    [adView loadAdWithRequest:request];
    
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
}

@end
