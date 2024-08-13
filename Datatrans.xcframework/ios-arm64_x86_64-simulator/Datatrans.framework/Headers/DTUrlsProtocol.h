//
//  DTUrlsProtocol.h
//  Datatrans
//
//  Created by Serhii Libin on 26.06.2024.
//

@protocol DTUrlsProtocol <NSObject>

- (nonnull NSString *)get3DAuthenticationUrl;
- (nonnull NSString *)get3DStatusUrl:(BOOL)isAliasRequest;
- (nonnull NSString *)getAliasUrl;
- (nonnull NSString *)getApplePayUrl;
- (nonnull NSString *)getDCCServiceUrl;
- (nonnull NSString *)getAuthorizationUrl;
- (nonnull NSString *)getAuthorizationSplitUrl;
- (nonnull NSString *)getCancelUrl;
- (nonnull NSString *)getInitialTransactionRequestUrl;
- (nonnull NSString *)getPaymentPostUrl:(BOOL)isResumed;
- (nonnull NSString *)getTokenizationUrl;
- (nonnull NSString *)getTWINTRegistrationUrl;
- (nonnull NSString *)getTWINTStatusUrl;
- (nonnull NSString *)getBinRangesUrl;

- (nonnull NSArray<NSString *> *)getHosts;

@end
