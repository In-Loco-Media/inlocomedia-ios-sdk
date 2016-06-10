//
//  ILMMasterViewController.m
//  InLocoMedia Ads Example IOS
//
//  Created by InLocoMedia on 4/17/14.
//  Copyright (c) 2014 InLocoMedia. All rights reserved.
//

#import <InLocoMediaAPI/InLocoMedia.h>

#import "ILMStartViewController.h"
#import "ILMAdvertisementViewController.h"
#import "ILMNativeAdvertisementViewController.h"
#import "ILMNativeAdStoryboardViewController.h"
#import "ILMListElement.h"

@interface ILMStartViewController ()
{
    NSDictionary *_tableContents;
    NSArray *_groups;
    UISwitch *_notificationSwitch;
}

@end

@implementation ILMStartViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSArray *displayAds =
    @[[[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdBannerSmall andValue:BANNER_SMALL],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdBannerSmallLandscape andValue:BANNER_SMALL_LANDSCAPE],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdBannerTablet andValue:BANNER_SMALL_TABLET],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdBannerLarge andValue:BANNER_LARGE],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdTile andValue:BANNER_AD_TITLE],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdMediumRectangleIAB andValue:MEDIUM_RECTANGLE_IAB],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdFullBannerIAB andValue:FULL_BANNER_IAB],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdSmartBannerPortrait andValue:SMARTBANNER_PORTRAIT],
          [[ILMListElement alloc] initAdType:ILMAdTypeDisplayAdSmartBannerLandscape andValue:SMARTBANNER_LANDSCAPE]];

    NSArray *nativeAds =
        @[[[ILMListElement alloc] initAdType:ILMAdTypeNativeAdLarge value:NATIVE_STORYBOARD nibName:NATIVE_VIEW andCellIdentifier:NATIVE_STORYBOARD_CELL],
          [[ILMListElement alloc] initAdType:ILMAdTypeNativeAdLarge value:NATIVE nibName:NATIVE_VIEW andCellIdentifier:NATIVE_CELL]];

    NSArray *interstitialAds = @[[[ILMListElement alloc] initAdType:0 value:INTERSTITIAL_ADS andCellIdentifier:INTERSTITIAL_AD_CELL]];

    NSArray *customStyles = @[[[ILMListElement alloc] initAdType:0 value:NOTIFICATION andCellIdentifier:NOTIFICATION_CELL]];

    _groups = @[DISPLAY_ADS, INTERSTITIAL_ADS, NATIVE_ADS, CUSTOM_ADS];
    _tableContents = @{[_groups objectAtIndex:0] : displayAds, [_groups objectAtIndex:1] : interstitialAds, [_groups objectAtIndex:2] : nativeAds, [_groups objectAtIndex:3] : customStyles};
}

- (ILMListElement *)listElementAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *group = _groups[indexPath.section];
    NSArray *listData = _tableContents[group];
    return listData[indexPath.row];
}

#pragma IBAction

- (IBAction)actionNotificationSwitch:(id)sender
{
    if ([_notificationSwitch isOn]) {
       [InLocoMedia enableNotificationAds];
    } else {
        [InLocoMedia disableNotificationAds];
    }
}

#pragma UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    id sectionObject = [_groups objectAtIndex:section];
    NSArray *listData = [_tableContents objectForKey:sectionObject];
    return [listData count];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return [_groups count];
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
{
    return [_groups objectAtIndex:section];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    ILMListElement *element = [self listElementAtIndexPath:indexPath];

    UITableViewCell *cell;

    if (element.cellIdentifier) {
        cell = [tableView dequeueReusableCellWithIdentifier:element.cellIdentifier forIndexPath:indexPath];
    } else {
        cell = [tableView dequeueReusableCellWithIdentifier:CELL forIndexPath:indexPath];
    }

    if ([element.cellIdentifier isEqualToString:NOTIFICATION_CELL]) {
       UISwitch *theSwitch = [[UISwitch alloc] initWithFrame:CGRectZero];
       [cell addSubview:theSwitch];
       cell.accessoryView = theSwitch;
       _notificationSwitch = theSwitch;
       _notificationSwitch.on = [InLocoMedia isNotificationAdsEnabled];
       [_notificationSwitch addTarget:self action:@selector(actionNotificationSwitch:) forControlEvents:UIControlEventValueChanged];
    } else {
        cell.textLabel.text = element.adTypeValue;
    }

    return cell;
}

#pragma UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSArray *listData = [_tableContents objectForKey:[_groups objectAtIndex:[indexPath section]]];
    ILMListElement *element = [listData objectAtIndex:indexPath.row];

    if ([element.cellIdentifier isEqualToString:NOTIFICATION_CELL]) {
       [_notificationSwitch setOn:!_notificationSwitch.on animated:YES];
       [self actionNotificationSwitch:_notificationSwitch];
       [tableView deselectRowAtIndexPath:indexPath animated:YES];
    }
}

- (void)tableView:(UITableView *)tableView willDisplayHeaderView:(UIView *)view forSection:(NSInteger)section
{
    // Background color
    view.tintColor = [UIColor colorWithRed:0.133 green:0.478 blue:0.392 alpha:1];
    
    // Text Color
    UITableViewHeaderFooterView *header = (UITableViewHeaderFooterView *)view;
    [header.textLabel setTextColor:[UIColor whiteColor]];
    UIFont *font = header.textLabel.font;
    [header.textLabel setFont:[font fontWithSize:24]];
}


#pragma UIViewController

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:OPEN_AD_VC]) {
       NSIndexPath *indexPath = [self.tableView indexPathForSelectedRow];
       ILMListElement *element = [self listElementAtIndexPath:indexPath];

       if ([[segue destinationViewController] isKindOfClass:[ILMNativeAdvertisementViewController class]]) {
           ILMNativeAdvertisementViewController *nativeAdViewController = [segue destinationViewController];
           [nativeAdViewController setElement:element];
        } else if ([[segue destinationViewController] isKindOfClass:[ILMNativeAdStoryboardViewController class]]) {
            ILMNativeAdStoryboardViewController *nativeAdViewController = [segue destinationViewController];
            [nativeAdViewController setElement:element];
        } else {
            ILMAdvertisementViewController *adViewController = [segue destinationViewController];
            [adViewController setElement:element];
        }
    }
}

@end