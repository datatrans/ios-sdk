//
//  DTPaymentRequest.h
//  Datatrans
//
//  Created by Kaspar Rohrer on 8/11/10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark Payment request

@interface DTPaymentRequest : NSObject <NSCopying>

@property (nonatomic, copy, nonnull) NSString* merchantId;
@property (nonatomic, copy, nonnull) NSString* refno;
@property (nonatomic, copy, nullable) NSString* refno2;
@property (nonatomic, copy, nullable) NSString* refno3;
@property (nonatomic, copy, nonnull) NSString* currencyCode;
@property (nonatomic, assign) NSUInteger amountInSmallestCurrencyUnit;

@property (nonatomic, copy, nullable) NSString* localizedPriceDescription;

- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)initWithMerchantId:(nonnull NSString *)merchantId
							 refno:(nonnull NSString *)refno
							refno2:(nullable NSString *)refno2
							refno3:(nullable NSString *)refno3
					  currencyCode:(nonnull NSString *)currencyCode
	  amountInSmallestCurrencyUnit:(NSUInteger)amountInSmallestCurrencyUnit
		 localizedPriceDescription:(nullable NSString *)localizedPriceDescription;

@end
