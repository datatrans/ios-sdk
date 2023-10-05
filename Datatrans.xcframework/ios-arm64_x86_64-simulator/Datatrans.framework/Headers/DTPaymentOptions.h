//
//  DTPaymentOptions.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 06.09.10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTApplePayConfig;
@class DTBoncardConfig;
@class DTByjunoPaymentInfo;
@class DTKlarnaPaymentInfo;
@class DTSwissBillingPaymentInfo;
@class DTSwissPassPaymentInfo;
@class DTCustomer;
@class DTPaycardPaymentInfo;

@interface DTPaymentOptions : NSObject <NSCopying>

@property (nonatomic, assign) BOOL testing;
@property (nonatomic, assign) BOOL returnsAlias;
@property (nullable, nonatomic, copy) NSString* easypayTitle;
@property (nullable, nonatomic, copy) NSString* easypayDescription;
@property (nullable, nonatomic, copy) NSString* easypayPaymentInfo;
@property (nonatomic, assign) NSInteger cardLabelType; // DTCardLabelType, see https://stackoverflow.com/questions/53649526
@property (nonatomic, assign) BOOL autoSettlement;
@property (nonatomic, assign) BOOL certificatePinning;
@property (nullable, nonatomic, copy) NSString* customKlarnaPaymentMethodName;
@property (nullable, nonatomic, strong) DTKlarnaPaymentInfo* klarnaPaymentInfo;
@property (nullable, nonatomic, copy) NSDictionary<NSString *, NSString *>* merchantProperties;
@property (nullable, nonatomic, copy) NSString* language; // ISO 639-1 code (also supports ISO 3166-1 alpha-2 code addon as per Apple spec)
@property (nullable, nonatomic, copy) DTSwissBillingPaymentInfo* swissBillingPaymentInfo;
@property (nullable, nonatomic, copy) NSString* appCallbackScheme;
@property (nonatomic, assign) BOOL suppressCriticalErrorDialog;
@property (nullable, nonatomic, copy) DTApplePayConfig* applePayConfig;
@property (nullable, nonatomic, copy) DTBoncardConfig* boncardConfig;
@property (nonatomic, assign) BOOL authenticationOnly;
@property (nullable, nonatomic, copy) DTByjunoPaymentInfo* byjunoPaymentInfo;
@property (nullable, nonatomic, copy) DTCustomer* customer;
@property (nullable, nonatomic, copy) DTSwissPassPaymentInfo* swissPassPaymentInfo;
@property (nullable, nonatomic, copy) NSString* paysafecardMerchantClientId;
@property (nullable, nonatomic, strong) DTPaycardPaymentInfo* paycardPaymentInfo;
@property (nullable, nonatomic, strong) NSString* customerMobile;
@property (nullable, nonatomic, strong) NSString* vippsPaymentText;
@property (nonatomic, assign) BOOL isVippsAppInstalled;
@property (nullable, nonatomic, strong) NSString* appCallbackUrl;
@property (nonatomic, assign) BOOL isPayment;
@property (nonatomic, assign) NSInteger savedCardDCCShowMode;

@end
