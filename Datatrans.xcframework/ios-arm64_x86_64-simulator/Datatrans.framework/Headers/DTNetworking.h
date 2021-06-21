//
//  DTNetworking.h
//  DTPaymentLib
//
//  Created by Basil Achermann on 8/11/10.
//  Copyright 2010 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTAliasPaymentAuthorizationRequest;
@class DTAliasRequest;
@class DTAuthorizationRequestResponse;
@class DTCard;
@class DTCardTokenRequestResponse;
@class DTPaymentAuthorizationRequest;
@class DTPaymentOptions;
@class DTPaymentRequest;
@class DTStartApplePayRequestResponse;
@class DTStartTokenRequestResponse;
@class DTStartTWINTRequestResponse;
@class DTStatusRequestResponse;
@class DTTWINTStatusRequestResponse;
@class DTUrls;

typedef enum {
	DT_ENROLLMENT_STATUS_NOT_ENROLLED,
	DT_ENROLLMENT_STATUS_ENROLLED
} DTEnrollmentStatus;

@protocol DTNWRequest<NSObject>
- (void)cancel;
@end


// Datatrans networking API. All requests are asynchronous. Responses  are posted to the _main_ thread.
// Errors can be:
//   - Technical errors: error codes of Apple internal domains (NSURLErrorDomain, kCFErrorDomainCFNetwork), 
//                       negative error codes of kGDataHTTPFetcherErrorDomain,
//                       internal and parsing errors of DTNetworkingErrorDomain defined by DTNetworkingErrorCode.
//   - Invalid HTTP status codes: positive error codes of domain kGDataHTTPFetcherErrorDomain
//   - Transaction errors: all non-technical error codes of DTNetworkingErrorDomain as defined by DTNetworkingErrorCode
@interface DTNetworking : NSObject {
@protected
    BOOL _testingEnabled;
    DTPaymentOptions* _options;
}

+ (BOOL)isTechnicalError:(NSError *)error;
+ (BOOL)isSSLError:(NSError *)error;

- (instancetype)initWithMobileToken:(NSString *)mobileToken options:(DTPaymentOptions *)paymentOptions urls:(DTUrls *)urls;

- (void)requestInitialTransaction:(NSString *)mobileToken idempotencyKey:(NSString *)idempotencyKey completion:(void (^)(NSData *, NSError *))completion;
- (void)requestCardTokenForMerchantId:(NSString *)merchantId card:(DTCard *)card completion:(void (^)(DTCardTokenRequestResponse *, NSError *))completion;
- (void)requestStatusForMerchantId:(NSString *)merchantId alias:(NSString *)alias currencyCode:(NSString *)currencyCode isAliasRequest:(BOOL)isAliasRequest completion:(void(^)(DTStatusRequestResponse *, NSError *))completion;
- (void)requestTokenizationWithJSONBody:(NSData *)body completion:(void (^)(NSData *, NSError *))completion;
- (void)authorizeAliasPaymentRequest:(DTAliasPaymentAuthorizationRequest *)authorizationRequest completion:(void (^)(DTAuthorizationRequestResponse *, NSError *))completion;
- (void)authorizePaymentRequest:(DTPaymentAuthorizationRequest *)authorizationRequest completion:(void (^)(DTAuthorizationRequestResponse *, NSError *))completion; // split web payment
- (void)startTokenRequest:(DTPaymentRequest *)paymentRequest paymentMethod:(NSString *)paymentMethod completion:(void (^)(DTStartTokenRequestResponse *, NSError *))completion;
- (void)startTokenRequestForAlias:(DTAliasRequest *)aliasRequest paymentMethod:(NSString *)paymentMethod completion:(void (^)(DTStartTokenRequestResponse *, NSError *))completion;
- (void)startTWINTAliasRequest:(DTAliasRequest *)aliasRequest completion:(void (^)(DTStartTWINTRequestResponse *, NSError *))completion;
- (void)TWINTStatusRequestForMerchantId:(NSString *)merchantId transactionId:(NSString *)transactionId completion:(void (^)(DTTWINTStatusRequestResponse *, NSError *))completion;
- (void)cancelRequest:(DTPaymentRequest *)paymentRequest transactionId:(NSString *)transactionId;
- (void)startApplePayRequest:(DTPaymentRequest *)paymentRequest token:(NSString *)token completion:(void (^)(DTStartApplePayRequestResponse *, NSError *))completion;

#pragma mark - Management
typedef void (^DTManagementCompletion)(NSError* error);
- (void)cancelTransaction:(NSString *)transactionId request:(DTPaymentRequest *)request completion:(DTManagementCompletion)completion;
- (void)cancelCurrentRequest;

@end
