#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef HYPERKYC_SWIFT_H
#define HYPERKYC_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import CoreGraphics;
@import MaterialComponents;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HyperKYC",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;

SWIFT_CLASS("_TtC8HyperKYC17AdaptiveStackView")
@interface AdaptiveStackView : UIStackView
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC26AddImageCollectionViewCell")
@interface AddImageCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end

enum CheckmarkStyle : NSInteger;
enum BorderStyle : NSInteger;
@class UIColor;
@class NSString;
@class UIEvent;

/// Checkbox is a simple, animation free checkbox and UISwitch alternative designed
/// to be performant and easy to implement.
IB_DESIGNABLE
SWIFT_CLASS("_TtC8HyperKYC8Checkbox")
@interface Checkbox : UIControl
/// Shape of the center checkmark that appears when <code>Checkbox.isChecked == true</code>.
/// <em>Default:</em> <code>CheckmarkStyle.square</code>
@property (nonatomic) enum CheckmarkStyle checkmarkStyle;
/// Shape of the outside border containing the checkmarks contents.
/// Used as a visual indication of where the user can tap.
/// <em>Default:</em> <code>BorderStyle.square</code>
@property (nonatomic) enum BorderStyle borderStyle;
/// Width of the borders stroke.
/// <em>NOTE</em>
/// Diagonal/rounded lines tend to appear thicker, so border styles
/// that use these (.circle) have had their border widths halved to compensate
/// in order appear similar next to other border styles.
/// <em>Default:</em> <code>2</code>
@property (nonatomic) IBInspectable CGFloat borderLineWidth;
/// Size of the center checkmark element.
/// Drawn as a percentage of the size of the Checkbox’s draw rect.
/// <em>Default:</em> <code>0.5</code>
@property (nonatomic) IBInspectable CGFloat checkmarkSize;
/// The checboxes border color in its unchecked state.
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified uncheckedBorderColor;
/// The checboxes border color in its checked state.
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified checkedBorderColor;
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified checkmarkColor;
/// <em>Default:</em> Replaces the checkmark style with an emoji.
@property (nonatomic, copy) IBInspectable NSString * _Nullable emoji;
/// The checkboxes fill color.
/// <em>Default:</em> <code>UIColoe.Clear</code>
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull checkboxClearColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull checkboxFillColor;
/// Sets the corner radius for the checkbox border.
/// <em>Default:</em> <code>0.0</code>
/// note:
/// Only applies to checkboxes with <code>BorderStyle.square</code>
@property (nonatomic) IBInspectable CGFloat borderCornerRadius;
/// Increases the controls touch area.
/// Checkbox’s tend to be smaller than regular UIButton elements
/// and in some cases making them difficult to interact with.
/// This property helps with that.
/// <em>Default:</em> <code>5</code>
@property (nonatomic) IBInspectable CGFloat increasedTouchRadius;
/// Indicates whether the checkbox is currently in a state of being
/// checked or not.
@property (nonatomic) IBInspectable BOOL isChecked;
/// Determines if tapping the checkbox generates haptic feedback to the user.
/// <em>Default:</em> <code>true</code>
@property (nonatomic) IBInspectable BOOL useHapticFeedback;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end

/// Shape of the center checkmark that appears when <code>Checkbox.isChecked == true</code>.
typedef SWIFT_ENUM(NSInteger, CheckmarkStyle, open) {
/// ■
  CheckmarkStyleSquare = 0,
/// ●
  CheckmarkStyleCircle = 1,
/// ╳
  CheckmarkStyleCross = 2,
/// ✓
  CheckmarkStyleTick = 3,
};

/// Shape of the outside box containing the checkmarks contents.
/// Used as a visual indication of where the user can tap.
typedef SWIFT_ENUM(NSInteger, BorderStyle, open) {
/// ▢
  BorderStyleSquare = 0,
/// ◯
  BorderStyleCircle = 1,
};


/// A control for the inputting of month and year values in a view that uses a spinning-wheel or slot-machine metaphor.
SWIFT_CLASS("_TtC8HyperKYC16CustomDatePicker")
@interface CustomDatePicker : UIPickerView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSAttributedString;

