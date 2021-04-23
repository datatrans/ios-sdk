//
//  DTPaymentOptions.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 06.09.10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

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
@property (nonatomic, assign) BOOL returnsAlias;
@property (nonatomic, assign) BOOL displayShippingDetails;
@property (nonatomic, assign) BOOL useWebCreditCardInput;
@property (nonatomic, assign) BOOL useWebELVInput;
@property (nullable, nonatomic, copy) NSString* easypayTitle;
@property (nullable, nonatomic, copy) NSString* easypayDescription;
@property (nullable, nonatomic, copy) NSString* easypayPaymentInfo;
@property (nonatomic, assign) BOOL easypayPresentedAsNATELPay;
@property (nonatomic, assign) BOOL autoSettlement;
@property (nonatomic, assign) BOOL certificatePinning;
@property (nonatomic, assign) DTPaymentCardholder cardholder;
@property (nullable, nonatomic, copy) NSDictionary<NSString *, NSString *>* merchantProperties;
@property (nullable, nonatomic, copy) NSString* creditCardInputLocalizedDoneButtonTitle;
@property (nullable, nonatomic, copy) NSString* language; // ISO 639-1 code (also supports ISO 3166-1 alpha-2 code addon as per Apple spec)
@property (nonatomic, assign) BOOL creditCardScanningEnabled;
@property (nullable, nonatomic, copy) DTSwissBillingPaymentInfo* swissBillingPaymentInfo;
@property (nullable, nonatomic, copy) NSString* appCallbackScheme;
@property (nonatomic, assign) BOOL suppressTransactionErrorDialog;
@property (nullable, nonatomic, copy) NSString* applePayMerchantIdentifier;
@property (nullable, nonatomic, copy) DTApplePayConfig* applePayConfig;
@property (nonatomic, assign) BOOL skipAuthorizationCompletion;
@property (nullable, nonatomic, copy) DTByjunoPaymentInfo* byjunoPaymentInfo;
@property (nullable, nonatomic, copy) DTCustomer* customer;
@property (nullable, nonatomic, copy) DTSwissPassPaymentInfo* swissPassPaymentInfo;
@property (nullable, nonatomic, copy) NSString* paysafecardMerchantClientId;

@end
