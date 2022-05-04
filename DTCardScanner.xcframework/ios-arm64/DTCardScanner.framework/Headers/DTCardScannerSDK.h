#import <Foundation/Foundation.h>

@class CardIOView;

// The protocol DTCardScannerSDK exists because touching DTCardScannerSDK.Type would
// cause Bitcode recompilation to fail when a weakly linked DTCardScanner.xcframework
// is not distributed alongside the app.
//
// Using DTCardScannerSDKProtocol.Type is ok. This makes it possible to use this
// library directly from Swift when weakly linked.

@protocol DTCardScannerSDK

+ (nullable CardIOView *)createCardIOView; // Nil on Simulator
+ (BOOL)hasCardIO; // NO on Simulator
+ (void)preloadCardIO; // Does nothing on Simulator

@end

@interface DTCardScannerSDK : NSObject <DTCardScannerSDK>

@end
