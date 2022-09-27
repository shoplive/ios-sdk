#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SHOPLIVESDK_SWIFT_H
#define SHOPLIVESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ShopLiveSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, ActionType, open) {
  ActionTypePIP = 0,
  ActionTypeKEEP = 1,
  ActionTypeCLOSE = 2,
};



SWIFT_CLASS("_TtC11ShopLiveSDK12CouponResult")
@interface CouponResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK18CustomActionResult")
@interface CustomActionResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







typedef SWIFT_ENUM(NSInteger, ResultAlertType, open) {
  ResultAlertTypeALERT = 0,
  ResultAlertTypeTOAST = 1,
};

typedef SWIFT_ENUM(NSInteger, ResultStatus, open) {
  ResultStatusSHOW = 0,
  ResultStatusHIDE = 1,
  ResultStatusKEEP = 2,
};


SWIFT_CLASS("_TtC11ShopLiveSDK8ShopLive")
@interface ShopLive : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, PlayerMode, open) {
  PlayerModePlay = 0,
  PlayerModePreview = 1,
  PlayerModeNone = 2,
};

typedef SWIFT_ENUM(NSInteger, VideoOrientation, open) {
  VideoOrientationPortrait = 0,
  VideoOrientationLandscape = 1,
  VideoOrientationUnknown = 2,
};


@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, PipPosition, open) {
  PipPositionTopLeft = 0,
  PipPositionTopRight = 1,
  PipPositionBottomLeft = 2,
  PipPositionBottomRight = 3,
  PipPositionDefault = 4,
};

typedef SWIFT_ENUM(NSInteger, PresentationStyle, open) {
  PresentationStyleUnknown = 0,
  PresentationStyleFullScreen = 1,
  PresentationStylePip = 2,
};

@class NSString;
@class UIViewController;
@class UIFont;
@class NSURL;
@class UIWindow;
@class NSNumber;
@class ShopLiveUser;
@class UIColor;
@class WKWebViewConfiguration;
@protocol ShopLiveSDKDelegate;
@class UIImage;

@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
+ (void)setKeepWindowStyleOnReturnFromOsPip:(BOOL)keep;
+ (BOOL)isKeepWindowStyleOnReturnFromOsPip SWIFT_WARN_UNUSED_RESULT;
+ (void)setAppVersion:(NSString * _Nonnull)appVersion;
+ (void)setUsingLocalStorage:(BOOL)use;
+ (void)setPictureInPictureFloatingOffsetWithOffset:(UIEdgeInsets)offset;
+ (void)setPictureInPicturePaddingWithPadding:(UIEdgeInsets)padding;
+ (void)sendCommandMessageWithCommand:(NSString * _Nonnull)command payload:(NSDictionary<NSString *, id> * _Nullable)payload;
+ (void)setMuteWhenPlayStart:(BOOL)mute;
+ (void)setNextActionOnHandleNavigationWithActionType:(enum ActionType)actionType;
+ (enum ActionType)getNextActionTypeOnHandleNavigation SWIFT_WARN_UNUSED_RESULT;
+ (void)setEndpoint:(NSString * _Nullable)url;
+ (BOOL)isSuccessCampaignJoin SWIFT_WARN_UNUSED_RESULT;
+ (void)setKeepAspectOnTabletPortrait:(BOOL)keep;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIViewController * _Nullable viewController;)
+ (UIViewController * _Nullable)viewController SWIFT_WARN_UNUSED_RESULT;
+ (void)close;
+ (void)setChatViewFontWithInputBoxFont:(UIFont * _Nullable)inputBoxFont sendButtonFont:(UIFont * _Nullable)sendButtonFont;
+ (void)setShareScheme:(NSString * _Nullable)scheme custom:(void (^ _Nullable)(void))custom;
+ (void)hookNavigationWithNavigation:(void (^ _Nonnull)(NSURL * _Nonnull))navigation;
+ (void)onTerminated;
+ (void)setKeepPlayVideoOnHeadphoneUnplugged:(BOOL)keepPlay isMute:(BOOL)isMute;
+ (BOOL)isKeepPlayVideoOnHeadPhoneUnplugged SWIFT_WARN_UNUSED_RESULT;
+ (void)setAutoResumeVideoOnCallEnded:(BOOL)autoResume;
+ (BOOL)isAutoResumeVideoOnCallEnded SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersion;)
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum PlayerMode playerMode;)
+ (enum PlayerMode)playerMode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIWindow * _Nullable playerWindow;)
+ (UIWindow * _Nullable)playerWindow SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSNumber * _Nullable fixedPipWidth;)
+ (NSNumber * _Nullable)fixedPipWidth SWIFT_WARN_UNUSED_RESULT;
+ (void)setFixedPipWidth:(NSNumber * _Nullable)newValue;
+ (void)mute;
+ (void)unmute;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum VideoOrientation orientationMode;)
+ (enum VideoOrientation)orientationMode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) ShopLiveUser * _Nullable user;)
+ (ShopLiveUser * _Nullable)user SWIFT_WARN_UNUSED_RESULT;
+ (void)setUser:(ShopLiveUser * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum PresentationStyle style;)
+ (enum PresentationStyle)style SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum PipPosition pipPosition;)
+ (enum PipPosition)pipPosition SWIFT_WARN_UNUSED_RESULT;
+ (void)setPipPosition:(enum PipPosition)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) CGFloat pipScale;)
+ (CGFloat)pipScale SWIFT_WARN_UNUSED_RESULT;
+ (void)setPipScale:(CGFloat)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull indicatorColor;)
+ (UIColor * _Nonnull)indicatorColor SWIFT_WARN_UNUSED_RESULT;
+ (void)setIndicatorColor:(UIColor * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) WKWebViewConfiguration * _Nullable webViewConfiguration;)
+ (WKWebViewConfiguration * _Nullable)webViewConfiguration SWIFT_WARN_UNUSED_RESULT;
+ (void)setWebViewConfiguration:(WKWebViewConfiguration * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <ShopLiveSDKDelegate> _Nullable delegate;)
+ (id <ShopLiveSDKDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <ShopLiveSDKDelegate> _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable authToken;)
+ (NSString * _Nullable)authToken SWIFT_WARN_UNUSED_RESULT;
+ (void)setAuthToken:(NSString * _Nullable)newValue;
+ (void)configureWith:(NSString * _Nonnull)accessKey;
+ (void)previewWith:(NSString * _Nullable)campaignKey completion:(void (^ _Nonnull)(void))completion;
+ (void)playWith:(NSString * _Nullable)campaignKey keepWindowStateOnPlayExecuted:(BOOL)keepWindowStateOnPlayExecuted;
+ (void)startPictureInPictureWith:(enum PipPosition)position scale:(CGFloat)scale;
+ (void)startPictureInPicture;
+ (void)stopPictureInPicture;
+ (void)setLoadingAnimationWithImages:(NSArray<UIImage *> * _Nonnull)images;
+ (void)reloadLive;
@end


