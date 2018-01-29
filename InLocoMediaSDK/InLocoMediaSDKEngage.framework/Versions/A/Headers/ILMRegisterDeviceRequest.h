//
//  ILMRegisterDeviceRequest.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Gabriel Falcone on 1/20/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds the properties to request a device register.
 */
@interface ILMRegisterDeviceRequest : NSObject

@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSString *pushProvider;
@property (nonatomic, readonly) NSString *pushProviderToken;

- (instancetype)init NS_UNAVAILABLE;

@end


/**
 This class holds the properties to build an ILMRegisterDeviceRequest instance.
 */
@interface ILMRegisterDeviceRequestBuilder : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *pushProvider;
@property (nonatomic, copy) NSString *pushProviderToken;


/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required that the <code>pushProvider</code> is set, and either the <code>userId</code> or <code>pushProviderToken</code> are set.
 In case of not following these conditions, this method will return NIL and set the error pointer, if available.
 
 @param error An error pointer.
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build:(NSError **)error;

/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required that the <code>pushProvider</code> is set, and either the <code>userId</code> or <code>pushProviderToken</code> are set.
 In case of not following these conditions, this method will return NIL.
 
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build;

@end
