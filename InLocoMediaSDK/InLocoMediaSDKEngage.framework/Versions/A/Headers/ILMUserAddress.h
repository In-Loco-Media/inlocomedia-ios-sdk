//
//  ILMUserAddress.h
//  InLocoMedia-iOS-SDK
//
//  Created by Felipe Andrade on 05/09/18.
//  Copyright © 2018 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds the user address to be used during Engage registration.
 */
@interface ILMUserAddress : NSObject

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
// The building number or number range. E.g: 300 (or 300-320)
@property (nonatomic, strong) NSString *subThoroughfare;
// The postal code. E.g: 51110-100
@property (nonatomic, strong) NSString *postalCode;
// Locale for the address information. E.g: pt-Br
@property (nonatomic, strong) NSLocale *locale;
// The address latitude. E.g: -8.071848
@property (nonatomic, strong) NSNumber *latitude;
// The address longitude. E.g: -34.881594
@property (nonatomic, strong) NSNumber *longitude;
// The complete address, in human-readable format. E.g: Av. Engenheiro Antônio de Goes, 300 - Pina, Recife, PE, 51110-100
@property (nonatomic, strong) NSString *addressLine;

@end
