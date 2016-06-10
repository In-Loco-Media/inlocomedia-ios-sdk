//
//  ILMNotificationAdAlertView.m
//  InLocoMedia-Ads-Sample-IOS
//
//  Created by InLocoMedia on 4/8/15.
//  Copyright (c) 2015 InLocoMedia. All rights reserved.
//

#import "ILMNotificationAdAlertView.h"



@implementation ILMNotificationAdAlertView

- (instancetype)initWithAdvertisement:(ILMAdvertisement *)advertisement
{
    if (self = [super init]) {
       self.advertisement = advertisement;

       self.title = advertisement.title;
       self.message = advertisement.message;
       self.delegate = self;

       [self addButtonWithTitle:CANCEL];
       [self addButtonWithTitle:OPEN];
    }

    return self;
}

#pragma mark UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex == 1) {
       NSURL *url = [NSURL URLWithString:self.advertisement.url];
       NSLog(@"URL: %@", url);
       [[UIApplication sharedApplication] openURL:url];
    }
}

@end