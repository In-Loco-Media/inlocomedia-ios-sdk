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

    UBEListElement *displayBannerSmall = [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerSmall andValue:@"Banner Small"];
    UBEListElement *displayBannerLarge = [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdBannerLarge andValue:@"Banner Large"];
    UBEListElement *displayTile = [[UBEListElement alloc] initAdType:UBEAdTypeDisplayAdTile andValue:@"Tile"];
    
    UBEListElement *nativeSmall = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdSmall andValue:@"Native Small"];
    [nativeSmall setNibName:@"NativeSmall"];
    UBEListElement *nativeLarge = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge andValue:@"Native Large"];
    [nativeLarge setNibName:@"NativeLarge"];;
    UBEListElement *nativeCoupon = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdCoupon andValue:@"Native Coupon"];
    [nativeCoupon setNibName:@"NativeCoupon"];
    
    UBEListElement *nativeLargeStoryboard = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge andValue:@"Native From Storyboard"];
    [nativeLargeStoryboard setCellIdentifier:@"NativeAdFromStoryboardCell"];
    
    UBEListElement *nativeOnList = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge andValue:@"Native on List"];
    [nativeOnList setCellIdentifier:@"NativeAdOnListCell"];
    
    UBEListElement *interstitial = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge andValue:@"Interstitial"];
    [interstitial setCellIdentifier:@"InterstitialAdCell"];
    
    UBEListElement *adsFeed = [[UBEListElement alloc] initAdType:UBEAdTypeNativeAdLarge andValue:@"Ads Feed"];
    [adsFeed setCellIdentifier:@"AdsFeedCell"];
    
    NSArray *_displayAds = @[displayBannerSmall, displayBannerLarge, displayTile];
    
    NSArray *_nativeAds = @[nativeSmall, nativeLarge, nativeCoupon];
    
    NSArray *_interstitialAds = @[interstitial];
    
    NSArray *_customStyles = @[nativeLargeStoryboard, nativeOnList, adsFeed];
    
    _groups = @[@"Display Ads", @"Native Ads", @"Interstitial", @"Custom Usages"];
    
    _tableContents = @{[_groups objectAtIndex:0]:_displayAds,
                       [_groups objectAtIndex:1]:_nativeAds,
                       [_groups objectAtIndex:2]:_interstitialAds,
                       [_groups objectAtIndex:3]:_customStyles};
    
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
    NSArray *listData = [_tableContents objectForKey: [_groups objectAtIndex:[indexPath section]]];
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
        NSArray *listData = [_tableContents objectForKey: [_groups objectAtIndex:[indexPath section]]];
        UBEListElement *element = [listData objectAtIndex:indexPath.row];
        UBEAdvertisementViewController *adViewController = [segue destinationViewController];
        [adViewController setElement:element];
        
    }
}

@end
