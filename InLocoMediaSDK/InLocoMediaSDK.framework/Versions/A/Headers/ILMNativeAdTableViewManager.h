//
//  ILMNativeAdTableViewManager.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 6/10/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMAdRequest.h"

@interface ILMNativeAdTableViewManager : NSObject

@property (readonly) UITableView *tableView;

- (id)init NS_UNAVAILABLE;
- (id)initWithNibName:(NSString *)nibName andAdCellHeight:(CGFloat)height;
// Link the manager with your tableView implementation
- (void)linkTableView:(UITableView *)tableView withDelegate:(NSObject <UITableViewDelegate> *)delegate andDataSource:(NSObject <UITableViewDataSource> *)dataSource;
// start loading ads
- (void)loadAds;
// start loading ads with the given adRequest
- (void)loadAds:(ILMAdRequest *)adRequest;

/*  The two methods below should only be used if you are accessing the tableView positions through the tableView object, all delegate calls have the values already adjusted to make the integration easier.
    
    PS: The selector calls to tableView:shouldUpdateFocusInContext: and tableView:didUpdateFocusInContext:withAnimationCoordinator: have not been adjust because UITableViewFocusUpdateContext can not be instantiated, if you use them please remember to adjust the position yourself
 */

// Given an indexPath returns if its an ad position
- (BOOL)isAdPosition:(NSInteger)position;
// Given an indexPath returns a IndexPath as if there was no ads in the tableView
- (NSIndexPath *)adjustedPosition:(NSIndexPath *)index;
@end
