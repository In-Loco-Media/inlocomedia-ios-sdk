//
//  UBRetail.h
//  UbeeAPI
//
//  Created by Luis Medeiros on 11/14/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import "JSONModelLib.h"

@interface UBERetail : JSONModel

@property (nonatomic) NSString<Optional> *identifier;
@property (nonatomic) NSNumber<Optional> *version;
@property (nonatomic) NSString<Optional> *name;
@property (nonatomic) NSString<Optional> *street;
@property (nonatomic) NSString<Optional> *city;
@property (nonatomic) NSString<Optional> *state;
@property (nonatomic) NSString<Optional> *phone;
@property (nonatomic) NSString<Optional> *website;
@property (nonatomic) NSString<Optional> *desc;
@property (nonatomic) NSString<Optional> *imageUrl;
@property (nonatomic) NSString<Optional> *imageThumbnailUrl;

@property (nonatomic) NSNumber<Optional> *latitude;
@property (nonatomic) NSNumber<Optional> *longitude;

+ (NSArray *)parseArrayFromJSON:(NSData *)data error:(NSError **)err;

@end
