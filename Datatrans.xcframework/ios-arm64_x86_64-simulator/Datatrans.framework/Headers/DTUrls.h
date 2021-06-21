//
//  DTUrls.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 6/22/20.
//  Copyright 2020 ieffects ag. All rights reserved.
//


@interface DTUrls : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithTestingEnabled:(BOOL)testingEnabled;

- (nonnull NSString *)get3DAuthenticationUrl;
- (nonnull NSString *)get3DStatusUrl:(BOOL)isAliasRequest;
- (nonnull NSString *)getAliasUrl;
- (nonnull NSString *)getApplePayUrl;
- (nonnull NSString *)getAuthorizationUrl;
- (nonnull NSString *)getAuthorizationSplitUrl;
- (nonnull NSString *)getCancelUrl;
- (nonnull NSString *)getInitialTransactionRequestUrl;
- (nonnull NSString *)getPaymentPostUrl:(BOOL)isResumed;
- (nonnull NSString *)getTokenizationRequestUrl;
- (nonnull NSString *)getTWINTRegistrationUrl;
- (nonnull NSString *)getTWINTStatusUrl;

- (nonnull NSArray<NSString *> *)getHosts;
- (void)switchUrl;

@end
