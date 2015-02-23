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
    CGFloat containerHeight = self.view.bounds.size.height - self.navigationController.navigationBar.frame.size.height - [UIApplication sharedApplication].statusBarFrame.size.height;
    CGFloat containerWidth = self.view.bounds.size.width;
    
    CGSize adSize = CGSizeFromUBEAdType(_element.adType);
    CGPoint adViewOrigin = CGPointMake((containerWidth - adSize.width)/2, containerHeight - adSize.height);
    
    UBEAdView *adView;
    switch (_element.adType) {
        case UBEAdTypeNativeAdSmall:
        case UBEAdTypeNativeAdLarge:
        case UBEAdTypeNativeAdCoupon:
            adView = [[UBENativeAdView alloc] initWithType:_element.adType andNibName:_element.nibName];
            break;
        case UBEAdTypeDisplayAdBannerSmall:
        case UBEAdTypeDisplayAdBannerSmallLandscape:
        case UBEAdTypeDisplayAdBannerTablet:
        case UBEAdTypeDisplayAdBannerLarge:
        case UBEAdTypeDisplayAdTile:
        case UBEAdTypeDisplayAdMediumRectangleIAB:
        case UBEAdTypeDisplayAdFullBannerIAB:
            adView = [[UBEDisplayAdView alloc] initWithAdType:_element.adType
                                                    andOrigin:adViewOrigin];
            break;
        case UBEAdTypeDisplayAdSmartBannerPortrait:
        case UBEAdTypeDisplayAdSmartBannerLandscape:
            adView = [[UBEDisplayAdView alloc] initWithAdType:_element.adType andOrigin:CGPointMake(0, adViewOrigin.y)];
            break;
        default:
            NSAssert(NO, @"Missing advertisement type");
            break;
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
