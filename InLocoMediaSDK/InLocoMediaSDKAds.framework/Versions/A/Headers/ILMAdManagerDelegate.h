//
//  ILMAdManagerDelegate.h
//  InLocoMedia-iOS-SDK
//
//  Created by Marcel Rebouças on 4/19/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ILMError.h"

@class ILMAdManager;

@protocol ILMAdManagerDelegate <NSObject>

@optional

//
// Returning the Ad View
//

// Called when the AdManager has finished loading an advertisement and it is ready to be presented.
- (void)ilmFinishedLoadingAdOnView:(UIView *)view DEPRECATED_ATTRIBUTE;

// Called when the AdManager has failed to load an Ad.
- (void)ilmFailedToLoadAdOnView:(UIView *)view withError:(ILMError *)error DEPRECATED_ATTRIBUTE;

// Called after an advertisement is clicked and before leaving the application to open its content.
- (void)ilmDidPerformClickOnAdWithView:(UIView *)view willLeaveApplication:(BOOL)willLeaveApplication DEPRECATED_ATTRIBUTE;

// Called if the advertisement is closed by an user.
- (void)ilmDidCloseAdOnView:(UIView *)view DEPRECATED_ATTRIBUTE;

/**
 Called after an advertisement is clicked and before the click action is performed
 Return YES if you allow the click action to be performed, NO otherwise.
 */
- (BOOL)ilmWillPerformClickOnAdWithView:(UIView *)view DEPRECATED_ATTRIBUTE;

// Called when a rich media ad has been expanded into fullscreen.
- (void)ilmDidExpandAdOnView:(UIView *)view DEPRECATED_ATTRIBUTE;

// Called when a rich media ad has been resized in the current view controller;
- (void)ilmDidResizeAdOnView:(UIView *)view DEPRECATED_ATTRIBUTE;

// Called when the view returns from an ad click.
- (void)ilmDidReturnFromClickOnView:(UIView *)view DEPRECATED_ATTRIBUTE;

//
// Returning the AdManager. The Ad View can be retrived by calling -[ILMAdManager adView];
//

// Called when the AdManager has finished loading an advertisement and it is ready to be presented.
- (void)ilmFinishedLoadingAdOnManager:(ILMAdManager *)manager;

// Called when the AdManager has failed to load an Ad.
- (void)ilmFailedToLoadAdOnManager:(ILMAdManager *)manager withError:(ILMError *)error;

// Called after an advertisement is clicked and before leaving the application to open its content.
- (void)ilmDidPerformClickOnAdWithManager:(ILMAdManager *)manager willLeaveApplication:(BOOL)willLeaveApplication;

// Called if the advertisement is closed by an user.
- (void)ilmDidCloseAdOnManager:(ILMAdManager *)manager;

/**
 Called after an advertisement is clicked and before the click action is performed
 Return YES if you allow the click action to be performed, NO otherwise.
 */
- (BOOL)ilmWillPerformClickOnAdWithManager:(ILMAdManager *)manager;

// Called when a rich media ad has been expanded into fullscreen.
- (void)ilmDidExpandAdOnManager:(ILMAdManager *)manager;

// Called when a rich media ad has been resized in the current view controller;
- (void)ilmDidResizeAdOnManager:(ILMAdManager *)manager;

// Called when the view returns from an ad click.
- (void)ilmDidReturnFromClickOnManager:(ILMAdManager *)manager;

@end
