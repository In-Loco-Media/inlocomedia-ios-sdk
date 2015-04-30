//
//  UBECategory.h
//  UbeeAPI
//
//  Created by Ubee on 7/3/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

NSComparator UBECategoriesComparator();

@interface UBECategory : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) NSString *name;

- (instancetype)initWithIdentifier:(NSString *)identifier andName:(NSString *)name;

+ (NSArray *)parseArrayFromJSON:(NSData *)data error:(NSError **)err;

@end
