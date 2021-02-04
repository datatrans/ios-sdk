//
//  DTSwissBillingPaymentInfo.h
//  datatrans-iphone
//
//  Created by bacherma on 06/07/15.
//  Copyright 2015 iEffects GmbH. All rights reserved.
//
//
//  Class for configuring SwissBilling payments. In the following example a payment is made with basket items:
//
//		DTAddress* address = [[DTAddress alloc] initWithFirstName:@"Good" lastName:@"Customer" street:@"Limmatquai 55" zipCode:@"8001"];
//		address.city = @"Zürich";
//		address.countryCode = @"CH";
//		DTCustomer* customer = [[DTCustomer alloc] init];
//		customer.address = address;
//		customer.phone = @"+41584333034";
//		customer.mailAddress = @"eshop@example.com";
//		customer.birthDate = [[DTDate alloc] initWithYear:1969 month:9 day:19];
//		paymentController.paymentOptions.customer = customer;
//
//		DTSwissBillingPaymentInfo* info = [[DTSwissBillingPaymentInfo alloc] init];
//      info.shippingAddress = address;
//
//      NSMutableArray* items = [NSMutableArray array];
//      DTBasketItem* item = [[DTBasketItem alloc] initWithId:@"1" name:@"name 1" grossPrice:1000 quantity:1];
//      [items addObject:item];
//      item = [[DTBasketItem alloc] initWithId:@"2" name:@"name 2" grossPrice:500 quantity:2];
//      [items addObject:item];
//      info.basketItems = items;
//
//      paymentController.paymentOptions.swissBillingPaymentInfo = info;
//

#import <Foundation/Foundation.h>

@class DTAddress;

@interface DTSwissBillingPaymentInfo : NSObject<NSCopying>

@property (nonatomic, assign) NSInteger taxAmount;
@property (nonatomic, copy) DTAddress* shippingAddress;
@property (nonatomic, copy) NSArray* basketItems; // array of DTBasketItem* objects

@end
