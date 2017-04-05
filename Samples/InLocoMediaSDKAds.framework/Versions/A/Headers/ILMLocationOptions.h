//
//  ILMLocationOptions.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 10/13/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMError.h"

@interface ILMLocationOptions : NSObject

// Location key identifies your app to our Location server, you get this value when you register your app on our dashboard
@property (nonatomic, strong) NSString *locationKey;

// This array identifies the devices used in development. This way, these devices will receive only test ads. You must use this while developing.
@property (nonatomic, strong) NSArray *developmentDevices;

// Will activate verbose mode if set to true
@property (nonatomic, assign) BOOL logEnabled;

// Tells the api that your application will use location.
@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

// Says to the api to refresh user location as soon as the app open in foreground.
@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled :) BOOL locationRequestAtStart;

+ (BOOL)checkCredentialsForOptions:(ILMLocationOptions *)options error:(ILMError **)error;

@end