SWIFT_CLASS("_TtC11ShopLiveSDK20ShopLiveCouponResult")
@interface ShopLiveCouponResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK26ShopLiveCustomActionResult")
@interface ShopLiveCustomActionResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK11ShopLiveLog")
@interface ShopLiveLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Feature, open) {
  FeatureCLICK = 0,
  FeatureSHOW = 1,
  FeatureACTION = 2,
};

typedef SWIFT_ENUM(NSInteger, ShopLiveResultAlertType, open) {
  ShopLiveResultAlertTypeALERT = 0,
  ShopLiveResultAlertTypeTOAST = 1,
};

typedef SWIFT_ENUM(NSInteger, ShopLiveResultStatus, open) {
  ShopLiveResultStatusSHOW = 0,
  ShopLiveResultStatusHIDE = 1,
  ShopLiveResultStatusKEEP = 2,
};


SWIFT_PROTOCOL("_TtP11ShopLiveSDK19ShopLiveSDKDelegate_")
@protocol ShopLiveSDKDelegate
- (void)handleNavigationWith:(NSURL * _Nonnull)url;
@optional
- (void)handleDownloadCouponResultWith:(NSString * _Nonnull)couponId completion:(void (^ _Nonnull)(CouponResult * _Nonnull))completion SWIFT_DEPRECATED_MSG("use handleDownloadCoupon(with couponId: String, result: @escaping (ShopLiveCouponResult) -> Void) instead");
- (void)handleDownloadCouponWith:(NSString * _Nonnull)couponId result:(void (^ _Nonnull)(ShopLiveCouponResult * _Nonnull))result;
- (void)handleDownloadCouponWith:(NSString * _Nonnull)couponId completion:(void (^ _Nonnull)(void))completion SWIFT_DEPRECATED_MSG("use handleDownloadCoupon(with couponId: String, result: @escaping (ShopLiveCouponResult) -> Void) instead");
- (void)handleCustomActionResultWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload completion:(void (^ _Nonnull)(CustomActionResult * _Nonnull))completion SWIFT_DEPRECATED_MSG("use handleCustomAction(with id: String, type: String, payload: Any?, result: @escaping (ShopLiveCustomActionResult) -> Void) instead");
- (void)handleCustomActionWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload result:(void (^ _Nonnull)(ShopLiveCustomActionResult * _Nonnull))result;
- (void)handleCustomActionWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload completion:(void (^ _Nonnull)(void))completion SWIFT_DEPRECATED_MSG("use handleCustomAction(with id: String, type: String, payload: Any?, result: @escaping (ShopLiveCustomActionResult) -> Void) instead");
@required
- (void)handleChangeCampaignStatusWithStatus:(NSString * _Nonnull)status;
- (void)handleErrorWithCode:(NSString * _Nonnull)code message:(NSString * _Nonnull)message;
- (void)handleCampaignInfoWithCampaignInfo:(NSDictionary<NSString *, id> * _Nonnull)campaignInfo;
- (void)handleCommand:(NSString * _Nonnull)command with:(id _Nullable)payload;
- (void)onSetUserName:(NSDictionary<NSString *, id> * _Nonnull)payload;
- (void)handleReceivedCommand:(NSString * _Nonnull)command with:(id _Nullable)payload;
@optional
- (void)playerPanGestureWithState:(UIGestureRecognizerState)state position:(CGPoint)position;
- (void)logWithName:(NSString * _Nonnull)name feature:(enum Feature)feature campaign:(NSString * _Nonnull)campaign parameter:(NSDictionary<NSString *, NSString *> * _Nonnull)parameter;
@end

