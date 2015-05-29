//
//  UBEMediationViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 10/22/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#define MEDIATION_BANNER_AD_UNIT @"" //Put your mediation id here to test

#import "UBEMediationViewController.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface UBEMediationViewController () <GADBannerViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *desc;
@property GADBannerView *bannerView;
@end

@implementation UBEMediationViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    CGFloat containerHeight = self.view.frame.size.height;
    CGFloat containerWidth = self.view.frame.size.width;
    
    CGSize adSize = GAD_SIZE_320x50;
    CGPoint adViewOrigin = CGPointMake((containerWidth - adSize.width) / 2, containerHeight - adSize.height);
    
    _bannerView = [[GADBannerView alloc] initWithAdSize:kGADAdSizeBanner origin:adViewOrigin];
    _bannerView.autoresizingMask = UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin;
    
    // Especificar o ID do bloco de anúncios.
    _bannerView.adUnitID = MEDIATION_BANNER_AD_UNIT;

    _bannerView.rootViewController = self;
    [self.view addSubview:_bannerView];

    GADRequest *request = [GADRequest request];
    [request setGender:kGADGenderFemale];
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy"];
    NSDate *date = [dateFormatter dateFromString:@"27/05/1991"];
    [request setBirthday:date];
    [request setGender:kGADGenderFemale];
    
    [request setKeywords:@[@"Comida", @"Gastronomia"]];

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
    if (MEDIATION_BANNER_AD_UNIT.length == 0) {
        NSLog(@"AdMediation request error: Missing AdUnit");
        [self.desc setText:@"AdMediation request error: Missing AdUnit"];
    } else {
        NSLog(@"AdMediation request error: %@", error.localizedDescription);
        [self.desc setText:error.description];
    }

    [self.desc setHidden:NO];
}

@end
