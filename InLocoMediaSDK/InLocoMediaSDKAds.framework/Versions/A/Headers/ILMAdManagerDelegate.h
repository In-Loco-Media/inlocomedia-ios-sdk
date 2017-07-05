//
//  ILMAdManagerDelegate.h
//  InLocoMedia-iOS-SDK
//
//  Created by Marcel Rebouças on 4/19/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ILMError.h"

@protocol ILMAdManagerDelegate <NSObject>

@optional

// Called when the AdManager has finished loading an advertisement and it is ready to be presented.
- (void)ilmFinishedLoadingAdOnView:(UIView *)view;

// Called when the AdManager has failed to load an Ad.
- (void)ilmFailedToLoadAdOnView:(UIView *)view withError:(ILMError *)error;

// Called after an advertisement is clicked and before leaving the application to open its content.
- (void)ilmDidPerformClickOnAdWithView:(UIView *)view willLeaveApplication:(BOOL)willLeaveApplication;

// Called if the advertisement is closed by an user.
- (void)ilmDidCloseAdOnView:(UIView *)view;

/**
 Called after an advertisement is clicked and before the click action is performed
 Return YES if you allow the click action to be performed, NO otherwise.
 */
- (BOOL)ilmWillPerformClickOnAdWithView:(UIView *)view;

// Called when a rich media ad has been expanded into fullscreen.
- (void)ilmDidExpandAdOnView:(UIView *)view;

// Called when a rich media ad has been resized in the current view controller;
- (void)ilmDidResizeAdOnView:(UIView *)view;

// Called when the view returns from an ad click.
- (void)ilmDidReturnFromClickOnView:(UIView *)view;

@end
