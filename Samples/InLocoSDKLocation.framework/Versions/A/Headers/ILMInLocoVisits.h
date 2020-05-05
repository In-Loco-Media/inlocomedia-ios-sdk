//
//  ILMInLocoVisits.h
//  InLocoMedia-iOS-SDK-Location
//
//  Created by Marcel Rebouças on 06/06/19.
//  Copyright © 2019 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMCheckIn.h"

NS_ASSUME_NONNULL_BEGIN

@interface ILMInLocoVisits : NSObject

+ (void)setEnabled:(BOOL)enabled;

/**
 Registers a check-in event.
*/
+ (void)registerCheckIn:(ILMCheckIn *)checkIn;

/**
 Registers an app event and its localization.
 */
+ (void)trackLocalizedEvent:(NSString *)eventName;

/**
 Registers an app event and its localization.
*/
+ (void)trackLocalizedEvent:(NSString *)eventName properties:(NSDictionary <NSString *, NSString *> *)properties;

@end

NS_ASSUME_NONNULL_END
