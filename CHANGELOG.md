# CHANGELOG
All notable changes to this project will be documented in this file

## [4.3.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.3.3) (05/12/2018)

### Fix:
* Fixes issue with click registration on Ads SDK push notifications

## [4.3.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.3.2) (30/11/2018)

### Fix:
* Fixes issue with time conversion methods

## [4.3.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.3.1) (23/11/2018)

### Fix:
* Fixes issue with the location services initialization

## [4.3.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.3.0) (29/10/2018)

### Feature:
* Signed requests
* Address enrichment with forward-geocoding

## [4.2.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.2.2) (16/10/2018)

### Fix:
* Prevents requests from being executed when network connection is not available

## [4.2.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.2.1) (09/10/2018)

### Fix:
* Adds the push_id to Engage analytics events

## [4.2.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.2.0) (26/09/2018)

### Feature:
* Adds the setUserId and setUserAddress to the Engage public interface

### Fix:
* Fixes an ILMDefaults unarchive error when upgrading from version 3.0 to 4.0+
* Fixes possible memory leaks when using Native Ads

### Refactor:
* Remakes the location authorization request logic to be asynchronous

## [4.1.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.1.0) (23/08/2018)

### Feature:
* Adds integration status logging on developer mode for the Engage SDK

### Refactor:
* Fixes Xcode warnings

## [4.0.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.0.1) (15/07/2018)

#### Fix:
* Fixes the timestamps of non-realtime visits
* Fixes backwards compatibility with previous SDK Versions

## [4.0.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/4.0.0) (09/07/2018)

### Feature:
* Privacy consent support
* Engage analytics
* Adds custom events and screen events support

### Refactor:
* Major changes to the ILMInLocoEngage Public Interface
* Updates the public classes documentation
* Removes unused classes
* Fixes Xcode warnings

## [3.5.8](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.8) (02/07/2018)

### Fix:
* Fixes memory-management errors on the Location SDK

## [3.5.7](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.7) (23/05/2018)

### Fix:
* Fixes umbrella header include warnings

## [3.5.6](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.6) (07/05/2018)

### Fix:
* Fixes memory-management errors on the Location Module
* Fixes visit timestamps on devices below iPhone 5S
* Fixes the Engage device registering after user identifier changes

## [3.5.5](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.5) (22/03/2018)

### Feature:
* Adds the properties locationEnabled and locationRequestAtStartEnabled to ILMEngageOptions
* Adds the property canRequestPermissions to ILMLocationOptions
* Adds the setLocationServicesEnabled method to ILMInLocoEngage

### Fix
* Fixes an error that caused the location authorization to be requested when starting the Engage SDK

## [3.5.4](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.4) (08/03/2018)

### Fix
* Fixes an error that prevented registering for Engage notifications after using multiple application Ids

## [3.5.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.3) (07/03/2018)

### Fix
* Fixes error-handling issues

## [3.5.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.2) (21/02/2018)

### Fix
* Fixes missing parameters on the location monitoring

## [3.5.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.1) (16/02/2018)

### Fix
* Prevents a bug that could cause Engage pushes to be received when leaving a place
* Fixes to the Engage event registering retry logic

## [3.5.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.5.0) (30/01/2018)

### Feature
* Engage iOS Alpha Release

## [3.4.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.4.2) (23/01/2018)

### Fix
* Fixes a synchronization problem on the communication layer
* Fixes an unprefixed symbol that could cause symbol collision

## [3.4.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.4.1) (02/01/2018)

### Fix
* Fixes location monitoring restart.

## [3.4.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.4.0) (17/11/2017)

### Feature
* Makes the ILMUserProfile setting available for the location SDK
* Improvements on visit monitoring

### Refactor
* Greatly improves the initialization performance

### Fix
* Fixes Interstitial rotation for iOS >= iOS 9
* Fixes on rich media calls to expand and resize for architeture armv7 on iOS 8

