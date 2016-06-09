//
//  ILMListElements.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import "ILMListElement.h"

@implementation ILMListElement

- (id)initAdType:(ILMAdType *)adType value:(NSString *)value nibName:(NSString *)nibName andCellIdentifier:(NSString *)cellIdentifier
{
    self = [super init];

    if (self) {
        self.adType = adType;
        self.adTypeValue = value;
        self.cellIdentifier = cellIdentifier;
        self.nibName = nibName;
    }

    return self;
}

- (id)initAdType:(ILMAdType *)adType value:(NSString *)value andCellIdentifier:(NSString *)cellIdentifier
{
    self = [super init];

    if (self) {
        self.adType = adType;
        self.adTypeValue = value;
        self.cellIdentifier = cellIdentifier;
    }

    return self;
}

- (id)initAdType:(ILMAdType *)adType andValue:(NSString *)value
{
    self = [super init];

    if (self) {
        self.adType = adType;
        self.adTypeValue = value;
    }

    return self;
}

@end