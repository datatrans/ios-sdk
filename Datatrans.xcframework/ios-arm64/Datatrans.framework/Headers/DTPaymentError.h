//
//  DTPaymentError.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 06.09.10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString* _Nonnull const DTPaymentErrorDomain;
extern NSString* _Nonnull const DTPaymentMethodKey;

typedef enum {
    DTPaymentErrorTechnical,
    DTPaymentErrorValidation,
    DTPaymentErrorAuthentication,
    DTPaymentErrorAuthorization
} DTPaymentErrorCode;

@interface DTPaymentError : NSError

+ (nonnull instancetype)paymentErrorTechnical;
+ (nonnull instancetype)paymentErrorTechnical:(nullable NSString *)message;
+ (nonnull instancetype)paymentErrorValidation:(nullable NSError *)underlyingError;
+ (nonnull instancetype)paymentErrorAuthentication:(nullable NSError *)underlyingError;
+ (nonnull instancetype)paymentErrorAuthorization:(nullable NSError *)underlyingError;
+ (nonnull instancetype)paymentError:(nonnull NSError *)underlyingError paymentMethod:(nullable NSString *)paymentMethod;

+ (BOOL)isAuthorizationError:(nonnull NSError *)error;
@end
