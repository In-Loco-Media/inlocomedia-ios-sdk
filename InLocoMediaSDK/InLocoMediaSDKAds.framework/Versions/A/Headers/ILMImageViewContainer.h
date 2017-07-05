//
//  ILMImageViewContainer.h
//  InLocoMedia-iOS-SDK
//
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ILMImageViewContainer : NSObject

@property (nonatomic, weak) UIImageView *imageView;

- (instancetype)initWithImageView:(UIImageView *)imageView;

// Set image url to be loaded
- (void)setImageWithURL:(NSString *)url;

// Set image url to be loaded and the placeholder image that will be displayed while the url is loading
- (void)setImageWithURL:(NSString *)url placeholderImage:(UIImage *)placeholder;

// Set image url, placeholder and receives a block to be executed when the load is completed
- (void)setImageWithURL:(NSString *)url placeHolderImage:(UIImage *)placeHolder onComplete:(void (^)(UIImage *image, NSError *error))responseBlock;

@end
