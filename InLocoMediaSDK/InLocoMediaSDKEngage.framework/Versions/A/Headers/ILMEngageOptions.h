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
 Activates the verbose mode logging.
 */
@property (nonatomic, assign) BOOL logEnabled;

/**
 Validates the ILMEngageOptions properties.

 @param options The ILMEngageOptions object to be validated.
 @param error An error pointer.
 @return Returns YES if the applicationId is not nil, NO otherwise. In case of errors, sets the NSError pointer.
 */
+ (BOOL)checkCredentialsForOptions:(ILMEngageOptions *)options error:(NSError **)error;

@end
