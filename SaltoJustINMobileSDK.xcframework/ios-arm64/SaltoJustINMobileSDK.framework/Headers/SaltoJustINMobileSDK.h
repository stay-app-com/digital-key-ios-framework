#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef SALTOJUSTINMOBILESDK_SWIFT_H
#define SALTOJUSTINMOBILESDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
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
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SaltoJustINMobileSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

/// Represents a SALTO digital key that will contain the binary information to communicate securely with
/// a SALTO device and perform the unlocking process.
/// since:
/// v4.0
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK10DigitalKey")
@interface DigitalKey : NSObject
/// Initialize the class with binary data in hexadecimal format.
/// since:
/// v4.0
/// \param hexData Hexadecimal data to initialize the key.
///
- (nullable instancetype)initWithHexData:(NSString * _Nullable)hexData error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
/// Builds the current state of the class into a hexadecimal string.
/// since:
/// v4.0
///
/// returns:
/// Binary data representation of the class in hexadecimal format.
- (NSString * _Nullable)buildHexData:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Parameters provided to identify the unlocking of an access point and return the needed <code>DigitalKey</code>.
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK24DigitalKeyRetrieveParams")
@interface DigitalKeyRetrieveParams : NSObject
/// Installation identifier.
/// since:
/// v4.0
@property (nonatomic, readonly, copy) NSString * _Nullable installationId;
/// Unit identifier.
/// since:
/// v4.0
@property (nonatomic, readonly, copy) NSString * _Nullable unitId;
- (nonnull instancetype)initWithInstallationId:(NSString * _Nullable)installationId unitId:(NSString * _Nullable)unitId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class JustinResult;
@class NSError;
@class UnlockingParams;

