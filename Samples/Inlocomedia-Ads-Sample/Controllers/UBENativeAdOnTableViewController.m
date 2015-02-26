//
//  UBENativeAdOnTableViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 4/18/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBENativeAdOnTableViewController.h"
#import <UbeeAPI/Ubee.h>

@interface UBENativeAdOnTableViewController ()

@property (nonatomic, strong) UBEAdsTableViewManager *manager;
@property (nonatomic) NSArray *tableContent;

@end

@implementation UBENativeAdOnTableViewController

- (void)viewDidLoad
{
    _tableContent = [NSMutableArray arrayWithObjects:@"Egg Benedict", @"Mushroom Risotto", @"Full Breakfast", @"Hamburger", @"Advertisement", @"Creme Brelee", @"White Chocolate Donut", @"Coffee", @"Instant Noodle with Egg", @"Noodle with BBQ Pork", @"Japanese Noodle with Pork", @"Green Tea", @"Advertisement", @"Angry Cake", @"Ham and Cheese Panini", nil];

    [self reloadInputViews];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _tableContent.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *AdCellIdentifier = @"NativeAdCell";
    static NSString *CellIdentifier = @"Cell";

    UITableViewCell *cell;

    id content = [_tableContent objectAtIndex:indexPath.row];

    if ([content isEqualToString:@"Advertisement"]) {
        cell = [tableView dequeueReusableCellWithIdentifier:AdCellIdentifier forIndexPath:indexPath];
    } else {
        cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];
        cell.textLabel.text = [_tableContent objectAtIndex:indexPath.row];
    }

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [self.tableView deselectRowAtIndexPath:indexPath animated:YES];
}

@end
