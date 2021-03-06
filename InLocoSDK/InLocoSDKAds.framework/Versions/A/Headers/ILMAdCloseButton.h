//
//  ILMAdCloseButton.h
//  InLocoMediaAPI
//
//  Created by Gabriel on 8/13/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    ILMAdCloseButtonPositionTopLeft,
    ILMAdCloseButtonPositionTopCenter,
    ILMAdCloseButtonPositionTopRight,
    ILMAdCloseButtonPositionCenter,
    ILMAdCloseButtonPositionBottomLeft,
    ILMAdCloseButtonPositionBottomCenter,
    ILMAdCloseButtonPositionBottomRight
} ILMAdCloseButtonPosition;

@interface ILMAdCloseButton : UIButton

- (instancetype)initAtPosition:(ILMAdCloseButtonPosition)position insideFrame:(CGRect)frame withImage:(BOOL)image;
- (void)reposition;

@end

NS_ASSUME_NONNULL_END
