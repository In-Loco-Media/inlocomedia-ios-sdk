//
//  ILMGeofencingEvent.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 9/14/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMGeofencingRegion.h"
#import "ILMJsonSerializable.h"

typedef enum : NSInteger
{
    kILMGeofencingEventTypeEntered = 1,
    kILMGeofencingEventTypeExited = 2,
    kILMGeofencingEventTypeDwell = 3,
    kILMGeofencingEventTypePolling = 4,
} ILMGeofencingEventType;

@interface ILMGeofencingEvent : NSObject<ILMJsonSerializable>

@property CLCircularRegion<ILMRequired> *region;
@property ILMGeofencingEventType type;
@property CLLocation<ILMRequired> *triggeredLocation;

- (instancetype)initWithRegion:(CLRegion *)region andEvent:(ILMGeofencingEventType)entered andLocation:(CLLocation *)location;
- (NSData *)toProtoData;

@end
