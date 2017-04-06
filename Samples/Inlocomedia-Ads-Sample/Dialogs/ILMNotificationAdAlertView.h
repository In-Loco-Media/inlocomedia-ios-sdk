//
//  ILMNotificationAdAlertView.h
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by InLocoMedia on 4/8/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <InLocoMediaSDKAds/ILMInLocoMedia.h>

@interface ILMNotificationAdAlertView : UIAlertView <UIAlertViewDelegate>

@property (nonatomic, strong) ILMAdvertisement *advertisement;

- (instancetype)initWithAdvertisement:(ILMAdvertisement *)advertisement;

@end
