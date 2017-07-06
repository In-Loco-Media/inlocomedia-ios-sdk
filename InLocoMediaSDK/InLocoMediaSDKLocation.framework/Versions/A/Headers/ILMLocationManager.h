//
//  ILMLocationManager.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 4/9/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMLocationOptions.h"
#import "ILMLocation.h"
#import "ILMError.h"

typedef void (^ILMLocationBlock)(ILMLocation *location, ILMError *err);
typedef void (^ILMCLLocationBlock)(CLLocation *location, ILMError *err);
typedef void (^ILMErrorBlock)(ILMError *err);
typedef void (^ILMGeofencingBlock)(BOOL result);

@interface ILMLocationManager : NSObject

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) NSTimeInterval lastLocationRequestedTimestamp;

+ (ILMLocationManager *)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;

- (void)setOptions:(ILMLocationOptions *)options;

- (CLLocation *)getLastLocation;

- (void)requestLocationUpdate;

- (CLLocation *)requestLocationUpdateSync;

- (BOOL)requestAuthorizationAlways;

- (void)disableLocationManager;

@end
