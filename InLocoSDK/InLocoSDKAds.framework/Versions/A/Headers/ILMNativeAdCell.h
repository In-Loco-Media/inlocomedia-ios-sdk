//
//  ILMNativeAdCell.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 6/14/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMPublicMacros.h"

@interface ILMNativeAdCell : UITableViewCell

@property (nonatomic, strong, readonly) ILMInspectable NSString *nibName;
@property (nonatomic, strong) IBOutlet UILabel *ilmTitleLabel;
@property (nonatomic, strong) IBOutlet UILabel *ilmHighLightLabel;
@property (nonatomic, strong) IBOutlet UILabel *ilmDescriptionLabel;
@property (nonatomic, strong) IBOutlet UIButton *ilmButton;
@property (nonatomic, strong) IBOutlet UIImageView *ilmIconImage;
@property (nonatomic, strong) IBOutlet UIImageView *ilmContentImage;

@end
