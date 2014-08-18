//
//  UBEAdViewFromStoryboard.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 5/1/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEAdViewFromStoryboard.h"
#import <UbeeAPI/Ubee.h>

@interface UBEAdViewFromStoryboard () <UBEAdViewDelegate>
@property (weak, nonatomic) IBOutlet UBENativeAdView *adView;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;


@end

@implementation UBEAdViewFromStoryboard

- (void)viewDidLoad
{
    [super viewDidLoad];
    [_adView setDelegate:self];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    
}

- (void)ubeAdViewDidReceiveAd:(UBEAdView *)adView
{
    [self.descLabel setHidden:YES];
}

- (void)ubeAdView:(UBEAdView *)adView didFailToReceiveAdWithError:(UBEError *)error
{
    [self.descLabel setText:@"No advertisement available"];
}

@end
