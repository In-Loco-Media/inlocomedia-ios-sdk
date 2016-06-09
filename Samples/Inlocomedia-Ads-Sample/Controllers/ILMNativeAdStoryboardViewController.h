//
//  ILMNativeAdStoryboardViewController.h
//  InLocoMedia-Ads-Sample
//
//  Created by Rafael Gouveia on 5/3/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMAdvertisementViewController.h"

@interface ILMNativeAdStoryboardViewController : UIViewController

@property (nonatomic, strong) ILMListElement *element;
@property (nonatomic, weak) IBOutlet UILabel *descLabel;
@property (nonatomic, weak) IBOutlet ILMAdView *adView;

@end