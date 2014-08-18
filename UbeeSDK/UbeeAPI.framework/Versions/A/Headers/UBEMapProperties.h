//
//  UBEMapProperties.h
//  UbeeAPI
//
//  Created by Ubee on 3/12/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UBEMapProperties : NSObject

@property UIColor *storesColor;
@property UIColor *highlightStoreColor;
@property UIColor *hallColor;

- (NSString *)storesColorAsHex;
- (NSString *)highlightStoreColorAsHex;
- (NSString *)hallColorAsHex;

+ (UBEMapProperties *)defaultProperties;

@end
