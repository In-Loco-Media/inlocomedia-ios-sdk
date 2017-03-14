//
//  ILMGeofencingData.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 3/19/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMGeofencingRegion.h"
#import "ILMJsonSerializable.h"

#define GEOFENCING_CATEGORY_PUSH @"push"

@interface ILMGeofencingData : NSObject<ILMJsonSerializable>

@property (nonatomic, strong) NSNumber *sleep;
@property (nonatomic, strong) ILMGeofencingRegion *macro;
@property (nonatomic, strong) NSMutableArray<ILMGeofencingRegion> *micro;

- (NSArray *)toRegions;
- (BOOL)hasGeofences;
- (ILMGeofencingRegion *)microGeofenceFromCLRegion:(CLRegion *)region;
- (NSTimeInterval)sleepInSeconds;

@end