/// The SALTO Justin Ble API allows establishing the communication between the mobile phone and the device.
/// It is organized around a singleton, accessible via the <code>sharedInstance</code> property.
/// Through this singleton, you can invoke any of its methods to communicate with a SALTO device.
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK9JustinBle")
@interface JustinBle : NSObject
/// This method provides access to the <code>JustinBle</code> singleton.
/// since:
/// v2.1
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) JustinBle * _Nonnull sharedInstance;)
+ (JustinBle * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Starts the SALTO device discovery and connecting process to perform an access point unlocking operation.
/// This process will first scan all nearby SALTO Bluetooth devices and if it finds one, it will proceed to connect
/// and perform a secure communication protocol. The process will have a <em>maximum timeout of 10 seconds</em>.
/// Once the scanning process finds a SALTO device the <code>DeviceFoundBlock</code> block will be called. This might be
/// useful for user interface purposes. At the same time, the <code>JustinBleManagerKeyRetriever</code> block will be
/// executed to obtain a suitable key for the unlocking operation.
/// If the secure process finishes correctly <code>SuccessBlock</code> will return an authentication operation result code
/// defined in the documentation.
/// However, if there is any error in the process <code>ErrorBlock</code> will be called returning a
/// <code>NSError</code> with a specific code. Take a look at our documentation to see the specific error code values.
/// \code
/// JustinBle.sharedInstance.startUnlocking(
///     digitalKeyBlock: { params in
///        // Do key retrieval operations
///     }, deviceFound: {
///        // Do device found UI actions.
///     }, success: { result in
///        // Do actions when the process succeed.
///     }, failure: { error in
///        // Do actions when an error occurred.
///     }, params: UnlockingParams(unlockingMode: .standard,
///                                technologyVersion: .v1))
///
/// \endcode<em>Note:</em> All callbacks will be executed in the <em>main thread</em>.
/// since:
/// v4.0
/// \param digitalKeyBlock Block to obtain the latest digital key to unlock the access point.
///
/// \param deviceFound When a SALTO device is found, this block will be called.
///
/// \param success When the process finishes successfully this block will be called.
///
/// \param failure When any error is found during the unlocking process this error block will be called.
///
/// \param params Specify custom device unlocking parameters.
///
- (void)startUnlockingWithDigitalKeyBlock:(DigitalKey * _Nullable (^ _Nonnull)(DigitalKeyRetrieveParams * _Nonnull))digitalKeyBlock deviceFound:(void (^ _Nullable)(void))deviceFound success:(void (^ _Nullable)(JustinResult * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure params:(UnlockingParams * _Nullable)params;
@end


/// The list of SALTO error codes.
/// since:
/// v1.0
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK15JustinErrorCode")
@interface JustinErrorCode : NSObject
/// A general error has occurred.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger connectionGeneralError;)
+ (NSInteger)connectionGeneralError SWIFT_WARN_UNUSED_RESULT;
/// The process is already running and until it finishes no more processes can be executed simultaneously.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger processAlreadyRunningError;)
+ (NSInteger)processAlreadyRunningError SWIFT_WARN_UNUSED_RESULT;
/// The provided binary information to the digital key is not valid.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger incorrectDigitalKeyDataError;)
+ (NSInteger)incorrectDigitalKeyDataError SWIFT_WARN_UNUSED_RESULT;
/// Bluetooth is not supported by the device.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger bluetoothNotSupportedError;)
+ (NSInteger)bluetoothNotSupportedError SWIFT_WARN_UNUSED_RESULT;
/// Bluetooth feature is not enabled.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger bluetoothFeatureNotEnabledError;)
+ (NSInteger)bluetoothFeatureNotEnabledError SWIFT_WARN_UNUSED_RESULT;
/// Bluetooth is not initialized already.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger bluetoothNotInitializedError;)
+ (NSInteger)bluetoothNotInitializedError SWIFT_WARN_UNUSED_RESULT;
/// GATT (Generic Attribute Profile) server disconnected.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger disconnectedGattServerError;)
+ (NSInteger)disconnectedGattServerError SWIFT_WARN_UNUSED_RESULT;
/// The operation has been cancelled.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger operationCancelledError;)
+ (NSInteger)operationCancelledError SWIFT_WARN_UNUSED_RESULT;
/// The search of services has returned zero results.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger noServicesFoundError;)
+ (NSInteger)noServicesFoundError SWIFT_WARN_UNUSED_RESULT;
/// Timeout has been reached.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger timeoutReachedError;)
+ (NSInteger)timeoutReachedError SWIFT_WARN_UNUSED_RESULT;
/// Invalid characteristics found in the service.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger invalidServiceCharacteristicsError;)
+ (NSInteger)invalidServiceCharacteristicsError SWIFT_WARN_UNUSED_RESULT;
/// The device has returned a protocol version that the current SDK version is not compatible with.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger invalidProtocolVersionError;)
+ (NSInteger)invalidProtocolVersionError SWIFT_WARN_UNUSED_RESULT;
/// Invalid data received in the secure protocol process.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger invalidDataReceivedError;)
+ (NSInteger)invalidDataReceivedError SWIFT_WARN_UNUSED_RESULT;
/// There has been an authentication error between the mobile phone and the device.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger authenticationFailedError;)
+ (NSInteger)authenticationFailedError SWIFT_WARN_UNUSED_RESULT;
/// Bluetooth feature is not authorized for this application.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger bluetoothNotAuthorizedError;)
+ (NSInteger)bluetoothNotAuthorizedError SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Represents the result of a successfully completed unlocking operation.
/// since:
/// v2.3
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK12JustinResult")
@interface JustinResult : NSObject
- (nonnull instancetype)initWithOpResult:(NSInteger)opResult events:(NSString * _Nullable)events OBJC_DESIGNATED_INITIALIZER;
/// Authentication operation result.
/// since:
/// v2.3
///
/// returns:
/// Result code. One of <code>OpResult</code> codes.
- (NSInteger)getOpResult SWIFT_WARN_UNUSED_RESULT;
/// Retrieves string of audit trail events.
/// since:
/// v2.3
///
/// returns:
/// String of audit trail events. Might be nil if there are no events.
- (NSString * _Nullable)getAuditTrailEvents SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum OpResultGroup : NSInteger;

SWIFT_CLASS("_TtC20SaltoJustINMobileSDK8OpResult")
@interface OpResult : NSObject
/// Successful authentication but no information about the operation result.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char unknown;)
+ (unsigned char)unknown SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and access granted (access point unlocked).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char accessGranted;)
+ (unsigned char)accessGranted SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and access point unlocked with office mode set.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char accessPointInOffice;)
+ (unsigned char)accessPointInOffice SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and access point locked with office mode removed.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char accessPointEndOffice;)
+ (unsigned char)accessPointEndOffice SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and opening roller.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char openingRoller;)
+ (unsigned char)openingRoller SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and closing roller.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char closingRoller;)
+ (unsigned char)closingRoller SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and stop roller.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char stopRoller;)
+ (unsigned char)stopRoller SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and waiting for a second valid key for unlocking.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char waitSecondCard;)
+ (unsigned char)waitSecondCard SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, key data was processed successfully. Doesn’t imply any further outcome.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char keyProcessed;)
+ (unsigned char)keyProcessed SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication and access rejected.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char accessRejected;)
+ (unsigned char)accessRejected SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected, PIN required. Introduce PIN before key.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char pinRequired;)
+ (unsigned char)pinRequired SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected and key should be depublic static leted.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char cancelledKey;)
+ (unsigned char)cancelledKey SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected, privacy.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char privacyRejection;)
+ (unsigned char)privacyRejection SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected, lockdown
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char lockDownRejection;)
+ (unsigned char)lockDownRejection SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected, low battery.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char lowBatteryRejection;)
+ (unsigned char)lowBatteryRejection SWIFT_WARN_UNUSED_RESULT;
/// Successful authentication, access rejected, fingerprint required. Input fingerprint before key.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) unsigned char fingerRequired;)
+ (unsigned char)fingerRequired SWIFT_WARN_UNUSED_RESULT;
/// Get group of the given operation result code.
/// since:
/// v2.1
/// \param opResult Operation result code.
///
///
/// returns:
/// Group of the given operation result.
+ (enum OpResultGroup)getGroup:(NSInteger)opResult SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// General groupings to be used whenever we can’t match a specific <code>OpResult</code>.
/// since:
/// v2.1
typedef SWIFT_ENUM(NSInteger, OpResultGroup, open) {
  OpResultGroupUnknown = 0,
  OpResultGroupFailure = 1,
  OpResultGroupAccepted = 2,
  OpResultGroupRejected = 3,
};

