//
//  DTSwissPassPaymentInfo.h
//  datatrans-iphone
//
//  Created by pschmid on 25/04/19.
//  Copyright 2019 ieffects ag. All rights reserved.
//
//
//  Class for configuring SwissBilling payments. In the following example a payment is configured:
//
//		DTAddress* address = [[DTAddress alloc] initWithFirstName:@"Anna" lastName:@"Deiss" street:@"SBB Personenverkehr - VS-VE-VS" zipCode:@"3000"];
//		DTCustomer* customer = [[DTCustomer alloc] init];
//		customer.address = address;
//		customer.birthDate = [[DTDate alloc] initWithYear:1980 month:1 day:1];
//		customer.mailAddress = @"anna.deiss@mail.com";
//		customer.phone = @"+41 79 555 44 33";
//		paymentController.paymentOptions.customer = customer;
//
//		DTSwissPassPaymentInfo* info = [[DTSwissPassPaymentInfo alloc] initWithSwissPassCardNumber:@"S48681516807" swissPassZipCode:@"3000"];
//      paymentController.paymentOptions.swissPassPaymentInfo = info;
//

#import <Foundation/Foundation.h>

@interface DTSwissPassPaymentInfo : NSObject<NSCopying>

@property (nonatomic, copy) NSString* swissPassCardNumber;
@property (nonatomic, copy) NSString* swissPassZipCode;

- (instancetype)initWithSwissPassCardNumber:(NSString *)cardNumber swissPassZipCode:(NSString *)zipCode;

@end
