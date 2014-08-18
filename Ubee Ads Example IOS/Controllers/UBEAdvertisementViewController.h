//
//  UBEDetailViewController.h
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBEListElement.h"

@interface UBEAdvertisementViewController : UIViewController

@property (strong, nonatomic) UBEListElement *element;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
