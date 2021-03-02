//
//  ILMInLocoDemo.h
//  InLocoMedia-iOS-SDK-Common
//
//  Created by Douglas Soares on 30/11/20.
//  Copyright © 2020 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMUserAddress.h"
#import "ILMTransactionAddress.h"

NS_ASSUME_NONNULL_BEGIN

@interface ILMInLocoDemo : NSObject

/**
 * Records a login.
 */
+ (void)trackLogin:(NSString *)accountId __deprecated_msg("Use trackLoginWithAccountId:loginId: instead");

/**
 * Records a login.
 */
+ (void)trackLoginWithAccountId:(NSString *)accountId loginId:(NSString *_Nullable)loginId;

/**
 * Records a sign up.
 */
+ (void)trackSignUp:(NSString *_Nullable)signUpId address:(ILMUserAddress *_Nullable)userAddress;

/**
 * Records a transaction.
 */
+ (void)trackTransactionWithAccountId:(NSString *)accountId
                        transactionId:(NSString *_Nullable)transactionId
                 transactionAddresses:(NSSet <ILMTransactionAddress *> *_Nullable)addresses;

@end

NS_ASSUME_NONNULL_END
