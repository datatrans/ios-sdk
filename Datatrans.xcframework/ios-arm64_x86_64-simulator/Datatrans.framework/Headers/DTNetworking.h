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
@class DTCardAliasRequestResponse;
@class DTDCCServiceResponse;
@class DTPaymentAuthorizationRequest;
@class DTPaymentOptions;
@class DTPaymentRequest;
@class DTStartApplePayRequestResponse;
@class DTStartTokenRequestResponse;
@class DTStartTWINTRequestResponse;
@class DTStatusRequestResponse;
@class DTTWINTStatusRequestResponse;
@class DT2FARequestResponse;
@protocol DTUrlsProtocol;

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
@interface DTNetworking : NSObject

+ (BOOL)isTechnicalError:(NSError *)error;
+ (BOOL)isSSLError:(NSError *)error;
+ (BOOL)isMobileTokenNotFoundError:(NSError *)error;

- (instancetype)initWithMobileToken:(NSString *)mobileToken urls:(id<DTUrlsProtocol>)urls certificatePinning:(BOOL)certificatePinning testing:(BOOL)testing;

- (void)requestInitialTransaction:(NSString *)mobileToken idempotencyKey:(NSString *)idempotencyKey completion:(void (^)(NSData *, NSError *))completion;
- (void)requestCardAliasForMerchantId:(NSString *)merchantId card:(DTCard *)card options:(DTPaymentOptions *)options completion:(void (^)(DTCardAliasRequestResponse *, NSError *))completion;
- (void)requestStatusForMerchantId:(NSString *)merchantId alias:(NSString *)alias currencyCode:(NSString *)currencyCode isAliasRequest:(BOOL)isAliasRequest transactionId:(NSString *)transactionId isDCC:(BOOL)isDCC completion:(void(^)(DTStatusRequestResponse *, NSError *))completion;
- (void)requestTokenizationWithJSONBody:(NSData *)body completion:(void (^)(NSData *, NSError *))completion;
- (void)authorizeAliasPaymentRequest:(DTAliasPaymentAuthorizationRequest *)authorizationRequest completion:(void (^)(DTAuthorizationRequestResponse *, NSError *))completion;
- (void)authorizePaymentRequest:(DTPaymentAuthorizationRequest *)authorizationRequest completion:(void (^)(DTAuthorizationRequestResponse *, NSError *))completion; // split web payment
- (void)startTokenRequest:(DTPaymentRequest *)paymentRequest paymentMethod:(NSString *)paymentMethod options:(DTPaymentOptions *)options completion:(void (^)(DTStartTokenRequestResponse *, NSError *))completion;
- (void)start2FARequest:(DTPaymentRequest *)paymentRequest paymentMethod:(NSString *)paymentMethod alias:(NSString *)alias options:(DTPaymentOptions *)options completion:(void (^)(DT2FARequestResponse *, NSError *))completion;
- (void)startTokenRequestForAlias:(DTAliasRequest *)aliasRequest paymentMethod:(NSString *)paymentMethod options:(DTPaymentOptions *)options completion:(void (^)(DTStartTokenRequestResponse *, NSError *))completion;
- (void)startTWINTAliasRequest:(DTAliasRequest *)aliasRequest options:(DTPaymentOptions *)options completion:(void (^)(DTStartTWINTRequestResponse *, NSError *))completion;
- (void)TWINTStatusRequestForMerchantId:(NSString *)merchantId transactionId:(NSString *)transactionId options:(DTPaymentOptions *)options completion:(void (^)(DTTWINTStatusRequestResponse *, NSError *))completion;
- (void)cancelRequest:(DTPaymentRequest *)paymentRequest transactionId:(NSString *)transactionId;
- (void)startApplePayRequest:(DTPaymentRequest *)paymentRequest token:(NSString *)token displayName:(NSString *)displayName options:(DTPaymentOptions *)options completion:(void (^)(DTStartApplePayRequestResponse *, NSError *))completion;
- (void)dccInfoForMerchantId:(NSString *)merchantId paymentMethod:(NSString *)paymentMethod cardno:(NSString *)cardno alias:(NSString *)alias completion:(void (^)(DTDCCServiceResponse *, NSError *))completion;

#pragma mark - Management
typedef void (^DTManagementCompletion)(NSError* error);
- (void)cancelTransaction:(NSString *)transactionId request:(DTPaymentRequest *)request completion:(DTManagementCompletion)completion;
- (void)cancelCurrentRequest;

@end
