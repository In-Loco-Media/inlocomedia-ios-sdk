//
//  ILMFirebaseDeviceRegisterRequest.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Gabriel Falcone on 1/20/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMRegisterDeviceRequest.h"

/**
 This class holds the properties to build an ILMRegisterDeviceRequest instance for Firebase.
 */
@interface ILMFirebaseRegisterDeviceRequestBuilder : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *firebaseToken;

/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required either the <code>userId</code> or <code>firebaseToken</code> are set.
 In case of not following these conditions, this method will return NIL and set the error pointer, if available.
 
 @param error An error pointer.
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build:(NSError **)error;

/**
 Tries to build an instance of ILMRegisterDeviceRequest.
 It is required either the <code>userId</code> or <code>firebaseToken</code> are set.
 In case of not following these conditions, this method will return NIL.
 
 @return Returns an instance of ILMRegisterDeviceRequest if the parameters are valid, and NIL otherwise.
 */
- (ILMRegisterDeviceRequest *)build;

@end
