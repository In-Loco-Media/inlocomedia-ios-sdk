//
//  UBEIndoorMapView.h
//  UbeeAPI
//
//  Created by Ubee on 3/12/14.
//  Copyright (c) 2014 Ubee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBEMapProperties.h"
#import "UBERetail.h"
#import "UBERetailMap.h"
#import "UBEError.h"

@class UBEMapView;

@protocol UBEMapViewDelegate <NSObject>

@optional

//Called when the map has downloaded the RetailMap list for the selected Retail. At this point the map is ready to show retail maps.
- (void)mapView:(UBEMapView *)mapView didFinishLoadMaps:(NSArray *)retailMaps;

//Called when the map has finished loading the retail map and the image is ready to be shown
- (void)mapView:(UBEMapView *)mapView didFinishLoadMap:(UBERetailMap *)map;

//Called when either the RetailMap list or the RetailMap selected could not be loaded.
- (void)mapView:(UBEMapView *)mapView didFailLoadWithError:(NSError *)error;

@end

@interface UBEMapView : UIWebView <UIWebViewDelegate>

//Set the custom properties of of the map. If you are going to change the map or hall color, it's recomended to hide the map view while switching floors or you may expect a color flickering when the map is loaded.
@property (nonatomic) UBEMapProperties *properties;
@property (nonatomic) UBERetail *retail;
@property (nonatomic) NSArray *retailMaps;
@property (nonatomic) UBERetailMap *retailMap;
@property (nonatomic) id<UBEMapViewDelegate> mapViewDelegate;

//Set the retail map for the MapView. It will start loading the RetailMap List
- (void)setRetailById:(NSString *)retailId;

- (void)loadSVG:(NSData *)svgFile;

//Check if there is a next floor available in the retail map list
- (BOOL)hasNextFloor;

//Check if there is a previous floor available in the retail map list
- (BOOL)hasPreviousFloor;

//Set to the next floor of the retail map list
- (void)setNextFloor;

//Set to the previous floor of the retail map list
- (void)setPreviousFloor;


@end



