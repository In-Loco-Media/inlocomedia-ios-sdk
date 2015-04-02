//
//  UBEListElements.h
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UbeeAPI/Ubee.h>

@interface UBEListElement : NSObject

@property (nonatomic, strong) UBEAdType *adType;
@property (nonatomic, strong) NSString *adTypeValue;

@property (nonatomic, strong) NSString *nibName;

@property (nonatomic, strong) NSString *cellIdentifier;

- (id)initAdType:(UBEAdType *)adType andValue:(NSString *)value;
- (id)initAdType:(UBEAdType *)adType value:(NSString *)value andCellIdentifier:(NSString *)cellIdentifier;
- (id)initAdType:(UBEAdType *)adType value:(NSString *)value nibName:(NSString *)nibName andCellIdentifier:(NSString *)cellIdentifier;

@end
