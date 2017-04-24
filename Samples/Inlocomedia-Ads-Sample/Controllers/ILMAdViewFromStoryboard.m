//
//  ILMAdViewFromStoryboard.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 5/1/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <InLocoMediaAPI/InLocoMedia.h>
#import "ILMAdViewFromStoryboard.h"

@interface ILMAdViewFromStoryboard () <ILMAdViewDelegate>

@property (weak, nonatomic) IBOutlet ILMAdView *adView;

@property (weak, nonatomic) IBOutlet UILabel *descLabel;

@end

@implementation ILMAdViewFromStoryboard

- (void)viewDidLoad
{
    [super viewDidLoad];
    [_adView setDelegate:self];
}

- (void)ilmAdViewDidReceiveAd:(ILMAdView *)adView
{
    [self.descLabel setHidden:YES];
}

- (void)ilmAdView:(ILMAdView *)adView didFailToReceiveAdWithError:(ILMError *)error
{
    [self.descLabel setText:@"No advertisement available"];
}

@end
