//
//  UBAdvertisement.h
//  UbeeAPI
//
//  Created by Ubee on 1/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBEAdvertisementModel;

@interface UBEAdvertisement : NSObject

//The identifier of the advertisement
@property (nonatomic, strong) NSString *identifier;

//The url with the content of the advertisement
@property (nonatomic, strong) NSString *url;

//The url with the content of the advertisement
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSNumber *timestamp;

- (id)initWithModel:(UBEAdvertisementModel *)model;

@end



