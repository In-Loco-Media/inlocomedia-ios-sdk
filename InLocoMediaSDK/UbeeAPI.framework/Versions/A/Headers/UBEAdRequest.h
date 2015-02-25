//
//  UBEAdRequest.h
//  UbeeAPI
//
//  Created by Ubee on 5/13/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBEUserProfile.h"
#import "UBECategory.h"

@interface UBEAdRequest : NSObject

//User profile used to filter the AdRequest results
@property (nonatomic, strong) UBEUserProfile *userProfile;

//Set of UBECategory to filter the AdRequest results
@property (nonatomic, strong) NSMutableSet *categories;

//Set of NSString to optimize the AdRequest results
@property (nonatomic, strong) NSMutableSet *keywords;

//Locale for the keywords
@property (nonatomic, strong) NSString *locale;

//Query for filtering the Ad Request
@property (nonatomic, strong) NSString *query;

//Id for showing a specific advertisement
@property (nonatomic, strong) NSString *advertisementId;

@property (nonatomic, assign, getter=isDevelopmentEnabled, setter=setDevelopmentEnabled:) BOOL developmentEnabled;

//Uses the default UserProfile
+ (instancetype)defaultRequest;

//Add a Set of UBECategories to the AdRequest target
- (void)addCategories:(NSSet *)categories;

//Add a UBECategories to the AdRequest target
- (void)addCategory:(UBECategory *)category;

//Add a Set of keywords to the AdRequest target
- (void)addKeywords:(NSSet *)keywords;

//Add a keyword to the AdRequest target
- (void)addKeyword:(NSString *)keyword;

//Save the CurrentAdRequest configurations as default
- (void)saveAsDefaultAdRequest;

//Reset the default AdRequest that was saved on the saveAsDefaultAdRequest: method
+ (void)resetDefaultAdRequest;

@end
