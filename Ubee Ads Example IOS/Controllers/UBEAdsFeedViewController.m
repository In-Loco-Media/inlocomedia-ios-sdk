//
//  UBEAdsFeedViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/21/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEAdsFeedViewController.h"

@interface UBEAdsFeedViewController () <UITableViewDataSource, UIScrollViewDelegate, UBEAdTableViewManagerDelegate>

@property (nonatomic, strong) UBEAdsTableViewManager *manager;

@end

@implementation UBEAdsFeedViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.tableView.dataSource = self;
    
    _manager = [[UBEAdsTableViewManager alloc] initWithAdType:UBEAdTypeNativeAdCoupon andNumberOfAdsPerPage:10];
    _manager.delegate = self;
    [_manager fetchNextPage];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _manager.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *AdCellIdentifier = @"Cell";

    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:AdCellIdentifier forIndexPath:indexPath];
    
    [_manager loadContentForCell:cell atIndexPath:indexPath];
    
    return cell;
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    if (scrollView.contentOffset.y == scrollView.contentSize.height - scrollView.bounds.size.height)
    {
        [_manager fetchNextPage];
    }
}

- (void)tableView: (UITableView *)tableView didSelectRowAtIndexPath: (NSIndexPath *)indexPath
{
    [self.tableView deselectRowAtIndexPath:indexPath animated:YES];
}

#pragma mark AdManager delegate

- (void)ubeAdManager:(UBEAdsTableViewManager *)adManager didReceiveAds:(NSUInteger)ammountOfAdsReceived
{
    [self.tableView reloadData];
}

- (void)ubeAdManager:(UBEAdsTableViewManager *)adManager didFailToReceiveAdWithError:(UBEError *)error
{
    //No Advertisement Available
}

@end
