//
//  ILMTransactionAddress.h
//  InLocoMedia-iOS-SDK
//
//  Created by Lucas Cardoso on 04/02/21.
//  Copyright © 2021 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMUserAddress.h"

NS_ASSUME_NONNULL_BEGIN

@interface ILMTransactionAddress : ILMUserAddress

@property (nonatomic, strong) NSString *type;

- (instancetype)initWithType:(NSString *)type;

+ (ILMTransactionAddress *)makeBillingAddress;

+ (ILMTransactionAddress *)makeShippingAddress;

+ (ILMTransactionAddress *)makeHomeAddress;

@end

NS_ASSUME_NONNULL_END
