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
+ (void)registerCheckIn:(ILMCheckIn *)checkIn;

@end

NS_ASSUME_NONNULL_END
