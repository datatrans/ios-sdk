
#import <Foundation/Foundation.h>

@class DTPaymentMethodInfo;
@class DTPaymentRequest;
@class DTPaymentMethodToken;

@interface DTAliasPaymentAuthorizationRequest : NSObject

@property (nonatomic, nullable, copy) NSString* cvv;
@property (nonatomic, nullable, copy) NSString* easypayPaymentInfo;
@property (nonatomic, nullable, copy) NSDictionary* merchantProperties;
@property (nonatomic, nonnull, copy) DTPaymentRequest* paymentRequest;
@property (nonatomic, nullable, copy) NSString* payPalPairingId;
@property (nonatomic, nonnull, copy) NSString* reqType;
@property (nonatomic, nonnull, copy) DTPaymentMethodToken* paymentMethodToken;
@property (nonatomic, assign) BOOL returnAlias;
@property (nonatomic, nullable, copy) NSString* transactionId;

@end
