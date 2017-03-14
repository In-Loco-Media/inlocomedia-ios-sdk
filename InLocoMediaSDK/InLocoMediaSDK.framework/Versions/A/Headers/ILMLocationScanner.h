//
//  ILMLocationScanner.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 4/9/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;

@protocol ILMLocationScannerGeofencingDelegate <NSObject>

- (void)regionChanged:(CLRegion *)region entered:(BOOL)entered atLocation:(CLLocation *)location;
- (void)visited:(CLVisit *)visited;

@end

@protocol ILMLocationScannerDelegate <NSObject>

- (void)locationUpdateReceived:(CLLocation *)location;

@end

@interface ILMLocationScanner : NSObject

@property (nonatomic, strong) NSHashTable *geofencingDelegates;

+ (void)reset;

+ (ILMLocationScanner *)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;

- (BOOL)canRequestLocation;

- (BOOL)requestAuthorizationWhenInUse;
- (BOOL)requestAuthorizationAlways;

- (CLLocation *)requestGPSLocation;

- (CLLocation *)lastGPSAvailable;

- (void)removeAllMonitoringRegions;

- (NSSet *)monitoredRegions;

- (void)removeRegion:(CLRegion *)region;

- (void)monitorRegions:(NSArray *)regions currentLocation:(CLLocation *)currentLocation;

- (BOOL)isLocation:(CLLocation *)location insideRegion:(CLRegion *)region margin:(float)margin;

- (void)startMonitoringLocation;

- (void)stopMonitoringLocation;

- (void)addLocationDelegate:(NSObject <ILMLocationScannerDelegate> *)delegate;

- (void)addGeofencingDelegateObject:(id <ILMLocationScannerGeofencingDelegate> )delegate;

@end
