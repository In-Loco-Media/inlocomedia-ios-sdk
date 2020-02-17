//
//  ILMNativeAdManager.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 4/28/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMNativeAdDelegate.h"
#import "ILMNativeAdResponse.h"
#import "ILMAdRequest.h"

@interface ILMNativeAdManager : NSObject

@property (nonatomic, weak, nullable) NSObject <ILMNativeAdDelegate> *delegate;

+ (void)requestNativeAdWithAdRequest:(nonnull ILMAdRequest *)request andDelegate:(nullable NSObject <ILMNativeAdDelegate> *)delegate;
+ (void)requestNativeAdWithDelegate:(nullable NSObject <ILMNativeAdDelegate> *)delegate;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
