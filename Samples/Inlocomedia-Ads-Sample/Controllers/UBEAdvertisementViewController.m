//
//  UBEDetailViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEAdvertisementViewController.h"
#import <UbeeAPI/Ubee.h>

@interface UBEAdvertisementViewController () <UBEAdViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@end

@implementation UBEAdvertisementViewController

#pragma mark - Managing the detail item

- (void)setElement:(UBEListElement *)newElement
{
    if (_element != newElement) {
        _element = newElement;
        if (self.isViewLoaded) {
            [self createAd];
        }
    }
}

- (void)createAd
{
    UBEAdType *adType = _element.adType;

    UBEAdView *adView = nil;

    if (adType.isNative) {
        adView = [[UBEAdView alloc] initWithNativeAdType:adType andNibName:_element.nibName];
    } else if (adType.isDisplay) {
        CGFloat containerHeight = self.view.bounds.size.height - self.navigationController.navigationBar.frame.size.height - [UIApplication sharedApplication].statusBarFrame.size.height;
        CGFloat containerWidth = self.view.bounds.size.width;

        CGSize adSize = _element.adType.size;
        CGPoint adViewOrigin = CGPointMake((containerWidth - adSize.width) / 2, containerHeight - adSize.height);

        if (adType.isSmart) {
            adViewOrigin.x = 0;
        }

        adView = [[UBEAdView alloc] initWithDisplayAdType:adType andOrigin:adViewOrigin];

    } else {
        NSAssert(NO, @"Missing advertisement type");
    }

    [adView setDelegate:self];
    [adView loadAd];
    [self.view addSubview:adView];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    for (UIView *view in self.view.subviews) {
        if ([view isKindOfClass:[UBEAdView class]]) {
            [view removeFromSuperview];
        }
    }
    [self.view setClipsToBounds:YES];
    [self createAd];
}

- (void)ubeAdView:(UBEAdView *)adView didFailToReceiveAdWithError:(UBEError *)error
{
    [_descLabel setHidden:NO];
    [_descLabel setText:error.localizedDescription];
    NSLog(@"App: %@", [error localizedDescription]);
}

- (void)ubeAdViewDidReceiveAd:(UBEAdView *)adView
{
    [_descLabel setHidden:YES];
}

@end
