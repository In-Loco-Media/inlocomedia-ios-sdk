//
//  UBEOptions.h
//  UbeeAPI
//
//  Created by Ubee on 2/26/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UBEOptions : NSObject

@property (nonatomic, strong) NSString *adsKey;
@property (nonatomic, strong) NSString *adsSecret;

@property (nonatomic, strong) NSString *mapsKey;
@property (nonatomic, strong) NSString *mapsSecret;

@property (nonatomic, assign, getter = isDevelopmentEnvironment, setter = setDevelopmentEnvironment:) BOOL developmentEnvironment;

@property (nonatomic, assign, getter = isLocationEnabled) BOOL locationEnabled;

@property (nonatomic, assign, getter = isLocationAtStartEnabled, setter = setLocationRequestAtStartEnabled:) BOOL locationRequestAtStart;

- (void)setAdsKey:(NSString *)adsKey andSecret:(NSString *)adsSecret;

- (void)setMapsKey:(NSString *)mapsKey andSecret:(NSString *)mapsSecret;

- (void)setLogEnabled:(BOOL)enabled;

@end
