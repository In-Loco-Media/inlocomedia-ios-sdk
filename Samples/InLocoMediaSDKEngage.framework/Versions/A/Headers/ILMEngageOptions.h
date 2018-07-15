//
//  ILMInLocoEngageOptions.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Dicksson Oliveira on 11/24/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMOptions.h"

/**
 This class holds the properties to configure the Engage SDK initialization.
 */
@interface ILMEngageOptions : ILMOptions

/**
 The application ID is given to you when you register your app in the Engage Dashboard.
 */
@property (nonatomic) NSString *applicationId;

/**
 Activates the verbose mode logging. Default: NO
 */
@property (nonatomic, assign) BOOL logEnabled;

/**
 Allows the SDK to use location events. Setting this option to NO disables every type of location detection. Default: YES
 */
@property (nonatomic, assign) BOOL locationEnabled;

/**
 Requests a location update when starting the Engage SDK. This option will request the location authorization if enabled. Default: YES
 */
@property (nonatomic, assign) BOOL locationRequestAtStart;

/**
 Validates the ILMEngageOptions properties.

 @param options The ILMEngageOptions object to be validated.
 @param error An error pointer.
 @return Returns YES if the applicationId is not nil, NO otherwise. In case of errors, sets the NSError pointer.
 */
+ (BOOL)checkCredentialsForOptions:(ILMEngageOptions *)options error:(NSError **)error;

@end
