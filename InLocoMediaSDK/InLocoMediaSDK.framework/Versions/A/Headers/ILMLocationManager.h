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
#import "ILMGeofencingData.h"
#import "ILMGeofencingManager.h"
#import "ILMError.h"

typedef void (^ILMLocationBlock)(ILMLocation *location, ILMError *err);
typedef void (^ILMGeofencingBlock)(BOOL result);

@protocol ILMLocationManagerDelegate <NSObject>

- (void)locationReceived:(ILMLocation *)location;

@end

@interface ILMLocationManager : NSObject

@property (nonatomic, assign) BOOL enabled;

@property (nonatomic, strong) ILMGeofencingData *geofencing;

+ (ILMLocationManager *)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;

- (void)addDelegate:(NSObject <ILMLocationManagerDelegate> *)delegate;

- (void)setOptions:(ILMLocationOptions *)options;

- (ILMLocation *)getLastLocation;

- (void)requestLocationUpdate;

- (ILMLocation *)requestLocationUpdateSync;

- (void)requestLocationUpdate:(ILMLocationBlock)locationBlock;

- (BOOL)requestAuthorizationAlways;

- (void)disableLocationManager;

#pragma mark Unit Test

+ (NSTimeInterval)locationUpdateInterval;

+ (void)reset;

@end
