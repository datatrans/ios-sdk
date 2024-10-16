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
@class DTSavedPaymentMethod;


@interface DTInitialTransaction : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)jsonObject dccObject:(nullable NSDictionary *)dccObject;

- (void)addOptionsToPaymentOptions:(nonnull DTPaymentOptions *)paymentOptions hasInternalMethod:(BOOL)hasInternalMethod;

- (nonnull DTAliasRequest *)aliasRequest;
- (nonnull NSArray<NSString *> *)paymentMethods;
- (nonnull DTPaymentRequest *)paymentRequest;
- (nullable DTSavedPaymentMethod *)savedPaymentMethod;
- (nonnull NSArray<NSString *> *)dccEnabledMethods;

@end
