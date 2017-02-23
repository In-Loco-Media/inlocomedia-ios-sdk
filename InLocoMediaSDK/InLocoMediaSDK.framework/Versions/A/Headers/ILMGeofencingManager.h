//
//  ILMGeofencingManager.h
//  InLocoMediaAPI
//
//  Created by Gabriel Falcone on 2/2/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMGeofencingData.h"
#import "ILMLocation.h"
#import "ILMLocationScanner.h"
#import "ILMGeofencingEvent.h"

@protocol ILMGeofencingDelegate

- (void)geofencingManagerRegionChanged:(ILMGeofencingRegion *)region withEventType:(ILMGeofencingEventType)geofencingEventType atLocation:(ILMLocation *)location;

// Unit Testing
@optional
- (void)geofencingManagerRegionHasUpdatedChanged:(ILMGeofencingData *)region;
@end

@interface ILMGeofencingManager : NSObject <ILMLocationScannerGeofencingDelegate>

@property (nonatomic, assign) BOOL geofencingEnabled;

+ (ILMGeofencingManager *)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;

- (BOOL)isUpdateScheduled;

- (void)addDelegate:(NSObject <ILMGeofencingDelegate> *)delegate;

- (void)removeDelegate:(NSObject<ILMGeofencingDelegate> *)delegate;

+ (void)reset;

@end
