//
//  InLoco.h
//  InLocoMediaAPI
//
//  Created by Rafael Gouveia on 10/13/16.
//  Copyright © 2016 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILMModules.h"
#import "ILMLocationOptions.h"
#import "ILMGeofencingManager.h"
#import "ILMLocationManager.h"
#import "ILMLocation.h"
#import "ILMAddress.h"
#import "ILMLocationScanner.h"
#import "ILMGeofencingData.h"
#import "ILMGeofencingRegion.h"
#import "ILMGeofencingEvent.h"
#import "ILMLogger.h"
#import "ILMPublicMacros.h"
#import "ILMUserProfile.h"
#import "ILMWebImageView.h"

@interface ILMInLoco : NSObject

// Init Location API
+ (void)initWithOptions:(ILMLocationOptions *)options;
/* Enables or disables location services
    On ILMLocationOptions you may set locationEnabled property true or false. You can change this configuration through this set method.
    If you set locationServices to false, it will automatically disable all geofencing and location monitoring, and clean any cached location data.
    Also, with this configuration false, you will not be able to activate any service individually.
    If you set it true, you may have to activate each service individually later. */
+ (void)setLocationServicesEnabled:(BOOL)enable;
/* Enables or disables geofencing services
   The ILMGeofencingManager will start to send events through its delegates only when this configuration is enabled.
   Based on last configuration set before the app closes or goes on background, you may still receive geofence events.*/
+ (void)setGeofencingEnabled:(BOOL)enable;
/* Enables or disables location monitoring services
   Visit tracking and significant location changes. Location monitoring will be active in background and even if the app closes this configuration will persist. */
+ (void)setLocationMonitoringEnabled:(BOOL)enable;
// Returns whether the location monitoring is active or not
+ (BOOL)isMonitoringLocation;
/* This function enables the sdk to work properly on background. You can it from your app delgate method with same name.
    Look at our documentation in order to find more details about its usage
 */
+ (void)applicationPerformFetchWithResult:(void (^)(UIBackgroundFetchResult))fetchResultBlock;


@end
