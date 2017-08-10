//
//  ILMNativeAdView.h
//  InLocoMediaAPI
//
//  Created by InLocoMedia on 2/26/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import "ILMAdContentView.h"
#import "ILMPublicMacros.h"
#import "ILMNativeAd.h"

@interface ILMNativeAdView : ILMAdContentView

//The name of the nib file containing the NativeAd Content
@property (nonatomic, strong, readonly) ILMInspectable NSString *nibName;
@property (nonatomic, strong) IBOutlet UILabel *ilmTitleLabel;
@property (nonatomic, strong) IBOutlet UILabel *ilmHighLightLabel;
@property (nonatomic, strong) IBOutlet UILabel *ilmDescriptionLabel;
@property (nonatomic, strong) IBOutlet UIButton *ilmButton;
@property (nonatomic, strong) IBOutlet UIImageView *ilmIconImage;
@property (nonatomic, strong) IBOutlet UIImageView *ilmContentImage;

- (instancetype)initWithAdType:(ILMAdType *)adType NS_UNAVAILABLE;

//Init the NativeAdView with a AdType and nibName
- (instancetype)initWithType:(ILMAdType *)adType andNibName:(NSString *)nibName;

@end
