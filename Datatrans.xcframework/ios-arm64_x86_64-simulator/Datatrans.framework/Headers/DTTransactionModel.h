#import <Foundation/Foundation.h>

@class DTPaymentMethodInfo;
@class DTPaymentOptions;
@class DTSavedPaymentMethod;

@protocol DTTransactionModel <NSObject>

@property(nullable, copy) DTAliasRequest* aliasRequest;
@property(nonnull, readonly) NSString* mobileToken;
@property(nonnull, readonly) DTPaymentOptions* options;
@property(nullable, copy) DTPaymentMethodInfo* paymentMethod;
@property(nullable, copy) DTSavedPaymentMethod* savedPaymentMethod;
@property(nullable, copy) NSString* transactionId;

@end
