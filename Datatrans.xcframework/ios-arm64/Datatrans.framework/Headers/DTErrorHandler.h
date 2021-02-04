//
//  DTErrorHandler.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 02.10.20.
//

@protocol DTErrorHandlerDelegate;
@protocol DTErrorPresenter;
@class DTUrls;

@interface DTErrorHandler : NSObject

- (nonnull instancetype)initWithDelegate:(nonnull id<DTErrorHandlerDelegate>)delegate errorPresenter:(nonnull id<DTErrorPresenter>)errorPresenter urls:(nonnull DTUrls *)urls suppressTransactionErrorDialog:(BOOL)suppressTransactionErrorDialog;

- (void)handleTechnicalError:(nonnull NSError *)error;
- (void)handleTechnicalError:(nonnull NSError *)error retryBlock:(void (^_Nullable)(void))retryBlock;
- (void)handleTechnicalError:(nonnull NSError *)error dismissBlock:(void (^_Nullable)(void))dismissBlock retryBlock:(void (^_Nullable)(void))retryBlock;
- (void)handleWebError:(nonnull NSError *)error isPayment:(BOOL)isPayment;
- (void)showAliasRegistrationError:(nonnull NSError *)error returnAuthorizationError:(BOOL)returnAuthorizationError;
- (void)showAuthenticationError:(nonnull NSError *)error;
- (void)showAuthorizationError:(nonnull NSError *)error;
- (void)showCriticalErrorWithTitle:(nonnull NSString *)title message:(nonnull NSString *)message error:(nonnull NSError *)error;

@end
