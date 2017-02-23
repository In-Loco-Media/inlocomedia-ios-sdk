//
//  UBLocation.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 11/19/13.
//  Copyright (c) 2013 InLocoMedia. All rights reserved.
//

#import "ILMJsonSerializable.h"
#import "ILMAddress.h"

@import CoreLocation;

@interface ILMLocation : NSObject<ILMJsonSerializable>

@property (nonatomic, strong) NSNumber *x;
@property (nonatomic, strong) NSNumber *y;
@property (nonatomic, strong) NSNumber *z;
@property (nonatomic, strong) NSNumber *precision;
@property (nonatomic, strong) NSNumber *floorPrecision;
@property (nonatomic, strong) NSNumber *indoorTimeStamp;
@property (nonatomic, strong) NSString *retailId;
@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;
@property (nonatomic, strong) NSNumber *outdoorTimeStamp;

@property (nonatomic, strong) ILMAddress *address;

- (BOOL)hasLocation;

- (BOOL)hasIndoorLocation;

- (BOOL)hasOutdoorLocation;

- (CLLocation *)toCLLocation;

- (NSData *)toProtoData;

@end
