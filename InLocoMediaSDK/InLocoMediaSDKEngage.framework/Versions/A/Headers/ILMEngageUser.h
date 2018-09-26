//
//  ILMUser.h
//  InLocoMedia-iOS-SDK-Engage
//
//  Created by Marcel Rebouças on 20/06/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds the user-related properties to be used on the Engage services.
*/
@interface ILMEngageUser : NSObject

@property (nonatomic, strong, readonly) NSString *userId;

- (instancetype)initWithId:(NSString *)userId;
- (instancetype)init NS_UNAVAILABLE;

@end
