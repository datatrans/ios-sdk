
#import <Foundation/Foundation.h>

@class DTPaymentMethodInfo;

@interface DTPaymentAuthorizationRequest : NSObject

@property (nonatomic, assign) NSUInteger amountInSmallestCurrencyUnit;
@property (nonatomic, assign) BOOL autoSettlement;
@property (nonatomic, nonnull, copy) NSString* currencyCode;
@property (nonatomic, nonnull, copy) NSString* merchantId;
@property (nonatomic, nullable, copy) NSDictionary<NSString *, NSString *>* merchantProperties;
@property (nonatomic, nullable, copy) DTPaymentMethodInfo* paymentMethod;
@property (nonatomic, nonnull, copy) NSString* refno;
@property (nonatomic, nonnull, copy) NSString* transactionId;

@end