@interface CustomDatePicker (SWIFT_EXTENSION(HyperKYC)) <UIPickerViewDataSource, UIPickerViewDelegate>
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (NSAttributedString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView attributedTitleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
@end







SWIFT_CLASS("_TtC8HyperKYC11DividerView")
@interface DividerView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC21DocCollectionViewCell")
@interface DocCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC14DottedLineView")
@interface DottedLineView : UIView
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;

SWIFT_CLASS("_TtC8HyperKYC12DropDownCell")
@interface DropDownCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified optionLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface DropDownCell (SWIFT_EXTENSION(HyperKYC))
- (void)awakeFromNib;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
@end




SWIFT_CLASS("_TtC8HyperKYC21HKYCActivityIndicator")
@interface HKYCActivityIndicator : UIActivityIndicatorView
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setStyle:(UIActivityIndicatorViewStyle)style;
+ (void)setColor:(UIColor * _Nonnull)color;
- (nonnull instancetype)initWithActivityIndicatorStyle:(UIActivityIndicatorViewStyle)style SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC17HKYCActivityLabel")
@interface HKYCActivityLabel : UILabel
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC22HKYCActivityTitleLabel")
@interface HKYCActivityTitleLabel : UILabel
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC16HKYCAddImageCard")
@interface HKYCAddImageCard : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
@end

@class UIImage;

SWIFT_CLASS("_TtC8HyperKYC23HKYCBackgroundImageView")
@interface HKYCBackgroundImageView : UIImageView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC14HKYCBlockLabel")
@interface HKYCBlockLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC18HKYCBrandingLayout")
@interface HKYCBrandingLayout : UIStackView
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)showBrandingWithShow:(BOOL)show;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC17HKYCBundleLocator")
@interface HKYCBundleLocator : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC12HKYCCardView")
@interface HKYCCardView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC12HKYCCheckBox")
@interface HKYCCheckBox : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC8HKYCChip")
@interface HKYCChip : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC14HKYCChipButton")
@interface HKYCChipButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC23HKYCClientLogoImageView")
@interface HKYCClientLogoImageView : UIImageView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIFont;

SWIFT_CLASS("_TtC8HyperKYC20HKYCDescriptionLabel")
@interface HKYCDescriptionLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setFont:(UIFont * _Nonnull)font;
+ (void)setTextAlignment:(NSTextAlignment)alignment;
+ (void)setTextColor:(UIColor * _Nonnull)color;
+ (void)setShadowColor:(UIColor * _Nonnull)color;
+ (void)setShadowOffset:(CGSize)offset;
@end


SWIFT_CLASS("_TtC8HyperKYC17HKYCDocHolderCard")
@interface HKYCDocHolderCard : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC21HKYCErrorMessageLabel")
@interface HKYCErrorMessageLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setFont:(UIFont * _Nonnull)font;
+ (void)setTextColor:(UIColor * _Nonnull)color;
+ (void)setShadowColor:(UIColor * _Nonnull)color;
+ (void)setShadowOffset:(CGSize)offset;
@end


SWIFT_CLASS("_TtC8HyperKYC17HKYCFileStackView")
@interface HKYCFileStackView : UIStackView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC13HKYCHintLabel")
@interface HKYCHintLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC26HKYCListCollectionViewCell")
@interface HKYCListCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC16HKYCNFCItemLabel")
@interface HKYCNFCItemLabel : UILabel
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC14HKYCPickerView")
@interface HKYCPickerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setBorderColor:(CGColorRef _Nonnull)color;
+ (void)setBackgroundColor:(CGColorRef _Nonnull)color;
+ (void)setBorderWidth:(CGFloat)width;
+ (void)setTitleShadowOffset:(CGSize)offset;
+ (void)setTitleFont:(UIFont * _Nonnull)font;
@end


SWIFT_CLASS("_TtC8HyperKYC17HKYCPrimaryButton")
@interface HKYCPrimaryButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setBorderColor:(CGColorRef _Nonnull)color;
+ (void)setBackgroundColor:(CGColorRef _Nonnull)color;
+ (void)setBorderWidth:(CGFloat)width;
+ (void)setTitleColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowOffset:(CGSize)offset;
+ (void)setTitleFont:(UIFont * _Nonnull)font;
@end


