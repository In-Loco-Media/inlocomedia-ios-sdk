//
//  ILMAddress.h
//  InLocoMediaAPI
//
//  Created by Miguel on 3/28/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMJsonSerializable.h"

@interface ILMAddress : NSObject <NSCopying, ILMJsonSerializable, NSCoding>

// The country name. E.g: Brazil
@property (nonatomic, strong) NSString *countryName;
// The country code. E.g: BR
@property (nonatomic, strong) NSString *countryCode;
// The state. E.g: Pernambuco
@property (nonatomic, strong) NSString *adminArea;
// The country city. E.g: Recife
@property (nonatomic, strong) NSString *subAdminArea;
// The city. E.g: Recife
@property (nonatomic, strong) NSString *locality;
// The city neighborhood. E.g: Pina
@property (nonatomic, strong) NSString *subLocality;
// The street name. E.g: Av. Engenheiro Antônio de Goes
@property (nonatomic, strong) NSString *thoroughfare;
// The building number or number range. E.g: 300
@property (nonatomic, strong) NSString *subThoroughfare;
// The postal code. E.g: 51110-100
@property (nonatomic, strong) NSString *postalCode;
// Locale for the address information. E.g: pt-Br
@property (nonatomic, strong) NSString *locale;

- (instancetype)initWithCoder:(NSCoder *)coder;
- (void)encodeWithCoder:(NSCoder *)encoder;

@end
