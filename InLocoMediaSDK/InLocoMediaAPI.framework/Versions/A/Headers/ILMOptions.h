//
//  ILMOptions.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 2/26/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMError.h"

@interface ILMOptions : NSObject

// Ads key identifies your app to our Ads server, you get this value when you register your app on our dashboard
@property (nonatomic, strong) NSString *adsKey;

// This array identifies the devices used in development. This way, these devices will receive only test ads. You must use this while developing.
@property (nonatomic, strong) NSArray *developmentDevices;

// Will activate verbose mode if set to true
@property (nonatomic, assign) BOOL logEnabled;

// DEPRECATED. Set API to development mode
@property (nonatomic, assign, getter = isDevelopmentEnvironment, setter = setDevelopmentEnvironment :) BOOL developmentEnvironment;

// Tells the api that your application will use location. We use location to improve targeting and deliver more relevants ads.
@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

// Says to the api to refresh user location as soon as the app open in foreground.
@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled :) BOOL locationRequestAtStart;

// Sets Ads key
- (void)setAdsKey:(NSString *)adsKey;

+ (BOOL)checkCredentialsForOptions:(ILMOptions *)options error:(ILMError **)error;

@end
