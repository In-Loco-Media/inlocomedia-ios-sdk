# CHANGELOG
All notable changes to this project will be documented in this file.

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