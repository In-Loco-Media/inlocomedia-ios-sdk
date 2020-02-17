//
//  ILMNativeViewBinder.h
//  InLocoMedia-iOS-SDK
//
//  Created by Marcel Rebouças on 4/24/17.
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ILMImageViewContainer.h"
#import "ILMNativeAdCell.h"
#import "ILMNativeAdView.h"

@interface ILMNativeViewBinder : NSObject

// The view that contains all the subsequent views and is tracked by the viewability. Required.
@property (nonatomic, weak, readonly, nullable) UIView *containerView;
// The UILabel that will receive the Ad's Title Text. Required.
@property (nonatomic, weak, readonly, nullable) UILabel *titleLabel;
// The UILabel that will receive the Ad's Highlight Text.
@property (nonatomic, weak, readonly, nullable) UILabel *highLightLabel;
// The UILabel that will receive the Ad's Description Text.
@property (nonatomic, weak, readonly, nullable) UILabel *descriptionLabel;
// The UIButton that will receive the Ad's click action and the Call To Action Text.
@property (nonatomic, weak, readonly, nullable) UIButton *button;
// The UIImageView holder that will receive the Ad's icon image.
// Either the iconImageView or the contentImageView MUST be set.
@property (nonatomic, strong, readonly, nullable) ILMImageViewContainer *iconImageContainer;
// The UIImageView holder that will receive the Ad's content image.
// Either the iconImageView or the contentImageView MUST be set.
@property (nonatomic, strong, readonly, nullable) ILMImageViewContainer *contentImageContainer;

// Init is unavailable. Use the [ILMNativeViewBinderBuilder build] method to create one.
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface ILMNativeViewBinderBuilder : NSObject

NS_ASSUME_NONNULL_BEGIN

extern NSString* const kILMNativeViewBinderContainerView;
extern NSString* const kILMNativeViewBinderTitleLabel;
extern NSString* const kILMNativeViewBinderHighlightLabel;
extern NSString* const kILMNativeViewBinderDescriptionLabel;
extern NSString* const kILMNativeViewBinderButton;
extern NSString* const kILMNativeViewBinderIconImageView;
extern NSString* const kILMNativeViewBinderContentImageView;

NS_ASSUME_NONNULL_END

// The view that contains all the subsequent views and is tracked by the viewability. Required.
@property (nonatomic, weak, nullable) UIView *containerView;
// The UILabel that will receive the Ad's Title Text. Required.
@property (nonatomic, weak, nullable) UILabel *titleLabel;
// The UILabel that will receive the Ad's Highlight Text.
@property (nonatomic, weak, nullable) UILabel *highLightLabel;
// The UILabel that will receive the Ad's Description Text.
@property (nonatomic, weak, nullable) UILabel *descriptionLabel;
// The UIButton that will receive the Ad's click action and the Call To Action Text.
@property (nonatomic, weak, nullable) UIButton *button;
// The UIImageView that will receive the Ad's icon image.
// Either the iconImageView or the contentImageView MUST be set.
@property (nonatomic, weak, nullable) UIImageView *iconImageView;
// The UIImageView that will receive the Ad's content image.
// Either the iconImageView or the contentImageView MUST be set.
@property (nonatomic, weak, nullable) UIImageView *contentImageView;

/**
 @brief Creates an ILMNativeViewBinderBuilder using the views passed as parameters.
 
 @discussion This method tries to create an ILMNativeViewBinderBuilder using the views passed as parameters.
 Each paramater is then checked to see if it complies with the minimum requirements of a
 native ad. The requirements of a binder validity can be found at the isValid method.
 @param containerView The view that contains all the subsequent views.
 @param titleLabel The UILabel that will receive the Ad's Title field.
 @param highLightLabel The UILabel that will receive the Ad's Highlight field.
 @param descriptionLabel The UILabel that will receive the Ad's Description field.
 @param button The UIButton that will receive the Ad's click action.
 @param iconImage The UIImageView that will receive the Ad's icon image.
 @param contentImage The UIImageView that will receive the Ad's content image.

 @return An instance of an ILMNativeViewBinderBuilder.
 */
- (nonnull instancetype)initWithContainerView:(nonnull UIView *)containerView
                                   titleLabel:(nonnull UILabel *)titleLabel
                               highLightLabel:(nullable UILabel *)highLightLabel
                             descriptionLabel:(nullable UILabel *)descriptionLabel
                                       button:(nullable UIButton *)button
                                iconImageView:(nullable UIImageView *)iconImage
                             contentImageView:(nullable UIImageView *)contentImage;

