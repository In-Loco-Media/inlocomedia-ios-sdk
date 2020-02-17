//
//  ILMAppDelegate.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

@import InLocoSDK;

#import "ILMAppDelegate.h"

@implementation ILMAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Initializating the InLocoMedia SDK
    [ILMInLoco initSdk];
    
    // Set user profile and save
    ILMUserProfile *userProfile = [[ILMUserProfile alloc] initWithMinAge:20 andMaxAge:60 andGender:ILMGenderMale];
    [userProfile saveAsDefaultUserProfile];
    
    // InLocoMedia Ads Sample appearence
    [[UINavigationBar appearance] setBackgroundColor:[UIColor colorWithRed:0.214 green:0.643 blue:0.545 alpha:1]];
    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIColor whiteColor], NSForegroundColorAttributeName, nil]];
    
    return YES;
}

- (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
{
    [ILMInLoco performFetchWithCompletionBlock: ^(UIBackgroundFetchResult fetchResult) {
        completionHandler(fetchResult);
    }];
}

@end
