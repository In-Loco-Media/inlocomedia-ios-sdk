//
//  ILMAppDelegate.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <InLocoMediaAPI/InLocoMedia.h>

#import "ILMAppDelegate.h"
#import "ILMNotificationAdAlertView.h"

@implementation ILMAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Initialize the API
    ILMOptions *options = [[ILMOptions alloc] init];
    
    // Set the development mode for your test device
    [options setDevelopmentDevices:@[[[UIDevice currentDevice] identifierForVendor].UUIDString]];
    
    // Your production key
    [options setAdsKey:APP_KEY];
    
    // Verbose mode activated, remember to set NO for production
    [options setLogEnabled:YES];
    
    // Enables a location request at the start of the application. Will request the user to enable location permission. The default value is Yes.
    [options setLocationRequestAtStartEnabled:YES];
    [options setLocationEnabled:YES];
    
    // Initializating the InLocoMedia SDK
    [InLocoMedia initWithOptions:options];
    
    // Set user profile and save
    ILMUserProfile *userProfile = [[ILMUserProfile alloc] initWithMinAge:10 andMaxAge:25 andGender:ILMGenderMale];
    [userProfile saveAsDefaultUserProfile];
    
    // InLocoMedia Ads Sample appearence
    [[UINavigationBar appearance] setBackgroundColor:[UIColor colorWithRed:0.214 green:0.643 blue:0.545 alpha:1]];
    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIColor whiteColor], NSForegroundColorAttributeName, nil]];
    
    // Initialize a local notification for the app to process
    UILocalNotification *notification = launchOptions[UIApplicationLaunchOptionsLocalNotificationKey];
    if (notification) {
        
        ILMAdvertisement *advertisement = [InLocoMedia didReceiveNotification:notification];
        if (advertisement) {
            NSLog(@"Ads Sample: App launched with the notification");
            [self handleNotificationAdvertisement:advertisement];
            [InLocoMedia handleNotificationWithDefaultBackgroundBehavior:advertisement];
        }
    }
    
    return YES;
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    [InLocoMedia applicationDidBecomeActive];
}

- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings
{
    [InLocoMedia applicationDidRegisterUserNotificationSettings];
}

- (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler
{
    [InLocoMedia applicationPerformFetchWithResult: ^(UIBackgroundFetchResult fetchResult) {
        completionHandler(fetchResult);
    }];
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification
{
    ILMAdvertisement *advertisement = [InLocoMedia didReceiveNotification:notification];
    
    if (advertisement && [application applicationState] != UIApplicationStateActive) {
        NSLog(@"Ads Sample: Notification received as local notification");
        [InLocoMedia handleNotificationWithDefaultBackgroundBehavior:advertisement];
    } else {
        [self handleNotificationAdvertisement:advertisement];
    }
}

#pragma ILMAppDelegate

- (void)handleNotificationAdvertisement:(ILMAdvertisement *)advertisement
{
    /**
     A Notification Ad was received. Implement here what your app should do.
     (i.e. open a dialog, the browser or another view controller.)
     **/
    [[[ILMNotificationAdAlertView alloc] initWithAdvertisement:advertisement] show];
}

@end
