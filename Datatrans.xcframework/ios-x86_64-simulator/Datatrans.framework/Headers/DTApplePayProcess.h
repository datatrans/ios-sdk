//
//  DTApplePayProcess.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 06.10.20.
//

@class DTErrorHandler;
@class DTNetworking;
@class DTPaymentOptions;
@class DTPaymentRequest;
@protocol DTTransactionModel;

@protocol DTApplePayProcessDelegate <NSObject>

- (void)paymentDidFinish;
- (void)transactionWasCancelled;
- (void)transactionDidFailWithError:(nonnull NSError *)error;

@end

@interface DTApplePayProcess : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithPresentingController:(nonnull UIViewController *)controller networking:(nonnull DTNetworking *)networking errorHandler:(nonnull DTErrorHandler *)errorHandler options:(nonnull DTPaymentOptions *)options delegate:(nonnull id<DTApplePayProcessDelegate>)delegate;

- (void)startWithPaymentRequest:(nonnull DTPaymentRequest *)request paymentModel:(nonnull id<DTTransactionModel>)model;

@end
