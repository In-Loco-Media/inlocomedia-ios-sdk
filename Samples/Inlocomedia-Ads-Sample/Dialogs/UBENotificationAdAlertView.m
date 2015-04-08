//
//  UBENotificationAdAlertView.m
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by Ubee on 4/8/15.
//  Copyright (c) 2015 Ubee. All rights reserved.
//

#import "UBENotificationAdAlertView.h"

@implementation UBENotificationAdAlertView

- (instancetype)initWithAdvertisement:(UBEAdvertisement *)advertisement
{
    if (self = [super init]) {
        self.advertisement = advertisement;

        self.title = advertisement.title;
        self.message = advertisement.message;
        self.delegate = self;

        [self addButtonWithTitle:@"cancel"];
        [self addButtonWithTitle:@"open"];
    }
    return self;
}

#pragma mark UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex == 1) {
        NSURL *url = [NSURL URLWithString:self.advertisement.url];
        NSLog(@"-----url %@", url);
        [[UIApplication sharedApplication] openURL:url];
    }
}

@end
