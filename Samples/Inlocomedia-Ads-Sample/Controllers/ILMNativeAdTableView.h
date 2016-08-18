//
//  ILMNativeAdTableView.h
//  InLocoMedia-Ads-Sample
//
//  Created by Rafael Gouveia on 6/15/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <InLocoMediaApi/InLocoMedia.h>

@interface ILMNativeAdTableView : UIViewController

@property BOOL immediate;
@property ILMAdType *adType;

@end