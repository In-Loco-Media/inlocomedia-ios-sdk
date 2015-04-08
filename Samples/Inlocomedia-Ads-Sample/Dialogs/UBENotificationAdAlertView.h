//
//  UBENotificationAdAlertView.h
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by Vitor Maciel on 4/8/15.
//  Copyright (c) 2015 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UbeeAPI/Ubee.h>

@interface UBENotificationAdAlertView : UIAlertView <UIAlertViewDelegate>

@property (nonatomic, strong) UBEAdvertisement *advertisement;

- (instancetype)initWithAdvertisement:(UBEAdvertisement *)advertisement;

@end
