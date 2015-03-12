//
//  UBEAppDelegate.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEAppDelegate.h"
#import <UbeeAPI/Ubee.h>

@implementation UBEAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    UBEOptions *options = [[UBEOptions alloc] init];
    
    [options setLogEnabled:YES]; // YES by default
    [options setDevelopmentEnvironment:NO];
    [options setAdsKey:@"cc0272758493bdf5173ef419c77668de8c730a53a5ea4d7cfaa2c9bcd36f77db"
             andSecret:@"391ec1721b87dc865e015b4e62dd6512e6d6906388485a2f283cd22f2610c261"];
    
    [options setLocationRequestAtStartEnabled:YES]; //YES by default
    [options setLocationEnabled:YES]; // YES by default
    
    [Ubee initWithOptions:options];
    
    UBEAdRequest *adRequest = [[UBEAdRequest alloc] init];
    UBEUserProfile *userProfile = [[UBEUserProfile alloc] initWithAge:20 andGender:UBEGenderMale];
    [adRequest setUserProfile:userProfile];
    [adRequest saveAsDefaultAdRequest];

    
    return YES;
}

@end
