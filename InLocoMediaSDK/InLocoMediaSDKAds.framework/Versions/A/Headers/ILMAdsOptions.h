//
//  ILMOptions.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 2/26/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMError.h"
#import "ILMOptions.h"

/**
 This class holds the necessary properties to configure the Ads SDK initialization.
*/
@interface ILMAdsOptions : NSObject

/**
 The Ads key identifies your app to our Ads server. This key is obtained when you register your app in our dashboard.
*/
@property (nonatomic, strong) NSString *adsKey;

/**
 An NSArray that identifies the devices used in development. Development devices only receive test Ads and MUST be set while developing your application.
*/
@property (nonatomic, strong) NSArray *developmentDevices;

/**
 Activates the verbose mode logging. Default: YES
*/
@property (nonatomic, assign) BOOL logEnabled;

/**
 Allows the SDK to use location events to improve ad targeting and deliver more relevants ads.
 
 Setting this option to NO disables every type of location detection and may reduce the number of served ads. Default: YES
*/
@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

/**
 Requests a location update when starting the Ads SDK, if location is enabled. This option will request the location authorization if needed. Default: YES
*/
@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled :) BOOL locationRequestAtStart;

/**
 This property delays the full SDK initialization until your application calls [ILMInLocoMedia giveUserPrivacyConsent:YES].
 If consent is not given, the SDK will initialize in limited mode.
 
 It should be set to YES for GDPR users.
 
 Default: NO
*/
@property (nonatomic, assign) BOOL requiresUserPrivacyConsent;

/**
 Validates the ILMAdsOptions properties.
 
 @param options The ILMAdsOptions object to be validated.
 @param error An error pointer.
 @return Returns YES if the adsKey is not nil, NO otherwise. In case of errors, sets the error pointer.
*/
+ (BOOL)checkCredentialsForOptions:(ILMAdsOptions *)options error:(ILMError **)error;

@end
