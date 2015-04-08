//
//  UBECategoriesTableViewController.m
//  Ubee Ads Example IOS
//
//  Created by Ubee on 7/10/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBECategoriesTableViewController.h"

@interface UBECategoriesTableViewController () <UBECategoriesDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic) NSArray *categories;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic) NSMutableSet *selectedCategories;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end

@implementation UBECategoriesTableViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.tableView setDataSource:self];
    [self.tableView setDelegate:self];
    
    [self setTitle:@"Categories"];
    
    [Ubee requestAdCategoriesWithLocale:@"en-US" withDelegate:self];
    
    _refreshControl = [[UIRefreshControl alloc] init];
    [_refreshControl addTarget:self action:@selector(refresh) forControlEvents:UIControlEventValueChanged];
    [_tableView addSubview:self.refreshControl];
}

- (void)viewWillDisappear:(BOOL)animated
{
    if (self.categories) {
        UBEAdRequest *adRequest = [UBEAdRequest defaultRequest];
        [adRequest setCategories:self.selectedCategories];
        [adRequest saveAsDefaultAdRequest];
    }
    [super viewWillDisappear:animated];
}

- (void)refresh
{
    [Ubee requestAdCategoriesWithLocale:@"en-US" withDelegate:self];
}

#pragma mark - UBERetailDelegate methods

- (void)onCategoriesReceived:(NSArray *)categories
{
    _categories = categories;
    
    _selectedCategories = [UBEAdRequest defaultRequest].categories;
    if (!_selectedCategories) {
        _selectedCategories = [[NSMutableSet alloc] init];
    }
    
    [_tableView reloadData];
    [_refreshControl endRefreshing];
}

- (void)onRequestFailure:(NSError *)error
{
    NSLog(@"%@", [error localizedDescription]);
    [_refreshControl endRefreshing];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if(_categories) {
        return [_categories count];
    }
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Cell"];
    UBECategory *category = [self.categories objectAtIndex:indexPath.row];
    [cell.textLabel setText:[category name]];
    
    BOOL isSelected = [_selectedCategories containsObject:category];
    
    cell.accessoryType = isSelected ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    UBECategory *category = [self.categories objectAtIndex:indexPath.row];
    [cell.textLabel setText:category.name];
    
    BOOL isSelected = [_selectedCategories containsObject:category];
    
    if (isSelected) {
        [_selectedCategories removeObject:category];
        cell.accessoryType = UITableViewCellAccessoryNone;
    } else {
        [_selectedCategories addObject:category];
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
    }
    
    [tableView deselectRowAtIndexPath:indexPath animated:NO];
    
}

@end
