#import <Foundation/Foundation.h>

@class DTPaymentMethodToken;
@class DTPaymentMethodInfo;

@protocol DTTransactionModel <NSObject>

@property(nullable, copy) DTAliasRequest* aliasRequest;
@property(nonnull, readonly) NSString* mobileToken;
@property(nullable, copy) DTPaymentMethodInfo* paymentMethod;
@property(nullable, copy) DTPaymentMethodToken* paymentMethodToken;
@property(nullable, copy) NSString* transactionId;

@end
