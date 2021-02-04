//
//  DTInitialTransaction.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 6/22/20.
//  Copyright 2020 ieffects ag. All rights reserved.
//

@class DTAliasRequest;
@class DTPaymentOptions;
@class DTPaymentRequest;
@class DTPaymentMethodToken;


@interface DTInitialTransaction : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)jsonObject;

- (void)addOptionsToPaymentOptions:(nonnull DTPaymentOptions *)paymentOptions;
- (nullable NSString *)cancelURL;
- (nullable NSString *)errorURL;
- (nullable NSString *)successURL;

- (nonnull DTAliasRequest *)aliasRequest;
- (nonnull NSArray<NSString *> *)paymentMethods;
- (nonnull DTPaymentRequest *)paymentRequest;
- (nullable DTPaymentMethodToken *)paymentMethodToken;
- (BOOL)isPayment;

@end
