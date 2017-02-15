//
//  ILMGeofencingRegion.h
//  InLocoMediaAPI
//
//  Created by Miguel on 5/9/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMLocation.h"
#import <Foundation/Foundation.h>
#import "ILMJsonSerializable.h"

@import CoreLocation;

@protocol ILMGeofencingRegion

@end

@interface ILMGeofencingRegion : NSObject<ILMJsonSerializable>

// values set at runtime
@property (nonatomic, strong) NSNumber *creationDate;
@property (nonatomic, strong) NSNumber *randomId;
@property (nonatomic, strong) NSString *identifier;

@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;
@property (nonatomic, strong) NSNumber *radius;
@property (nonatomic, strong) NSNumber *timeToLive;
@property (nonatomic, strong) NSNumber *inPollRate; // Not used in iOS
@property (nonatomic, strong) NSNumber *outPollRate;
@property (nonatomic, strong) NSString *category;

- (NSTimeInterval)expirationDate;
- (BOOL)isExpired;
- (CLRegion *)getCLRegion;
- (BOOL)isLocationInside:(ILMLocation *)location;
- (BOOL)isLocationOutside:(ILMLocation *)location;
- (NSData *)toProtoData;

@end
