//
//  DTFakePaymentRequestFactory.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 30.09.20.
//

@class DTAliasRequest;
@class DTPaymentOptions;
@class DTPaymentRequest;

@interface DTFakePaymentRequestFactory : NSObject

+ (nonnull DTPaymentRequest *)createFakePayment:(nonnull DTAliasRequest *)aliasRequest options:(nonnull DTPaymentOptions *)options;

@end
