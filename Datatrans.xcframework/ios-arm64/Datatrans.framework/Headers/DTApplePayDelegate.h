//
//  DTApplePayDelegate.h
//
//  DTApplePayDelegate methods can be implemented to customize Apple Pay payments. All methods are optional.
//

#import <PassKit/PassKit.h>


@protocol DTApplePayDelegate <NSObject>

@optional

// Sent when the user has authorized a payment and before the authorization is sent to acquirers. The information
// passed corresponds to what has been requested in PKPaymentRequest.
//
// The delegate should send this information to their backend in order to link it with the transaction once it is
// complete and the webhook is received. Note that the transaction can still fail after this call.
//
// The delegate must invoke the completion block after processing the information. If the delegate completes with
// an error, the process is aborted and the error is sent to the TransactionDelegate (transactionDidFail) as
// underlying error. The Apple Pay flow is not continued until the completion block is invoked.
- (void)userDidAuthorizePaymentWithBillingContact:(PKContact *)billingContact
								  shippingContact:(PKContact *)shippingContact
								   shippingMethod:(PKShippingMethod *)shippingMethod
									   completion:(void (^)(BOOL isSuccess, NSError *error))completion;

#pragma mark -
// All methods below have been copied verbatim from PKPaymentAuthorizationViewControllerDelegate. Please refer to
// the official Apple Pay developer documentation for more information.

- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)controller
					   didChangeCouponCode:(NSString *)couponCode
								   handler:(void (^)(PKPaymentRequestCouponCodeUpdate *update))completion API_AVAILABLE(macos(12.0), ios(15.0)) API_UNAVAILABLE(watchos);

// Sent when the user has selected a new shipping method.  The delegate should determine
// shipping costs based on the shipping method and either the shipping address supplied in the original
// PKPaymentRequest or the address fragment provided by the last call to paymentAuthorizationViewController:
// didSelectShippingAddress:completion:.
//
// The delegate must invoke the completion block with an updated array of PKPaymentSummaryItem objects.
//
// The delegate will receive no further callbacks except paymentAuthorizationViewControllerDidFinish:
// until it has invoked the completion block.
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)controller
				   didSelectShippingMethod:(PKShippingMethod *)shippingMethod
								   handler:(void (^)(PKPaymentRequestShippingMethodUpdate *update))completion API_AVAILABLE(macos(11.0), ios(11.0), watchos(4.0));

// Sent when the user has selected a new shipping address.  The delegate should inspect the
// address and must invoke the completion block with an updated array of PKPaymentSummaryItem objects.
//
// The delegate will receive no further callbacks except paymentAuthorizationViewControllerDidFinish:
// until it has invoked the completion block.

- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)controller
				  didSelectShippingContact:(PKContact *)contact
								   handler:(void (^)(PKPaymentRequestShippingContactUpdate *update))completion API_AVAILABLE(macos(11.0), ios(11.0), watchos(4.0));

// Sent when the user has selected a new payment card.  Use this delegate callback if you need to
// update the summary items in response to the card type changing (for example, applying credit card surcharges)
//
// The delegate will receive no further callbacks except paymentAuthorizationViewControllerDidFinish:
// until it has invoked the completion block.

- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)controller
					didSelectPaymentMethod:(PKPaymentMethod *)paymentMethod
								   handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *update))completion API_AVAILABLE(macos(11.0), ios(11.0), watchos(4.0));

@end
