//
//  ILMWebhookDeviceRegisterRequest.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Gabriel Falcone on 1/20/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMRegisterDeviceRequest.h"

/**
 This class holds the properties to build an ILMRegisterDeviceRequest instance for Webhook usage.
 */
@interface ILMWebhookRegisterDeviceRequestBuilder : NSObject

@property (nonatomic, copy) NSString *userId;

/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following these conditions, this method will return NIL and set the error pointer, if available.
 
 @param error An error pointer.
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build:(NSError **)error;

/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following these conditions, this method will return NIL.
 
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build;

@end