/**
 @brief Creates an ILMNativeViewBinderBuilder using an ILMNativeAdCell object.
 @return An instance of an ILMNativeViewBinderBuilder.
 */
- (nonnull instancetype)initWithNativeAdCell:(nonnull ILMNativeAdCell *)nativeAdCell;

/**
 @brief Creates an ILMNativeViewBinderBuilder using an ILMNativeAdCell object.
 @return An instance of an ILMNativeViewBinderBuilder.
 */
- (nonnull instancetype)initWithNativeAdView:(nonnull ILMNativeAdView *)nativeAdView;

/**
 @brief Creates an ILMNativeViewBinderBuilder using the view and propertyMapping passed as parameters.
 
 @discussion This method tries to create an ILMNativeViewBinderBuilder using the view and dictionary
 passed as parameters. The propertyMapping expects the type <NSString *, NSString *>, in which
 the key is one of the kILMNativeViewBinder keys (i.e, kILMNativeViewBinderContainerView, kILMNativeViewBinderTitleLabel,
 kILMNativeViewBinderHighlightLabel, kILMNativeViewBinderDescriptionLabel, kILMNativeViewBinderButton,
 kILMNativeViewBinderIconImageView, kILMNativeViewBinderContentImageView) and the values for each key
 are strings containing the keyPath to a UIView using the view parameter as the starting point.
 The views obtained from the keyPath must also respect the expected type (UILabel, UIButton or UIImage).
 The parameters are then checked to see if it complies with the minimum requirements of a
 native ad. The requirements of a binder validity can be found at the isValid method.
 
 @param view The view that contains all the subsequent views.
 
 @param keyPathPropertyMapping A mapping of type <NSString *, NSString *>.
 
 @return An instance of a ILMNativeViewBinderBuilder.
 */
- (nonnull instancetype)initWithView:(nonnull UIView *)view
              keyPathPropertyMapping:(nonnull NSDictionary <NSString *, NSString *> *)keyPathPropertyMapping;

/**
 @brief Creates an ILMNativeViewBinderBuilder using the view and propertyMapping passed as parameters.

 @discussion This method tries to create an ILMNativeViewBinderBuilder using the view and dictionary
 passed as parameters. The propertyMapping expects the type <NSString *, NSNumber *>, in which
 the key is one of the kILMNativeViewBinder keys (i.e, kILMNativeViewBinderContainerView, kILMNativeViewBinderTitleLabel,
 kILMNativeViewBinderHighlightLabel, kILMNativeViewBinderDescriptionLabel, kILMNativeViewBinderButton,
 kILMNativeViewBinderIconImageView, kILMNativeViewBinderContentImageView) and the values for each key
 are numbers containing the tag of a UIView using the view parameter as the starting point.
 The views obtained from the keyPath must also respect the expected type (UILabel, UIButton or UIImage).
 The parameters are then checked to see if it complies with the minimum requirements of a
 native ad. The requirements of a binder validity can be found at the isValid method.
 
 @param view The view that contains all the subsequent views.
 
 @param tagPropertyMapping A mapping of type <NSString *, NSNumber *>.
 
 @return An instance of a ILMNativeViewBinderBuilder.
 */
- (nonnull instancetype)initWithView:(nonnull UIView *)view
                  tagPropertyMapping:(nonnull NSDictionary <NSString *, NSNumber *> *)tagPropertyMapping;

/**
 @brief Returns if the current instance is valid.
 
 @discussion This method verifies the validity of a binder. In order to be valid, the binder has to
 conform with the following rules:
 1. The container view must not be nil, and an instance of type UIView.
 2. The title label must not be nil, and an instance of type UILabel.
 3. Either the icon imageview or the content imageview must not be nil, and an instance of type UIImageView.
 4. All views that are used to show the ad information must be a descendant of the container view.
 
 @return YES if the instance is valid, NO otherwise.
 */
- (BOOL)isValid;

/**
 @brief Returns an instance of ILMNativeViewBinder if the builder is valid, NIL otherwise.
 @return An instance of ILMNativeViewBinder if the builder is valid, NIL otherwise.
 */
- (nullable ILMNativeViewBinder *)build;

@end
