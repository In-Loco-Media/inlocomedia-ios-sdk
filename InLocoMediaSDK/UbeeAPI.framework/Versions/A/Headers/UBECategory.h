//
//  UBECategory.h
//  UbeeAPI
//
//  Created by Ubee on 7/3/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "JSONModelLib.h"

NSComparator UBECategoriesComparator();

@interface UBECategory : JSONModel <NSCoding, NSCopying>

@property (nonatomic, strong) NSString<Optional> *identifier;
@property (nonatomic, strong) NSString<Optional> *name;

- (instancetype)initWithIdentifier:(NSString *)identifier andName:(NSString *)name;

+ (NSArray *)parseArrayFromJSON:(NSData *)data error:(NSError **)err;

@end
