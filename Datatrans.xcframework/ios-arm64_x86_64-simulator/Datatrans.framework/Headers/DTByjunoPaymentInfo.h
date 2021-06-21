//
//  DTByjunoPaymentInfo.h
//  datatrans-iphone
//
//  Created by bacherma on 14/08/17.
//  Copyright 2017 ieffects ag. All rights reserved.
//
//
//  Class for configuring Byjuno payments. In the following example a possible Byjuno payment is configured:
//
//		DTAddress* address = [[DTAddress alloc] initWithFirstName:@"Mark"
//														 lastName:@"Uber"
//														   street:@"Amstelstrasse 11"
//														  zipCode:@"4123"];
//		address.city = @"Allschwil";
//		address.countryCode = @"CH";
//
//		DTCustomer* customer = [[DTCustomer alloc] init];
//		customer.customerId = @"10067822";
//		customer.type = @"P";
//		customer.gender = @"female";
//		customer.address = address;
//		customer.birthDate = [[DTDate alloc] initWithYear:1986 month:5 day:14];
//		customer.language = @"DE";
//		customer.mailAddress = @"h.mustermann@intrum.com";
//		paymentController.paymentOptions.customer = customer;
//
//		DTByjunoPaymentInfo* info = [[DTByjunoPaymentInfo alloc] init];
//		info.deviceFingerprintId = @"deviceFingerprintId-test";
//      paymentController.paymentOptions.byjunoPaymentInfo = info;
//

#import <Foundation/Foundation.h>

@interface DTByjunoPaymentInfo : NSObject<NSCopying>

@property (nullable, nonatomic, copy) NSString* subtype; // "INVOICE", "INSTALLMENT", "BYJUNO_INVOICE" or "MONTHLY_INVOICE"
@property (nullable, nonatomic, copy) NSNumber* customerEmailConfirmed; // BOOL
@property (nullable, nonatomic, copy) NSString* customerInfo1;
@property (nullable, nonatomic, copy) NSString* customerInfo2;
@property (nullable, nonatomic, copy) NSString* deliveryMethod; // "POST", "SHOP" or "HLD"
@property (nullable, nonatomic, copy) NSString* deviceFingerprintId;
@property (nullable, nonatomic, copy) NSNumber* paperInvoice; // BOOL
@property (nullable, nonatomic, copy) NSNumber* repaymentType; // Integer 1-20
@property (nullable, nonatomic, copy) NSString* riskOwner; // "IJ" or "CLIENT"
@property (nullable, nonatomic, copy) NSString* siteId;
@property (nullable, nonatomic, copy) NSString* verifiedDocument1Type;
@property (nullable, nonatomic, copy) NSString* verifiedDocument1Number;
@property (nullable, nonatomic, copy) NSString* verifiedDocument1Issuer;
@property (nullable, nonatomic, copy) NSArray<NSString *>* customData; // Up to 10 entries
@property (nullable, nonatomic, copy) NSNumber* firstRateAmount; // Integer

@end