enum Gender : NSInteger;

SWIFT_CLASS("_TtC11ShopLiveSDK12ShopLiveUser")
@interface ShopLiveUser : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id name:(NSString * _Nonnull)name gender:(enum Gender)gender age:(NSInteger)age OBJC_DESIGNATED_INITIALIZER;
@end


@interface ShopLiveUser (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, Gender, open) {
  GenderFemale = 1,
  GenderMale = 2,
  GenderNeutral = 3,
  GenderUnknown = 0,
};










@interface UIViewController (SWIFT_EXTENSION(ShopLiveSDK))
- (void)shopliveHideKeyboard;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SHOPLIVESDK_SWIFT_H
#define SHOPLIVESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ShopLiveSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, ActionType, open) {
  ActionTypePIP = 0,
  ActionTypeKEEP = 1,
  ActionTypeCLOSE = 2,
};



SWIFT_CLASS("_TtC11ShopLiveSDK12CouponResult")
@interface CouponResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK18CustomActionResult")
@interface CustomActionResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







typedef SWIFT_ENUM(NSInteger, ResultAlertType, open) {
  ResultAlertTypeALERT = 0,
  ResultAlertTypeTOAST = 1,
};

typedef SWIFT_ENUM(NSInteger, ResultStatus, open) {
  ResultStatusSHOW = 0,
  ResultStatusHIDE = 1,
  ResultStatusKEEP = 2,
};


SWIFT_CLASS("_TtC11ShopLiveSDK8ShopLive")
@interface ShopLive : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, PlayerMode, open) {
  PlayerModePlay = 0,
  PlayerModePreview = 1,
  PlayerModeNone = 2,
};

typedef SWIFT_ENUM(NSInteger, VideoOrientation, open) {
  VideoOrientationPortrait = 0,
  VideoOrientationLandscape = 1,
  VideoOrientationUnknown = 2,
};


@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, PipPosition, open) {
  PipPositionTopLeft = 0,
  PipPositionTopRight = 1,
  PipPositionBottomLeft = 2,
  PipPositionBottomRight = 3,
  PipPositionDefault = 4,
};

typedef SWIFT_ENUM(NSInteger, PresentationStyle, open) {
  PresentationStyleUnknown = 0,
  PresentationStyleFullScreen = 1,
  PresentationStylePip = 2,
};

@class NSString;
@class UIViewController;
@class UIFont;
@class NSURL;
@class UIWindow;
@class NSNumber;
@class ShopLiveUser;
@class UIColor;
@class WKWebViewConfiguration;
@protocol ShopLiveSDKDelegate;
@class UIImage;

