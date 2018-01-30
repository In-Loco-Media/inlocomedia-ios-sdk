//
//  ILMOptOutDeviceRequest.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Gabriel Falcone on 1/20/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds the properties to request a device opt-out.
 */
@interface ILMOptOutDeviceRequest : NSObject

@property (nonatomic, readonly) NSString *userId;

- (instancetype)init NS_UNAVAILABLE;

@end

/**
 This class holds the properties to build an ILMOptOutDeviceRequest instance.
 */
@interface ILMOptOutDeviceRequestBuilder : NSObject

@property (nonatomic, copy) NSString *userId;

/**
 Tries to build an instance of ILMOptOutDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following this condition, this method will return NIL and set the error pointer, if available.
 
 @param error An error pointer.
 @return Returns an instance of ILMOptOutDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMOptOutDeviceRequest *)build:(NSError **)error;

/**
 Tries to build an instance of ILMOptOutDeviceRequest.
 It is required that the <code>userId</code> is not NIL.
 In case of not following this condition, this method will return NIL.
 
 @return Returns an instance of ILMOptOutDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMOptOutDeviceRequest *)build;

@end
