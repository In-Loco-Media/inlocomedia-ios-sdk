//
//  UBENotificationViewController.m
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by Gabriel Falcone on 3/22/15.
//  Copyright (c) 2015 Ubee. All rights reserved.
//

#import "UBENotificationViewController.h"
#import <UbeeAPI/Ubee.h>

@interface UBENotificationViewController ()
@property (weak, nonatomic) IBOutlet UISwitch *switcher;

@end

@implementation UBENotificationViewController

- (void)viewWillAppear:(BOOL)animated
{
    [_switcher setOn:[Ubee isNotificationAdsEnabled] animated:NO];
    [_switcher addTarget:self action:@selector(setState:) forControlEvents:UIControlEventValueChanged];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [_switcher removeTarget:self action:@selector(setState:) forControlEvents:UIControlEventValueChanged];
}

- (void)setState:(id)sender
{
    [Ubee enableNotificationAds:[sender isOn]];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
