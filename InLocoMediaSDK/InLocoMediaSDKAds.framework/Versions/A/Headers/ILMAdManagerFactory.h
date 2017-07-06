//
//  ILMAdManagerFactory.h
//  InLocoMedia-iOS-SDK
//
//  Created by Marcel de Siqueira Campos Rebouças on 4/28/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMAdManager.h"
#import "ILMAdType.h"
#import "ILMAdManagerDelegate.h"
#import "ILMNativeViewBinder.h"

/**
 Factory for ILMAdManagers.
 An ILMAdManager is responsible for handling the lifecicle of an Ad, such as requesting and presenting it.
 */
@interface ILMAdManagerFactory : NSObject

/**
 @brief Creates an instance of an ILMAdManager specialized in managing Native Ads.
 @discussion This method creates an instance of an ILMAdManager that handles Native Ads.
 @param viewBinder An instance of an ILMNativeViewBinder.
 @param delegate An ILMAdManagerDelegate.
 @return An instance of an ILMAdManager specialized in managing Native Ads.
 */
+ (ILMAdManager *)nativeAdManagerWithViewBinder:(ILMNativeViewBinder *)viewBinder delegate:(NSObject <ILMAdManagerDelegate> *)delegate;

@end