@interface ShopLive (SWIFT_EXTENSION(ShopLiveSDK))
+ (void)setKeepWindowStyleOnReturnFromOsPip:(BOOL)keep;
+ (BOOL)isKeepWindowStyleOnReturnFromOsPip SWIFT_WARN_UNUSED_RESULT;
+ (void)setAppVersion:(NSString * _Nonnull)appVersion;
+ (void)setUsingLocalStorage:(BOOL)use;
+ (void)setPictureInPictureFloatingOffsetWithOffset:(UIEdgeInsets)offset;
+ (void)setPictureInPicturePaddingWithPadding:(UIEdgeInsets)padding;
+ (void)sendCommandMessageWithCommand:(NSString * _Nonnull)command payload:(NSDictionary<NSString *, id> * _Nullable)payload;
+ (void)setMuteWhenPlayStart:(BOOL)mute;
+ (void)setNextActionOnHandleNavigationWithActionType:(enum ActionType)actionType;
+ (enum ActionType)getNextActionTypeOnHandleNavigation SWIFT_WARN_UNUSED_RESULT;
+ (void)setEndpoint:(NSString * _Nullable)url;
+ (BOOL)isSuccessCampaignJoin SWIFT_WARN_UNUSED_RESULT;
+ (void)setKeepAspectOnTabletPortrait:(BOOL)keep;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIViewController * _Nullable viewController;)
+ (UIViewController * _Nullable)viewController SWIFT_WARN_UNUSED_RESULT;
+ (void)close;
+ (void)setChatViewFontWithInputBoxFont:(UIFont * _Nullable)inputBoxFont sendButtonFont:(UIFont * _Nullable)sendButtonFont;
+ (void)setShareScheme:(NSString * _Nullable)scheme custom:(void (^ _Nullable)(void))custom;
+ (void)hookNavigationWithNavigation:(void (^ _Nonnull)(NSURL * _Nonnull))navigation;
+ (void)onTerminated;
+ (void)setKeepPlayVideoOnHeadphoneUnplugged:(BOOL)keepPlay isMute:(BOOL)isMute;
+ (BOOL)isKeepPlayVideoOnHeadPhoneUnplugged SWIFT_WARN_UNUSED_RESULT;
+ (void)setAutoResumeVideoOnCallEnded:(BOOL)autoResume;
+ (BOOL)isAutoResumeVideoOnCallEnded SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersion;)
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum PlayerMode playerMode;)
+ (enum PlayerMode)playerMode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIWindow * _Nullable playerWindow;)
+ (UIWindow * _Nullable)playerWindow SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSNumber * _Nullable fixedPipWidth;)
+ (NSNumber * _Nullable)fixedPipWidth SWIFT_WARN_UNUSED_RESULT;
+ (void)setFixedPipWidth:(NSNumber * _Nullable)newValue;
+ (void)mute;
+ (void)unmute;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum VideoOrientation orientationMode;)
+ (enum VideoOrientation)orientationMode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) ShopLiveUser * _Nullable user;)
+ (ShopLiveUser * _Nullable)user SWIFT_WARN_UNUSED_RESULT;
+ (void)setUser:(ShopLiveUser * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum PresentationStyle style;)
+ (enum PresentationStyle)style SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum PipPosition pipPosition;)
+ (enum PipPosition)pipPosition SWIFT_WARN_UNUSED_RESULT;
+ (void)setPipPosition:(enum PipPosition)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) CGFloat pipScale;)
+ (CGFloat)pipScale SWIFT_WARN_UNUSED_RESULT;
+ (void)setPipScale:(CGFloat)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull indicatorColor;)
+ (UIColor * _Nonnull)indicatorColor SWIFT_WARN_UNUSED_RESULT;
+ (void)setIndicatorColor:(UIColor * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) WKWebViewConfiguration * _Nullable webViewConfiguration;)
+ (WKWebViewConfiguration * _Nullable)webViewConfiguration SWIFT_WARN_UNUSED_RESULT;
+ (void)setWebViewConfiguration:(WKWebViewConfiguration * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <ShopLiveSDKDelegate> _Nullable delegate;)
+ (id <ShopLiveSDKDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <ShopLiveSDKDelegate> _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable authToken;)
+ (NSString * _Nullable)authToken SWIFT_WARN_UNUSED_RESULT;
+ (void)setAuthToken:(NSString * _Nullable)newValue;
+ (void)configureWith:(NSString * _Nonnull)accessKey;
+ (void)previewWith:(NSString * _Nullable)campaignKey completion:(void (^ _Nonnull)(void))completion;
+ (void)playWith:(NSString * _Nullable)campaignKey keepWindowStateOnPlayExecuted:(BOOL)keepWindowStateOnPlayExecuted;
+ (void)startPictureInPictureWith:(enum PipPosition)position scale:(CGFloat)scale;
+ (void)startPictureInPicture;
+ (void)stopPictureInPicture;
+ (void)setLoadingAnimationWithImages:(NSArray<UIImage *> * _Nonnull)images;
+ (void)reloadLive;
@end


