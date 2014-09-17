//
//  UBEURLParser.h
//  UbeeAPI
//
//  Created by Ubee on 3/10/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UBEURLParser : NSObject

- (id)initWithURL:(NSURL *)url;

- (id)initWithURLString:(NSString *)url;

- (NSString *)valueForQueryParameter:(NSString *)varName;

@end