@interface HKYCPrimaryButton (SWIFT_EXTENSION(HyperKYC))
@property (nonatomic, getter=isEnabled) BOOL enabled;
@end


SWIFT_CLASS("_TtC8HyperKYC9HKYCRadio")
@interface HKYCRadio : UIStackView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC14HKYCRecordView")
@interface HKYCRecordView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC22HKYCRetakeMessageLabel")
@interface HKYCRetakeMessageLabel : UILabel
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setFont:(UIFont * _Nonnull)font;
+ (void)setTextAlignment:(NSTextAlignment)alignment;
+ (void)setTextColor:(UIColor * _Nonnull)color;
+ (void)setShadowColor:(UIColor * _Nonnull)color;
+ (void)setShadowOffset:(CGSize)offset;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC19HKYCSecondaryButton")
@interface HKYCSecondaryButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setBorderColor:(CGColorRef _Nonnull)color;
+ (void)setBackgroundColor:(CGColorRef _Nonnull)color;
+ (void)setBorderWidth:(CGFloat)width;
+ (void)setTitleColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowOffset:(CGSize)offset;
+ (void)setTitleFont:(UIFont * _Nonnull)font;
@end


SWIFT_CLASS("_TtC8HyperKYC19HKYCSignatureHelper")
@interface HKYCSignatureHelper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC15HKYCStatusLabel")
@interface HKYCStatusLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawTextInRect:(CGRect)rect;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end


SWIFT_CLASS("_TtC8HyperKYC18HKYCTertiaryButton")
@interface HKYCTertiaryButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setBorderColor:(CGColorRef _Nonnull)color;
+ (void)setBackgroundColor:(CGColorRef _Nonnull)color;
+ (void)setBorderWidth:(CGFloat)width;
+ (void)setTitleColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowColor:(UIColor * _Nullable)color for:(UIControlState)state;
+ (void)setTitleShadowOffset:(CGSize)offset;
+ (void)setTitleFont:(UIFont * _Nonnull)font;
@end


SWIFT_CLASS("_TtC8HyperKYC14HKYCTitleLabel")
@interface HKYCTitleLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setFont:(UIFont * _Nonnull)font;
+ (void)setTextAlignment:(NSTextAlignment)alignment;
+ (void)setTextColor:(UIColor * _Nonnull)color;
+ (void)setShadowColor:(UIColor * _Nonnull)color;
+ (void)setShadowOffset:(CGSize)offset;
@end


SWIFT_CLASS("_TtC8HyperKYC27HKYCVideoStatementDescLabel")
@interface HKYCVideoStatementDescLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC29HKYCVideoStatementHelperLabel")
@interface HKYCVideoStatementHelperLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
+ (void)setFont:(UIFont * _Nonnull)font;
+ (void)setTextAlignment:(NSTextAlignment)alignment;
+ (void)setTextColor:(UIColor * _Nonnull)color;
+ (void)setShadowColor:(UIColor * _Nonnull)color;
+ (void)setShadowOffset:(CGSize)offset;
@end


SWIFT_CLASS("_TtC8HyperKYC28HKYCVideoStatementTitleLabel")
@interface HKYCVideoStatementTitleLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC22HKYCVideoStatementView")
@interface HKYCVideoStatementView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC11HVCamConfig")
@interface HVCamConfig : NSObject
@property (nonatomic) BOOL useBackCamera;
@property (nonatomic) BOOL enableLookStraight;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC8HyperKYC8HintView")
@interface HintView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIViewController;
@class HyperKycConfig;
@class HyperKycResult;

