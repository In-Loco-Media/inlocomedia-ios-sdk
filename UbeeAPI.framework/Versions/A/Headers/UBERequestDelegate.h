//
//  UBRequestDelegate.h
//  UbeeAPI
//
//  Created by Ubee on 11/20/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBELocation;
@class UBEAdvertisementModel;
@class UBEError;
@class UBECategory;

@protocol UBERequestDelegate <NSObject>

@required
-(void) onRequestFailure:(UBEError *) error;

@optional
-(void) onLocationReceived:(UBELocation *) locationResult;
-(void) onAdvertisementReceived:(UBEAdvertisementModel *) advertisementResult;
-(void) onRetailsReceived:(NSArray *) retails;
@end

@protocol UBECategoriesDelegate <UBERequestDelegate>
@required
-(void) onCategoriesReceived:(NSArray *)categories;
@end

@protocol UBERetailsDelegate <UBERequestDelegate>
@required
-(void) onRetailsReceived:(NSArray *)retails;
@end

@protocol UBELocationDelegate <UBERequestDelegate>
@required
-(void) onLocationReceived:(UBELocation *)locationResult;
@end
