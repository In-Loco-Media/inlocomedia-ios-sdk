//
//  ILMNativeAdView.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 2/26/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import "ILMAdContentView.h"
#import "ILMPublicMacros.h"

@interface ILMNativeAdView : ILMAdContentView

//The name of the nib file containing the NativeAd Content
@property (nonatomic, strong, readonly, nullable) ILMInspectable NSString *nibName;
@property (nonatomic, strong, nullable) IBOutlet UILabel *ilmTitleLabel;
@property (nonatomic, strong, nullable) IBOutlet UILabel *ilmHighLightLabel;
@property (nonatomic, strong, nullable) IBOutlet UILabel *ilmDescriptionLabel;
@property (nonatomic, strong, nullable) IBOutlet UIButton *ilmButton;
@property (nonatomic, strong, nullable) IBOutlet UIImageView *ilmIconImage;
@property (nonatomic, strong, nullable) IBOutlet UIImageView *ilmContentImage;

NS_ASSUME_NONNULL_BEGIN

- (instancetype)initWithAdType:(ILMAdType *)adType NS_UNAVAILABLE;
//Init the NativeAdView with a AdType and nibName
- (instancetype)initWithType:(ILMAdType *)adType andNibName:(NSString *)nibName;

NS_ASSUME_NONNULL_END

@end