## [3.3.6](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.6) (14/11/2017)

#### Fix
* Fixes a bug that could cause crashes when closing an interstitial ad on iPhone 4s or below

## [3.3.5](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.5) (09/11/2017)

#### Fix
* Removes Calendar and Store Picture ad events
* Fix the Insterstitial close button placement when the status bar is present

## [3.3.4](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.4) (03/11/2017)

#### Fix
* Fixes a synchronization problem that could happen on the sdk init.

## [3.3.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.3) (27/10/2017)

#### Fix
* Removes unnecessary dependencies of each module

## [3.3.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.2) (17/10/2017)

#### Fix
* Fixes an issue on wifi data collection

## [3.3.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.1) (29/09/2017)

#### Fix
* Fixes a timestamp issue for devices with a 12-hour clock
* Corrects the remote configuration setup logic
* Fixes an issue regarding ads reload time 

## [3.3.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.3.0) (28/09/2017)
#### Feature
* iOS 11 support

#### Refactor
* Removes the Protocol Buffers dependency

#### Fix
* Fixes an issue that caused interstitial ads to not properly close 

## [3.2.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.2.2) (13/09/2017)

#### Fix
 * Remove imports to fix build issues.

## [3.2.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.2.1) (29/08/2017)

#### Fix
 * Error on location data fetch for ads.

## [3.2.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.2.0) (10/08/2017)

#### Feature
 * Solves problems related to wrong timestamps on device.

#### Refactor:
 * Large refactor on Ads

#### Fix:
 * Fixes on Notification Ad Delivery

## [3.1.4](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.1.4) (24/07/2017)

#### Fixed:
* Improves the performance on Native Ads inside lists
* Improves the ILMAdManagerDelegate to pass the ILMAdManager as a parameter

## [3.1.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.1.3) (20/07/2017)

#### Fixed:
* Fixes a problem that prevented Notification Ads from appearing

## [3.1.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.1.2) (17/07/2017)

#### Fixed:
* Fixes a compatibility issue when updating from versions earlier than 3.1 to 3.1

## [3.1.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.1.1) (17/07/2017)

#### Fixed:
* If the location module is enabled, now correctly uses the last known location when requesting Ads
* Removes unused headers from the public interface

## [3.1.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.1.0) (05/07/2017)

### Feature:
 * Adds the support to present Native Ads using custom UIViews
   - When using AdManager, views don't have to extend a NativeAdView or a NativeAdCell
   - Custom cells can be used to present native ads on a tableview
 * Improves the location module's precision 
 * Interstitial Ads now automatically close by default after returning from a click

### Fix:
 * Fixes a problem with the ad viewability for ads that are not completely on screen

## [3.0.6](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.6) (15/06/2017)

#### Fixed:
* Fixed an Ads serialization problem

## [3.0.5](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.5) (31/05/2017)

#### Fixed:
* Fixed json keys used in ad-related requests.

## [3.0.4](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.4) (26/05/2017)

#### Fixed:
* Fixed a concurrency problem

## [3.0.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.3) (25/05/2017)

#### Fixed:
* Fixed an issue in the Location Analytics

## [3.0.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.2) (19/05/2017)

#### Fixed:
* Fix an issue with development devices

## [3.0.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.1) (04/05/2017)

#### Fixed:
* Enabled bitcode on dependencies
* Fixed an Interstitial ad logic problem
* Fixed a problem on native table view ads

## [3.0.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/3.0.0) (06/04/2017)

### Feature:
 * InLocoMedia SDK now has two public independent modules: Ads and Location
 * Background fetch method for the scheduler on the location module
 * Location public interface

### Fix:
 * Fixed a problem on interstitial impression registering
 * Fixed a problem on native table view ads when the method numberOfSectionsInTableView wasn't implemented

### Refactor:
 * Several classes were renamed

## [2.4.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.4.3) (21/03/2017)