SWIFT_CLASS("_TtC11ShopLiveSDK20ShopLiveCouponResult")
@interface ShopLiveCouponResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK26ShopLiveCustomActionResult")
@interface ShopLiveCustomActionResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11ShopLiveSDK11ShopLiveLog")
@interface ShopLiveLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Feature, open) {
  FeatureCLICK = 0,
  FeatureSHOW = 1,
  FeatureACTION = 2,
};

typedef SWIFT_ENUM(NSInteger, ShopLiveResultAlertType, open) {
  ShopLiveResultAlertTypeALERT = 0,
  ShopLiveResultAlertTypeTOAST = 1,
};

typedef SWIFT_ENUM(NSInteger, ShopLiveResultStatus, open) {
  ShopLiveResultStatusSHOW = 0,
  ShopLiveResultStatusHIDE = 1,
  ShopLiveResultStatusKEEP = 2,
};


SWIFT_PROTOCOL("_TtP11ShopLiveSDK19ShopLiveSDKDelegate_")
@protocol ShopLiveSDKDelegate
- (void)handleNavigationWith:(NSURL * _Nonnull)url;
@optional
- (void)handleDownloadCouponResultWith:(NSString * _Nonnull)couponId completion:(void (^ _Nonnull)(CouponResult * _Nonnull))completion SWIFT_DEPRECATED_MSG("use handleDownloadCoupon(with couponId: String, result: @escaping (ShopLiveCouponResult) -> Void) instead");
- (void)handleDownloadCouponWith:(NSString * _Nonnull)couponId result:(void (^ _Nonnull)(ShopLiveCouponResult * _Nonnull))result;
- (void)handleDownloadCouponWith:(NSString * _Nonnull)couponId completion:(void (^ _Nonnull)(void))completion SWIFT_DEPRECATED_MSG("use handleDownloadCoupon(with couponId: String, result: @escaping (ShopLiveCouponResult) -> Void) instead");
- (void)handleCustomActionResultWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload completion:(void (^ _Nonnull)(CustomActionResult * _Nonnull))completion SWIFT_DEPRECATED_MSG("use handleCustomAction(with id: String, type: String, payload: Any?, result: @escaping (ShopLiveCustomActionResult) -> Void) instead");
- (void)handleCustomActionWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload result:(void (^ _Nonnull)(ShopLiveCustomActionResult * _Nonnull))result;
- (void)handleCustomActionWith:(NSString * _Nonnull)id type:(NSString * _Nonnull)type payload:(id _Nullable)payload completion:(void (^ _Nonnull)(void))completion SWIFT_DEPRECATED_MSG("use handleCustomAction(with id: String, type: String, payload: Any?, result: @escaping (ShopLiveCustomActionResult) -> Void) instead");
@required
- (void)handleChangeCampaignStatusWithStatus:(NSString * _Nonnull)status;
- (void)handleErrorWithCode:(NSString * _Nonnull)code message:(NSString * _Nonnull)message;
- (void)handleCampaignInfoWithCampaignInfo:(NSDictionary<NSString *, id> * _Nonnull)campaignInfo;
- (void)handleCommand:(NSString * _Nonnull)command with:(id _Nullable)payload;
- (void)onSetUserName:(NSDictionary<NSString *, id> * _Nonnull)payload;
- (void)handleReceivedCommand:(NSString * _Nonnull)command with:(id _Nullable)payload;
@optional
- (void)playerPanGestureWithState:(UIGestureRecognizerState)state position:(CGPoint)position;
- (void)logWithName:(NSString * _Nonnull)name feature:(enum Feature)feature campaign:(NSString * _Nonnull)campaign parameter:(NSDictionary<NSString *, NSString *> * _Nonnull)parameter;
@end

enum Gender : NSInteger;

SWIFT_CLASS("_TtC11ShopLiveSDK12ShopLiveUser")
@interface ShopLiveUser : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id name:(NSString * _Nonnull)name gender:(enum Gender)gender age:(NSInteger)age OBJC_DESIGNATED_INITIALIZER;
@end


@interface ShopLiveUser (SWIFT_EXTENSION(ShopLiveSDK))
@end

typedef SWIFT_ENUM(NSInteger, Gender, open) {
  GenderFemale = 1,
  GenderMale = 2,
  GenderNeutral = 3,
  GenderUnknown = 0,
};










@interface UIViewController (SWIFT_EXTENSION(ShopLiveSDK))
- (void)shopliveHideKeyboard;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
