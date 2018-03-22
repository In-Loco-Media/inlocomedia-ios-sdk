//
//  ILMLocationOptions.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 10/13/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMError.h"

/**
 This class holds the necessary properties to configure the Location SDK initialization.
 */
@interface ILMLocationOptions : NSObject

// Location key identifies your app to our Location server, you get this value when you register your app on our dashboard
@property (nonatomic, strong) NSString *locationKey;

// This array identifies the devices used in development. This way, these devices will receive only test ads. You must use this while developing.
@property (nonatomic, strong) NSArray *developmentDevices;

// Activates verbose mode. Default: NO
@property (nonatomic, assign) BOOL logEnabled;

// Tells the api that your application will use location. Default: YES
@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

// Says to the api to refresh user location as soon as the app open in foreground. Default: YES
@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled :) BOOL locationRequestAtStart;

// Allows the Location SDK to automatically request permissions when needed. Default: YES
@property (nonatomic, assign) BOOL canRequestPermissions;

/**
 Validates the ILMLocationOptions properties.
 
 @param options The ILMLocationOptions object to be validated.
 @param error An error pointer.
 @return Returns YES if the applicationId is not nil, NO otherwise. In case of errors, sets the error pointer.
 */
+ (BOOL)checkCredentialsForOptions:(ILMLocationOptions *)options error:(ILMError **)error;

@end
