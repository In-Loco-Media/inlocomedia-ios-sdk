//
//  ILMOptInDeviceRequest.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Marcel Rebouças on 26/01/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds the properties to request a device opt-in.
 */
@interface ILMOptInDeviceRequest : NSObject

@property (nonatomic, readonly) NSString *userId;

- (instancetype)init NS_UNAVAILABLE;

@end

/**
 This class holds the properties to build an ILMOptInDeviceRequest instance.
 */
@interface ILMOptInDeviceRequestBuilder : NSObject

@property (nonatomic, copy) NSString *userId;

/**
 Tries to build an instance of ILMOptInDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following this condition, this method will return NIL and set the error pointer, if available.
 
 @param error An error pointer.
 @return Returns an instance of ILMOptInDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMOptInDeviceRequest *)build:(NSError **)error;

/**
 Tries to build an instance of ILMOptInDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following this condition, this method will return NIL.
 
 @return Returns an instance of ILMOptInDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMOptInDeviceRequest *)build;

@end
