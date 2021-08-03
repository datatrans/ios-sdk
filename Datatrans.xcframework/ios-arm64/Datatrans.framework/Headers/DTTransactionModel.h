#import <Foundation/Foundation.h>

@class DTPaymentMethodToken;
@class DTPaymentMethodInfo;
@class DTPaymentOptions;

@protocol DTTransactionModel <NSObject>

@property(nullable, copy) DTAliasRequest* aliasRequest;
@property(nonnull, readonly) NSString* mobileToken;
@property(nonnull, readonly) DTPaymentOptions* options;
@property(nullable, copy) DTPaymentMethodInfo* paymentMethod;
@property(nullable, copy) DTPaymentMethodToken* paymentMethodToken;
@property(nullable, copy) NSString* transactionId;

@end
