//
//  DTWebRequestFactory.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 25.09.20.
//

#import <Foundation/Foundation.h>
#import <Datatrans/DTAliasRequest.h>
#import <Datatrans/DTPaymentRequest.h>
#import <Datatrans/DTUrls.h>

@class DTAliasRequest;
@class DTCardToken;
@class DTPaymentOptions;
@class DTWebCallbackUrls;
@protocol DTTransactionModel;

@interface DTWebRequestFactory : NSObject

- (nonnull instancetype)initWithUrls:(nonnull DTUrls *)urls callbackUrls:(nonnull DTWebCallbackUrls *)callbackUrls;

- (nonnull NSURLRequest *)aliasInputRequestForRequest:(nonnull DTAliasRequest *)aliasRequest transactionModel:(nonnull id<DTTransactionModel>)transactionModel;
- (nonnull NSURLRequest *)authenticate3DRequestForRequest:(nonnull DTPaymentRequest *)paymentRequest creditCard:(nonnull DTCardToken *)creditCard transactionId:(nonnull NSString *)transactionId testing:(BOOL)testing;
- (nonnull NSURLRequest *)paymentInputRequestForRequest:(nonnull DTPaymentRequest *)paymentRequest transactionModel:(nonnull id<DTTransactionModel>)transactionModel;

@end
