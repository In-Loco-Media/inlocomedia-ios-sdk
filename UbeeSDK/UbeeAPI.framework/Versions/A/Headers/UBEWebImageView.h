//
//  UBEImageView.h
//  UbeeAPI
//
//  Created by Ubee on 2/25/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UBEWebImageView : UIImageView

- (void)setImageWithURL:(NSString *)url;

- (void)setImageWithURL:(NSString *)url placeholderImage:(UIImage *)placeholder;

- (void)setImageWithURL:(NSString *)url placeHolderImage:(UIImage *)placeHolder onComplete:(void (^) (UIImage *image, NSError *error))responseBlock;

@end