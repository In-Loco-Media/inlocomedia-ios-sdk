//
//  UBEMasterViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/17/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEStartViewController.h"
#import "UBEAdvertisementViewController.h"
#import "UBEListElement.h"
#import <UbeeAPI/Ubee.h>

@interface UBEStartViewController () {
    NSDictionary *_tableContents;
    NSArray *_groups;
}
@end

@implementation UBEStartViewController

- (void)viewDidLoad
{
    NSArray *displayAds = @[ [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerSmall andValue:@"Banner Small"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerSmallLandscape andValue:@"Banner Small Landscape"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerTablet andValue:@"Banner Small Tablet"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerLarge andValue:@"Banner Large"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdTile andValue:@"Banner Ad Tile"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdMediumRectangleIAB andValue:@"Medium Rectangle IAB"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdFullBannerIAB andValue:@"Full Banner IAB"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdSmartBannerPortrait andValue:@"Smartbanner Portrait"],
                             [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdSmartBannerLandscape andValue:@"Smartbanner Landscape"] ];
    
    NSArray *nativeAds = @[ [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdSmall value:@"Native Small" nibName:@"NativeSmall" andCellIdentifier:nil],
                            [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"Native Large" nibName:@"NativeLarge" andCellIdentifier:nil],
                            [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdCoupon value:@"Native Coupon" nibName:@"NativeCoupon" andCellIdentifier:nil] ];
    
    NSArray *interstitialAds = @[ [[UBEListElement alloc] initAdType:0 value:@"Interstitial" andCellIdentifier:@"InterstitialAdCell"] ];
    
    NSArray *customStyles = @[ [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"Native on List" andCellIdentifier:@"NativeAdOnListCell"],
                               [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"Native From Storyboard" andCellIdentifier:@"NativeAdFromStoryboardCell"],
                               [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"Ads Feed" andCellIdentifier:@"AdsFeedCell"],
                               [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"AdMob Mediation" andCellIdentifier:@"MediationCell"],
                               [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge value:@"AdMob Interstitial Mediation" andCellIdentifier:@"MediationInterstitialCell"],
                               [[UBEListElement alloc] initAdType:0 value:@"Notification" andCellIdentifier:@"NotificationCell"]];
    
    _groups = @[ @"Display Ads", @"Interstitial", @"Native Ads", @"Custom Usages" ];
    
    _tableContents = @{[_groups objectAtIndex:0] : displayAds,
                       [_groups objectAtIndex:1] : interstitialAds,
                       [_groups objectAtIndex:2] : nativeAds,
                       [_groups objectAtIndex:3] : customStyles};
}

#pragma mark - Table View

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
    NSArray *listData = [_tableContents objectForKey:[_groups objectAtIndex:[indexPath section]]];
    UBEListElement *element = [listData objectAtIndex:indexPath.row];
    
    UITableViewCell *cell;
    
    if (element.cellIdentifier) {
        cell = [tableView dequeueReusableCellWithIdentifier:element.cellIdentifier forIndexPath:indexPath];
    } else {
        cell = [tableView dequeueReusableCellWithIdentifier:@"Cell" forIndexPath:indexPath];
    }
    
    cell.textLabel.text = element.adTypeValue;
    
    return cell;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"OpenAdViewController"]) {
        NSIndexPath *indexPath = [self.tableView indexPathForSelectedRow];
        NSArray *listData = [_tableContents objectForKey:[_groups objectAtIndex:[indexPath section]]];
        UBEListElement *element = [listData objectAtIndex:indexPath.row];
        UBEAdvertisementViewController *adViewController = [segue destinationViewController];
        [adViewController setElement:element];
    }
}

@end