SWIFT_CLASS("_TtC8HyperKYC8HyperKyc")
@interface HyperKyc : NSObject
/// Prefetches UI configuration for the given <code>appId</code> and <code>workflowId</code>.
/// \param appId The ID of the application.
///
/// \param workflowId The ID of the workflow.
///
+ (void)prefetchWithAppId:(NSString * _Nonnull)appId workflowId:(NSString * _Nonnull)workflowId;
+ (void)launch:(UIViewController * _Nonnull)callingVC hyperKycConfig:(HyperKycConfig * _Nonnull)hyperKycConfig :(void (^ _Nonnull)(HyperKycResult * _Nonnull))completionHandler;
+ (NSString * _Nonnull)createUniqueId SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC14HyperKycConfig")
@interface HyperKycConfig : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8HyperKYC12HyperKycData")
@interface HyperKycData : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8HyperKYC13HyperKycError")
@interface HyperKycError : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8HyperKYC14HyperKycResult")
@interface HyperKycResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8HyperKYC24KeyboardLayoutConstraint")
@interface KeyboardLayoutConstraint : NSLayoutConstraint
- (void)awakeFromNib;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HyperKYC10LoaderView")
@interface LoaderView : UIView
/// The color of the empty progress track (gets drawn over)
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull trackTintColor;
/// The color of the progress bar
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull progressTintColor;
/// The color the notched out circle within the progress area (if there is one)
@property (nonatomic, strong) IBInspectable UIColor * _Nullable innerTintColor;
/// Sets whether or not the corners of the progress bar should be rounded
@property (nonatomic) IBInspectable BOOL roundedCorners;
/// Sets how thick the progress bar should be (pinned between <code>0.01</code> and <code>1</code>)
@property (nonatomic) IBInspectable CGFloat thicknessRatio;
/// Sets whether or not the animation should be clockwise
@property (nonatomic) IBInspectable BOOL clockwiseProgress;
/// Getter for the current progress (not observed from any active animations)
@property (nonatomic, readonly) IBInspectable CGFloat progress;
/// Sets how much of the progress bar should be filled during an indeterminate animation, pinned between <code>0.05</code> and <code>0.9</code>
/// <em>Note:</em> This can be overriden / animated from by using updateProgress(…)
@property (nonatomic) IBInspectable CGFloat indeterminateProgress;
/// Controls the speed at which the indeterminate progress bar animates
@property (nonatomic) IBInspectable CFTimeInterval indeterminateDuration;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
/// Default initializer for the class
///
/// returns:
/// A configured instance of self
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToWindow;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



@interface MDCOutlinedTextField (SWIFT_EXTENSION(HyperKYC))
/// Overrides the default behavior to determine whether a specific action can be performed on the text field.
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
@end






SWIFT_CLASS("_TtC8HyperKYC12PaddingLabel")
@interface PaddingLabel : UILabel
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)drawTextInRect:(CGRect)rect;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8HyperKYC10PickedFile")
@interface PickedFile : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC8HyperKYC11RadioButton")
@interface RadioButton : UIButton
@property (nonatomic) IBInspectable CGFloat iconSize;
@property (nonatomic) IBInspectable CGFloat indicatorSize;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable borderColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable fillColor;
@property (nonatomic) IBInspectable CGFloat borderStrokeWidth;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable indicatorColor;
@property (nonatomic) IBInspectable CGFloat marginWidth;
@property (nonatomic) IBInspectable BOOL iconSquare;
@property (nonatomic, strong) IBInspectable UIImage * _Null_unspecified icon;
@property (nonatomic, strong) IBInspectable UIImage * _Null_unspecified iconSelected;
@property (nonatomic, strong) IBInspectable UIImage * _Nonnull setIcon;
@property (nonatomic, strong) IBInspectable UIImage * _Nonnull setIconSelected;
- (void)prepareForInterfaceBuilder;
@property (nonatomic, getter=isSelected) BOOL selected;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (void)drawRect:(CGRect)rect;
@end


SWIFT_CLASS("_TtC8HyperKYC17ResumeFileHandler")
@interface ResumeFileHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIBarButtonItem (SWIFT_EXTENSION(HyperKYC))
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end












@interface UINavigationController (SWIFT_EXTENSION(HyperKYC))
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic) CGSize preferredContentSize;
@end



SWIFT_CLASS("_TtC8HyperKYC11UIUtilities")
@interface UIUtilities : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





@interface UIView (SWIFT_EXTENSION(HyperKYC))
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end





SWIFT_CLASS("_TtC8HyperKYC21WorkFlowStateDelegate")
@interface WorkFlowStateDelegate : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
