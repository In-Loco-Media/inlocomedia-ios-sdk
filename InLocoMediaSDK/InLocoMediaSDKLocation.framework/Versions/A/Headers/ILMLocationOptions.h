//
//  ILMLocationOptions.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 10/13/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMOptions.h"
#import "ILMError.h"

/**
 This class holds the necessary properties to configure the Location SDK initialization.
 */
@interface ILMLocationOptions : ILMOptions

/**
 The Location key identifies your app to our Location server. This key is obtained when you register your app in our dashboard.
*/
@property (nonatomic, strong) NSString *locationKey;

/**
 An NSArray that identifies the devices used in development.
*/
@property (nonatomic, strong) NSArray *developmentDevices;

/**
 Activates the verbose mode logging. Default: YES
*/
@property (nonatomic, assign) BOOL logEnabled;

/**
 Allows the SDK to use location events. Setting this option to NO disables every type of location detection. Default: YES
*/
@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

/**
 Requests a location update when starting the Location SDK. This option will request the location authorization if enabled. Default: YES
*/
@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled :) BOOL locationRequestAtStart;

/**
 Allows the Location SDK to automatically request permissions when needed. Default: YES
*/
@property (nonatomic, assign) BOOL canRequestPermissions;

/**
 This property delays the full SDK initialization until your application calls [ILMInLoco giveUserPrivacyConsent:YES].
 If consent is not given, the SDK will initialize in limited mode.
 
 It should be set to YES for GDPR users.
 
 Default: NO
*/
@property (nonatomic, assign) BOOL requiresUserPrivacyConsent;

/**
 Allows the SDK to track the user's screen navigation. Default: NO
 */
@property (nonatomic, assign) BOOL screenTrackingEnabled;

/**
 Validates the ILMLocationOptions properties.
 
 @param options The ILMLocationOptions object to be validated.
 @param error An error pointer.
 @return Returns YES if the applicationId is not nil, NO otherwise. In case of errors, sets the error pointer.
 */
+ (BOOL)checkCredentialsForOptions:(ILMLocationOptions *)options error:(ILMError **)error;

@end
