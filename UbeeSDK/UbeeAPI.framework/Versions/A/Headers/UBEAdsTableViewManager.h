//
//  UBEAdsListManager.h
//  UbeeAPI
//
//  Created by Ubee on 4/21/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBEAdView.h"
#import "UBEAdType.h"

@class UBEAdsTableViewManager;

@protocol UBEAdTableViewManagerDelegate <NSObject>
@optional

//Called when an ad request has failed.
- (void)ubeAdManager:(UBEAdsTableViewManager *)adManager didFailToReceiveAdWithError:(UBEError *)error;

// This will be called after the Manager fetch method has finished;
- (void)ubeAdManager:(UBEAdsTableViewManager *)adManager didReceiveAds:(NSUInteger)ammountOfAdsReceived;

@end


@interface UBEAdsTableViewManager : NSObject

@property (nonatomic, assign) UBEAdType adType;
@property (nonatomic, strong) id <UBEAdTableViewManagerDelegate> delegate;

- (instancetype)initWithAdType:(UBEAdType)adType andNumberOfAdsPerPage:(NSUInteger)adsPerPage;


//Request the next advertisement page. Thread-safe. Will only perform once, regardless of how many fetches are called until the block is called.
- (void)fetchNextPage;

//The number of advertisements loaded
- (NSUInteger)count;

//Loads the content of a cell that has an UBEAdView with the content of the advertisement
- (UBEAdView *)loadContentForCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

@end
