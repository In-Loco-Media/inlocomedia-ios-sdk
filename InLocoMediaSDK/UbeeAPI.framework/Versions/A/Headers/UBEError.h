//
//  UBError.h
//  UbeeAPI
//
//  Created by Ubee on 11/20/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

//#define UBEE_ERROR_MESSAGE_REGEX_1 @"^errors:\\[(\\w+)\\.(\\w+)(\\-\\w+)*\\]$"
#define UBEE_ERROR_MESSAGE_REGEX_1 @"(\\w+)\\.(\\w+)(\\-\\w+)*"

extern NSString *const UBEAdsErrorDomain;
extern NSString *const UBELocationErrorDomain;
extern NSString *const UBEMapsErrorDomain;
extern NSString *const UBEAuthenticationErrorDomain;
extern NSString *const UBENetworkErrorDomain;

enum {
    //System 1xxx
    UBEUnsupportedSystemVersionError = 1000,
    UBEInitializationMissing = 1001,
    UBEInvalidArgumentsError = 1002,
    UBEInternalError = 1003,

    //Files 2xxx
    UBEFileNotFound = 2000,

    //Network 3xxx
    UBEInternetNotConnectedError = 3000,
    UBEInvalidURLForWebImageView = 3001,
    UBEUnauthorizedAccessTokenError = 3002,
    UBEURLConnectionCouldNotBeCreated = 3003,
    UBEURLUnsupportedURLResponseType = 3004,
    UBETimeoutError = 3005,
    UBEUnauthorized = 3006,
    UBEInvalidURLFormat = 3007,
    UBEInvalidContent = 3008,

    //Location 4xxx
    UBELocationScanningError = 4000,
    UBELocationNotFound = 4001,
    UBELocationProvidersUnavaialble = 4002,
    UBELocationInvalidRequestParams = 4003,

    //Ads 5xxx
    UBEInvalidAdType = 5000,
    UBEMissingAdType = 5001,
    UBEInterstitialAdAlreadyLoaded = 5002,
    UBEInvalidAdRequest = 5003,
    UBEAdRequestNoFill = 5004
    

};

@interface UBEError : NSError

// FIXME: remove the properties below and use the NSError's userInfo Dictionary to store the data. (https://developer.apple.com/library/mac/documentation/Cocoa/Reference/Foundation/Classes/NSError_Class/Reference/Reference.html)

- (id)initWithDomain:(NSString *)domain code:(NSInteger)code description:(NSString *)description;

+ (UBEError *)errorWithDomain:(NSString *)domain code:(NSInteger)code description:(NSString *)description;

@end