#### Fixed:
 * Fixing Native request logic on NativeAdManger.

## [2.4.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.4.2) (14/03/2017)

#### Fixed:
 * Remove unnecessary symbols from binaries

## [2.4.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.4.1) (17/02/2017)
#### Fixed:
 * Location services are now being properly initiated

## [2.4.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.4.0) (27/01/2017)

#### Updated:
 * Enabled Calendar and StorePicture AdActions when the app has the required permissions on plist.
 * Embedded Bitcode

## [2.3.6](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.6) (13/01/2017)

#### Fixed:
* Fixed internal analytics key

## [2.3.5](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.5) (16/12/2016)

#### Fixed:
 * Bug on ILMNativeAdTableView on "didSelectedRowAtIndexPath"
 * Fixed ILMNativeAdTableView cells that wasn't registering impressions correctly

## [2.3.4](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.4) (1/12/2016)

#### Fixed:
 * Geofence registering error

## [2.3.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.3) (21/11/2016)

#### Fixed:
 * Adjust IndexPath for TableView calls on ILMNativeAdTableViewManager

## [2.3.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.2) (10/11/2016)

#### Updated:
 * Raise supported version from iOS 7 to iOS 8.

## [2.3.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.1) (09/11/2016)

#### Fixed:
 * Removed wrong dependency embed (CocoaSecurity)
 
## [2.3.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.3.0) (03/11/2016)

#### Fixed:
 * Recover iOS 7 compatibility
 * Adjusts on location data collection

## [2.2.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.2.1) (20/10/2016)

#### Fixed:
 * Fixing synchronization error on geofences services

## [2.2.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.2.0) (26/09/2016)

#### Fixed:
 * iOS 10 compatibility

#### Feature:
 * First Opening Tracker

## [2.1.3](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.1.3) (21/09/2016)
#### Removed:
 * Removed save picture and save to calendar functionality from ads.

## [2.1.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.1.2) (12/09/2016)
#### Fixed:
 * Mangle auto-generated code

---
## [2.1.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.1.1) (23/08/2016)
#### Fixed:
 * Fix on Notification Ad Request

## [2.1.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.1.0) (18/08/2016)
#### Feature:
 * Support to Native on tableViews.
 * Notification Ad Request (adUnit for notification ads)
 * MRAID

## [2.0.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.0.1) (15/06/2016)

#### Fixed:
* Hotfix on the AdView load to reuse adRequest on refresh
* SDK events were not being logged 

## [2.0.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/2.0.0) (05/30/2016)

#### Feature:
* Autolayout support on native ads.
* Default handling for notification ads
* UserProfile persistence

#### Updated:
* Asking permissions required by ios 8, 7 and 9
* Renamed all prefixes
* Native Ad remade. Now it uses native types on labels and buttons and IBOutlets were create to connect with the xib
* Activation of development mode

#### Removed:
* Categories
* Native Coupon
* AdRequest persistence

## [1.6.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/1.6.1) (05/29/2015)

## [1.6.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/1.6.0) (03/30/2015)

#### Updated:
* Optimizations on AdRequest
* The access to AdType is now different. Check our documentation (New mediation adapters are required for this version)

## [1.5.2](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/1.5.2) (03/11/2015)

#### Fixed:
* Hotfix on the NotificationAd register

## [1.5.1](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/1.5.1) (03/11/2015)

#### Fixed:
* Hotfix on the InterstitialAd that was automatically closed after returning from a AdClick

## [1.5.0](https://github.com/In-Loco-Media/inlocomedia-ios-sdk/releases/tag/1.5.0) (02/25/2015)

#### Feature:
* Cocoapods support
* Included new AdSize: MEDIUM_RECTANGLE
* Included interface for DSP exchange

#### Updated:
* Optimizating the Ad deliver (Speed and Fill Rate)
* Memory usage optimizations

#### Fixed:
* Advertisement align on iOS 8
