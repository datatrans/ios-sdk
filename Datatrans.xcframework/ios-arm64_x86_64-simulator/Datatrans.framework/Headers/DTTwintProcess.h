//
//  DTTwintProcess.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 29.09.20.
//

@class DTAliasRequest;
@class DTErrorHandler;
@class DTNetworking;
@class DTPaymentRequest;
@protocol DTLockScreenPresenter;
@protocol DTTransactionModel;

@protocol DTTwintProcessDelegate <NSObject>

- (void)aliasRegistrationDidFinish;
- (void)paymentDidFinish;
- (void)transactionWasCancelled;

@end

@interface DTTwintProcess : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithPresentingController:(nonnull UIViewController *)controller networking:(nonnull DTNetworking *)networking errorHandler:(nonnull DTErrorHandler *)errorHandler loaderPresenter:(nonnull id<DTLoaderPresenter>)loaderPresenter lockScreenPresenter:(nonnull id<DTLockScreenPresenter>)lockScreenPresenter askToRetry:(BOOL)askToRetry options:(nonnull DTPaymentOptions *)options delegate:(nonnull id<DTTwintProcessDelegate>)delegate;

- (void)startWithPaymentRequest:(nonnull DTPaymentRequest *)request paymentModel:(nonnull id<DTTransactionModel>)model;
- (void)startWithAliasRequest:(nonnull DTAliasRequest *)aliasRequest paymentModel:(nonnull id<DTTransactionModel>)model;

@end
