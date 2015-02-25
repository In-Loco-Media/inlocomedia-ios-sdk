//
//  UBEUserProfile.h
//  UbeeAPI
//
//  Created by Ubee on 3/18/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

typedef enum {
    UBEGenderUndefined = 0,
    UBEGenderMale = 1,
    UBEGenderFemale = 2
} UBEGender;

@interface UBEUserProfile : NSObject <NSCoding>

@property (nonatomic) NSUInteger age;
@property (nonatomic) UBEGender gender;

- (id)initWithAge:(NSUInteger)age andGender:(UBEGender)gender;

- (NSDictionary *)toDictionary;

- (BOOL)isValid;

@end
