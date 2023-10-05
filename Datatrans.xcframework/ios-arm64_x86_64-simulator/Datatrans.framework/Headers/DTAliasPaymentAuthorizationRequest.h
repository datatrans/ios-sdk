
#import <Foundation/Foundation.h>

@class DTByjunoPaymentInfo;
@class DTDCCModel;
@class DTPaymentMethodInfo;
@class DTPaymentRequest;
@class DTSavedPaymentMethod;

@interface DTAliasPaymentAuthorizationRequest : NSObject

@property (nonatomic, nullable, copy) DTByjunoPaymentInfo* byjunoPaymentInfo;
@property (nonatomic, nullable, copy) NSString* cvv;
@property (nonatomic, nullable, copy) NSString* easypayPaymentInfo;
@property (nonatomic, nullable, copy) NSDictionary* merchantProperties;
@property (nonatomic, nonnull, copy) DTPaymentRequest* paymentRequest;
@property (nonatomic, nullable, copy) NSString* payPalPairingId;
@property (nonatomic, nonnull, copy) NSString* reqType;
@property (nonatomic, nonnull, copy) DTSavedPaymentMethod* savedPaymentMethod;
@property (nonatomic, nullable, copy) NSString* transactionId;
@property (nonatomic, nullable, copy) DTDCCModel* dccModel;

@end
