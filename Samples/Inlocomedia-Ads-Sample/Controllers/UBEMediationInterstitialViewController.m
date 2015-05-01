//
//  UBEMediationInterstitialViewController.m
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by Gabriel on 2/23/15.
//  Copyright (c) 2015 Ubee. All rights reserved.
//

#define MEDIATION_INTERSTITIAL_AD_UNIT @"" //Put your mediation id here to test

#import "UBEMediationInterstitialViewController.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface UBEMediationInterstitialViewController () <GADInterstitialDelegate>

@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property(nonatomic, strong) GADInterstitial *interstitial;

@end

@implementation UBEMediationInterstitialViewController

- (IBAction)requestInterstitial:(id)sender {
    
    [_descriptionLabel setText:@"Requesting Interstitial..."];
    
    self.interstitial = [[GADInterstitial alloc] init];
    self.interstitial.adUnitID = MEDIATION_INTERSTITIAL_AD_UNIT;
    
    GADRequest *request = [GADRequest request];
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy"];
    NSDate *date = [dateFormatter dateFromString:@"27/05/1991"];
    [request setBirthday:date];
    [request setGender:kGADGenderFemale];
    
    [request setKeywords:@[@"Comida", @"Gastronomia"]];
    
    [self.interstitial loadRequest:request];
    [self.interstitial setDelegate:self];
}

- (void)interstitialDidReceiveAd:(GADInterstitial *)ad
{
    [_descriptionLabel setText:@"Presenting Interstitial..."];
    [self.interstitial presentFromRootViewController:self];
}

- (void)interstitial:(GADInterstitial *)ad didFailToReceiveAdWithError:(GADRequestError *)error
{
    [self.descriptionLabel setText:error.localizedDescription];
}

-(void)interstitialDidDismissScreen:(GADInterstitial *)ad
{
        [_descriptionLabel setText:@"Interstitial was closed."];
}

@end
