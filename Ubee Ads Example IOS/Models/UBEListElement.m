//
//  UBEListElements.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEListElement.h"

@implementation UBEListElement

- (id)initAdType:(UBEAdType)adType andValue:(NSString *)value
{
    self = [super init];
    if (self) {
        self.adType = adType;
        self.adTypeValue = value;
    }
    return self;
}

@end
