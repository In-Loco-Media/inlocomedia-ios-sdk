![Alt logoImage][logo]

[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/InLocoMedia-Ads-SDK.svg)](https://cocoapods.org/pods/InLocoMedia-Ads-SDK)
[![Twitter URL](https://img.shields.io/twitter/url/http/shields.io.svg?style=social&InLocoMediaTwitter)](https://twitter.com/inlocomedia)

#InLocoMedia iOS SDK

Monetize your mobile apps with In Loco Media, the biggest mobile ad network in Latin America and leader in indoor location technology. We deliver premium contextual ads and Mobile Marketing Automation services.  To learn more about us check our [website].
In Loco Media's SDK is easy to install and start monetizing with relevant ads to the user, thanks to its powerful targeting capabilities. 

Some of our Ads needs location for targeting, we recommend you to enable this permissions to get the best monetization results from our Network.

> Take care with your permission requests for your app, if it does not make sense to your application to ask location permissions some users might dont like grant them.

#How to get Started

- [Request an account][createAccount] and log in at our [dashboard][accounts].
- Register your app.
- Integrate it to your project, to do it you have two options:
    - Use CocoaPods
    - Download our SDK directly and add to your project

##Using CocoaPods

> CocoaPods manages library dependencies for your Xcode projects and is the recommended approach for deploying the InLocoMedia iOS SDK. If you do not know about it, check the [installation guide][cocoapods].

To install cocoapods:

```bash
$ gem install cocoapods
```

Add our SDK to your podfile

```cocoapods
source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '7.0'

pod 'InLocoMedia-Ads-SDK', '~> 1.6.1'
```

##Using the SDK download

* Download the '.framework' [**here**] [framework]
* In the project navigator, select the project or group within a project to which you want to add the framework.
* Choose File > Add Files to “< App_Name >”.
* Select the framework bundle, and click Add.
 
 > Tip: You can also add a framework to a project by dragging the framework bundle from a Finder window into the project in the project navigator.

##Initializing SDK

You will need to use your application id (app_id) that you received when you created your application in our [dashboard][accounts].
Just add the line below in the **application:didFinishLaunchingWithOptions:** method of the **AppDelegate**.

```objective-c
#import <InLocoMediaAPI/InLocoMedia.h>

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
	//...
    ILMOptions *options = [[ILMOptions alloc] init];
    
    //Your production ads key
    [options setAdsKey:@"<your_ads_key>"];
    
    //Init our framework
    [InLocoMedia initWithOptions:options];
    //...
}
```

##Displaying an Banner Ad

```objective-c
#import <InLocoMediaAPI/InLocoMedia.h>

- (void)viewDidLoad
{
    ILMAdView *adView = [[ILMAdView alloc] initWithDisplayAdType:ILMAdTypeDisplayAdBannerSmall];
    [adView loadAd];
    [self.view addSubview:adView];
}
```

> Check out [Getting started][gettingStarted] section to learn the first steps of integration.

> All documentation is available on our **[wiki] [documentation]**.

#Latest Updates

Check our [changelog]

#Requirements

* Minimum supported version: iOS 
* Xcode 7+

#Communication

If you have any problems with your integration open an issue on github or contact us at publishers@inlocomedia.com

[cocoapods]: http://guides.cocoapods.org/using/getting-started.html
[framework]: https://s3.amazonaws.com/mobile-api/IOS/1.6/Release+Files/1.6.1/UbeeAPI-1.6.1.zip
[logo]: https://s3.amazonaws.com/mobile-api/IOS/v2/Documentation/Logo+Black.png
[documentation]: https://github.com/In-Loco-Media/inlocomedia-ios-sdk/wiki
[sign_up]: http://inlocomedia.com/
[changelog]: https://github.com/In-Loco-Media/inlocomedia-ios-sdk/blob/master/CHANGELOG.md
[website]: http://www.inlocomedia.com/
[accounts]: https://accounts.inlocomedia.com/
[gettingStarted]: https://github.com/In-Loco-Media/inlocomedia-ios-sdk/wiki/Getting-Started
[createAccount]: https://accounts.inlocomedia.com/publishers/sign_up