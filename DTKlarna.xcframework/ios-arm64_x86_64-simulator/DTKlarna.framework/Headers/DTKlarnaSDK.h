#import <Foundation/Foundation.h>

// The DTKlarna.xcframework exists because weakly linking KlarnaMobileSDK.xcframework
// to Datatrans.xcframework, or any other framework that contains any kind of Swift
// code and supports iOS 13 and older, makes Bitcode recompilation fail when
// KlarnaMobileSDK.xcframework is not distributed alongside the app.
//
// DTKlarna.xcframework has to wrap all required classes/protocols because exposing
// anything from KlarnaMobileSDK.xcframework would require Datatrans.xcframework to
// also link to KlarnaMobileSDK.xcframework.
//
// I did not test if it would be possible to build DTKlarna.xcframework in Swift. This
// might work, because DTKlarna.xcframework strongly (Required instead of Optional)
// links KlarnaMobileSDK.xcframework.
//
// This is the Bitcode recompilation error:
// Undefined symbols for architecture arm64:
//   "__ZN5swift34swift50override_conformsToProtocolEPKNS_14TargetMetadataINS_9InProcessEEEPKNS_24TargetProtocolDescriptorIS1_EEPFPKNS_18TargetWitnessTableIS1_EES4_S8_E", referenced from:
//       _Swift50Overrides in 183.o
//   "__ZN5swift39swift51override_conformsToSwiftProtocolEPKNS_14TargetMetadataINS_9InProcessEEEPKNS_24TargetProtocolDescriptorIS1_EEN7__swift9__runtime4llvm9StringRefEPFPKNS_35TargetProtocolConformanceDescriptorIS1_EES4_S8_SC_E", referenced from:
//       _Swift50Overrides in 183.o
//       _Swift51Overrides in 184.o

@class DTKlarnaPaymentView;
@protocol DTKlarnaPaymentEventListener;

// Matches KlarnaLoggingLevel
typedef NS_ENUM(NSInteger, DTKlarnaLoggingLevel) {
	DTKlarnaLoggingLevelOff = 0,
	DTKlarnaLoggingLevelError = 1,
	DTKlarnaLoggingLevelVerbose = 2
};

// The protocol DTKlarnaSDK exists because touching DTKlarnaSDK.Type would
// cause Bitcode recompilation to fail when a weakly linked DTKlarna.xcframework
// is not distributed alongside the app.
//
// Using DTKlarnaSDKProtocol.Type is ok. This makes it possible to use this
// library directly from Swift when weakly linked.

@protocol DTKlarnaSDK

+ (nonnull DTKlarnaPaymentView *)createKlarnaPaymentViewWithCategory:(nonnull NSString *)category eventListener:(nonnull id<DTKlarnaPaymentEventListener>)eventListener NS_SWIFT_NAME(createKlarnaPaymentView(category:eventListener:));
+ (void)setLoggingLevel:(DTKlarnaLoggingLevel)loggingLevel; 

@end

@interface DTKlarnaSDK : NSObject <DTKlarnaSDK>

@end
