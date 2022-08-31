#import <UIKit/UIKit.h>

@class DTKlarnaPaymentView;
@class DTKlarnaPaymentError;

@protocol DTKlarnaPaymentEventListener // Matches KlarnaPaymentEventListener
- (void)klarnaInitializedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView NS_SWIFT_NAME(klarnaInitialized(paymentView:));
- (void)klarnaLoadedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView NS_SWIFT_NAME(klarnaLoaded(paymentView:));
- (void)klarnaLoadedPaymentReviewWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView NS_SWIFT_NAME(klarnaLoadedPaymentReview(paymentView:));
- (void)klarnaAuthorizedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView approved:(BOOL)approved authToken:(NSString * _Nullable)authToken finalizeRequired:(BOOL)finalizeRequired NS_SWIFT_NAME(klarnaAuthorized(paymentView:approved:authToken:finalizeRequired:));
- (void)klarnaReauthorizedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView approved:(BOOL)approved authToken:(NSString * _Nullable)authToken NS_SWIFT_NAME(klarnaReauthorized(paymentView:approved:authToken:));
- (void)klarnaFinalizedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView approved:(BOOL)approved authToken:(NSString * _Nullable)authToken NS_SWIFT_NAME(klarnaFinalized(paymentView:approved:authToken:));
- (void)klarnaResizedWithPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView to:(CGFloat)newHeight NS_SWIFT_NAME(klarnaResized(paymentView:to:));
- (void)klarnaFailedInPaymentView:(DTKlarnaPaymentView * _Nonnull)paymentView withError:(DTKlarnaPaymentError * _Nonnull)error NS_SWIFT_NAME(klarnaFailed(inPaymentView:withError:));
@end

@interface DTKlarnaPaymentView : UIView
- (nonnull instancetype)initWithCategory:(NSString * _Nonnull)category eventListener:(id <DTKlarnaPaymentEventListener> _Nonnull)eventListener NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(nonnull NSCoder *)coder NS_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (void)authorize;
- (void)initializeWithClientToken:(NSString * _Nonnull)clientToken returnUrl:(NSURL * _Nonnull)returnUrl NS_SWIFT_NAME(initialize(clientToken:returnUrl:));
- (void)load;
@end
