# CHANGELOG
All notable changes to this project will be documented in this file.

Release 3.0.1 (04/05/2017)
===
#### Fixed:
* Enabled bitcode on dependencies
* Fixed logic on Interstitial
* Fixed problem on native table view ads

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
