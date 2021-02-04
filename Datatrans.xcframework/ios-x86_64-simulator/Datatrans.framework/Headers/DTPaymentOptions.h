//
//  DTPaymentOptions.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 06.09.10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
	DTPaymentReturnsCreditCardNever = 1,
	DTPaymentReturnsCreditCardSelectableDefaultNo,
	DTPaymentReturnsCreditCardSelectableDefaultYes,
	DTPaymentReturnsCreditCardAlways
} DTPaymentReturnsCreditCard;

typedef enum {
	DTPaymentCardholderHidden = 0,
	DTPaymentCardholderOptional,
	DTPaymentCardholderRequired
} DTPaymentCardholder;

@class DTApplePayConfig;
@class DTByjunoPaymentInfo;
@class DTSwissBillingPaymentInfo;
@class DTSwissPassPaymentInfo;
@class DTCustomer;

@interface DTPaymentOptions : NSObject <NSCopying>

@property (nonatomic, assign) BOOL testing;
@property (nonatomic, assign) BOOL hideToolbarSecurityInfo;
@property (nonatomic, assign) BOOL showBackButtonOnFirstScreen;
@property (nonatomic, assign) DTPaymentReturnsCreditCard returnsCreditCard;
@property (nonatomic, assign) BOOL returnsAlias;
@property (nonatomic, assign) BOOL displayShippingDetails;
@property (nonatomic, assign) BOOL useWebCreditCardInput;
@property (nonatomic, assign) BOOL useWebELVInput;
@property (nonatomic, copy) NSString* easypayTitle;
@property (nonatomic, copy) NSString* easypayDescription;
@property (nonatomic, copy) NSString* easypayPaymentInfo;
@property (nonatomic, assign) BOOL easypayPresentedAsNATELPay;
@property (nonatomic, assign) BOOL autoSettlement;
@property (nonatomic, assign) BOOL certificatePinning;
@property (nonatomic, assign) DTPaymentCardholder cardholder;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *>* merchantProperties;
@property (nonatomic, copy) NSString* creditCardInputLocalizedDoneButtonTitle;
@property (nonatomic, copy) NSString* language; // ISO 639-1 code (also supports ISO 3166-1 alpha-2 code addon as per Apple spec)
@property (nonatomic, assign) BOOL creditCardScanningEnabled;
@property (nonatomic, copy) DTSwissBillingPaymentInfo* swissBillingPaymentInfo;
@property (nonatomic, copy) NSString* appCallbackScheme;
@property (nonatomic, assign) BOOL suppressTransactionErrorDialog;
@property (nonatomic, copy) NSString* applePayMerchantIdentifier;
@property (nonatomic, copy) DTApplePayConfig* applePayConfig;
@property (nonatomic, assign) BOOL skipAuthorizationCompletion;
@property (nonatomic, copy) DTByjunoPaymentInfo* byjunoPaymentInfo;
@property (nonatomic, copy) DTCustomer* customer;
@property (nonatomic, copy) DTSwissPassPaymentInfo* swissPassPaymentInfo;
@property (nonatomic, copy) NSString* paysafecardMerchantClientId;

@end
