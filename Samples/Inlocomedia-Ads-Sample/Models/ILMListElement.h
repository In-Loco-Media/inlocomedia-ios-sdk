//
//  ILMListElements.h
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <InLocoMediaSDKAds/ILMInLocoMedia.h>

@interface ILMListElement : NSObject

@property (nonatomic, strong) ILMAdType *adType;

@property (nonatomic, strong) NSString *adTypeValue;
@property (nonatomic, strong) NSString *nibName;
@property (nonatomic, strong) NSString *cellIdentifier;

- (id)initAdType:(ILMAdType *)adType andValue:(NSString *)value;
- (id)initAdType:(ILMAdType *)adType value:(NSString *)value andCellIdentifier:(NSString *)cellIdentifier;
- (id)initAdType:(ILMAdType *)adType value:(NSString *)value nibName:(NSString *)nibName andCellIdentifier:(NSString *)cellIdentifier;

@end
