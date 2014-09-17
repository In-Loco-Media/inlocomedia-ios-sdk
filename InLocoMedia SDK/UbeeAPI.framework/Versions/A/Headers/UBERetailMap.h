//
//  UBERetailMap.h
//  UbeeAPI
//
//  Created by Ubee on 3/13/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "JSONModel.h"

@interface UBERetailMap : JSONModel

@property (nonatomic) NSString<Optional> *identifier;
@property (nonatomic) NSNumber<Optional> *version;
@property (nonatomic) NSString<Optional> *name;
@property (nonatomic) NSNumber<Optional> *floor;
@property (nonatomic) NSString<Optional> *imageUrl;

+ (NSArray *)parseArrayFromJSON:(NSData *)data error:(NSError **)err;

@end
