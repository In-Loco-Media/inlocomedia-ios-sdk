//
//  UBENativeAdView.h
//  UbeeAPI
//
//  Created by Ubee on 2/26/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import "UBEAdView.h"
#import "UBEContentImageView.h"
#import "UBEIconImageView.h"
#import "UBETitleLabel.h"
#import "UBEDescriptionLabel.h"
#import "UBEHighlightLabel.h"
#import "UBEButton.h"
#import "UBEPriceLabel.h"
#import "UBEOriginalPriceLabel.h"
#import "UBEDiscountLabel.h"
#import "UBEWebImageView.h"

@interface UBENativeAdView : UBEAdView

//The name of the nib file containing the NativeAd Content
@property(nonatomic) NSString *nibName;

//Init the NativeAdView with a AdType and nibName
- (id)initWithType:(UBEAdType)adType andNibName:(NSString *)nibName;

@end
