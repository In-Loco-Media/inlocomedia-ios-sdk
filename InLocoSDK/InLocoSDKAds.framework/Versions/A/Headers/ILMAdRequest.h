//
//  ILMAdRequest.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 5/13/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMUserProfile.h"

@interface ILMAdRequest : NSObject

/**
 The User profile is used to improve Ad Requests and filter content.
*/
@property (nonatomic, strong) ILMUserProfile *userProfile;

/**
 Set of NSStrings to optimize the Ad Request results.
*/
@property (nonatomic, strong) NSMutableSet *keywords;

/**
 Keyword's locale.
*/
@property (nonatomic, strong) NSString *locale;

/**
 A Query to filter Ad Requests.
*/
@property (nonatomic, strong) NSString *query;

/**
 An Id to request a specific Advertisement.
*/
@property (nonatomic, strong) NSString *advertisementId;

/**
 Sets whether the AdRequest is in development mode or not. Default: NO
*/
@property (nonatomic, assign, getter = isDevelopmentEnabled, setter = setDevelopmentEnabled :) BOOL developmentEnabled;

/**
 Request agent string to identify the ad request's origin.
 Third party libraries that reference the InLocoMedia SDK should set this variable to denote the platform from which the ad request originated.
 For example, a third-party ad network called "CoolAds network" that mediates requests to the InLocoMedia SDK should set this variable with "CoolAds".
*/
@property (nonatomic, strong) NSString *requestAgent;

/**
 Custom HMTL that will be delivered to display ad requests in development mode.
*/
@property (nonatomic, strong) NSString *testHtml;

/**
 Identifier of a specific creative that was genereted after a campaign content was created.
*/
@property (nonatomic, strong) NSString *creativeId;

/**
 Ad Unit identifier.
*/
@property (nonatomic, strong) NSString *adUnitId;

/**
 Adds a Set of keywords to the AdRequest target.
*/
- (void)addKeywords:(NSSet *)keywords;

/**
 Adds a keyword to the AdRequest target.
*/
- (void)addKeyword:(NSString *)keyword;

@end
