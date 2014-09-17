//
//  UBEAdRequest.h
//  UbeeAPI
//
//  Created by Ubee on 5/13/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBEUserProfile.h"
#import "UBECategory.h"

@interface UBEAdRequest : NSObject

//Minimum AdView refresh interval, value = 30
extern NSTimeInterval const kUBEAdRefreshIntervalMin;

//Maximum AdView refresh interval, value = 120
extern NSTimeInterval const kUBEAdRefreshIntervalMax;

//AdView refresh minimum interval, value = 30
extern NSTimeInterval const kUBEAdRefreshIntervalMin;

//AdView refresh deactivated, value = 0
extern NSTimeInterval const kUBEAdRefreshDeactivated;

//AdView request timeout, value = 15
extern NSTimeInterval const kUBEAdRequestTimeout;

//AdView minimum request timeout interval, value = 5
extern NSTimeInterval const kUBEAdRequestTimeoutMin;

@property (nonatomic, strong) UBEUserProfile *userProfile;

@property (nonatomic, strong) NSMutableSet *categories;

@property (nonatomic, assign, getter = isDevelopmentEnabled, setter = setDevelopmentEnabled:) BOOL developmentEnabled;

//Uses the default UserProfile
+ (instancetype)defaultRequest;

//Add a Set of UBECategories to the AdRequest target
- (void)addCategories:(NSSet *)objects;

//Save the CurrentAdRequest configurations as default
- (void)saveAsDefaultAdRequest;

//Reset the default AdRequest that was saved on the saveAsDefaultAdRequest: method
+ (void)resetDefaultAdRequest;

@end
