//
//  ILMNativeAdTableView.m
//  InLocoMedia-Ads-Sample
//
//  Created by Rafael Gouveia on 6/15/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import "ILMNativeAdTableView.h"
#import <InLocoMediaAPI/InLocoMedia.h>



@interface ILMNativeAdTableView () <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property ILMNativeAdTableViewManager *adPlacer;
@property NSString *cellNibName;
@property NSString *identifier;
@property NSInteger height;
@property NSString *nativeNib;

@end

@implementation ILMNativeAdTableView

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    ILMAdRequest *adRequest = [[ILMAdRequest alloc] init];
    adRequest.adUnitId = self.immediate ? AD_UNIT_IMMEDIATE : AD_UNIT_AFTER_SCROLL;
    
    self.cellNibName = [self.adType isKeyEqual:@"native_large"] ? MY_CELL_NIB_LARGE : MY_CELL_NIB_SMALL;
    self.nativeNib = [self.adType isKeyEqual:@"native_large"] ? NATIVE_CELL_NIB_LARGE : NATIVE_CELL_NIB_SMALL;
    self.identifier = [self.adType isKeyEqual:@"native_large"] ? MY_CELL_IDENTIFIER_LARGE : MY_CELL_IDENTIFIER_SMALL;
    self.height = [self.adType isKeyEqual:@"native_large"] ? AD_HEIGHT_LARGE : AD_HEIGHT_SMALL;
    //create an ad manager for your tableview
    self.adPlacer = [[ILMNativeAdTableViewManager alloc] initWithNibName:self.nativeNib andAdCellHeight:self.height];
    self.tableView.rowHeight = self.height;
    /* link it with your tableView
     * Now the ad manager will place ads in your table view accordingly with the adUnit passed on the adRequest.
     * You can use your table view as you would use in a normal case. For correct usage do not set the tableView delegate or dataSource after the link call
     */
    [self.adPlacer linkTableView:self.tableView withDelegate:self andDataSource:self];
    //start loading ads
    [self.adPlacer loadAds:adRequest];
    
    UINib *nib = [UINib nibWithNibName:self.cellNibName bundle:nil];
    [self.tableView registerNib:nib forCellReuseIdentifier:self.identifier];
}


#pragma mark your_tableView_delegates_implementations

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:self.identifier];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:self.identifier];
    }
    
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 50;
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

@end