/// Version of the JustIN Mobile technology.
/// since:
/// v4.0
typedef SWIFT_ENUM(NSInteger, TechnologyVersion, open) {
/// First version of the JustIN Mobile technology where devices have to be waken up.
  TechnologyVersionV1 = 0,
/// Second version of the JustIN Mobile technology where devices are already waken up.
  TechnologyVersionV2 = 1,
};

/// Defines the unlocking mode with the access point.
/// since:
/// v4.0
typedef SWIFT_ENUM(NSInteger, UnlockingMode, open) {
/// The access point will only unlock if you use an authorized key.
  UnlockingModeStandard = 0,
/// If both the user and the access point are set to support office mode and the user is authorized to
/// gain access to the access point, it will be unlocked for any user who wishes to gain access.
  UnlockingModeOffice = 1,
};


/// Access point unlocking params.
SWIFT_CLASS("_TtC20SaltoJustINMobileSDK15UnlockingParams")
@interface UnlockingParams : NSObject
/// The unlocking mode for the access point. Check <code>UnlockingParams</code> for available values.
/// since:
/// v4.0
@property (nonatomic) enum UnlockingMode unlockingMode;
/// The version of the JustIN Mobile technology. Check <code>TechnologyVersion</code> for available values.
/// since:
/// v4.0
@property (nonatomic) enum TechnologyVersion technologyVersion;
/// Returns an <code>UnlockingParams</code> object initialized by copying the values from the unlocking mode.
/// since:
/// v4.0
/// \param unlockingMode Defines an unlocking mode. Check <code>UnlockingParams</code> for available values.
///
/// \param technologyVersion The version of the JustIN Mobile technology.
/// Check <code>TechnologyVersion</code> for available values.
///
- (nonnull instancetype)initWithUnlockingMode:(enum UnlockingMode)unlockingMode technologyVersion:(enum TechnologyVersion)technologyVersion OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
