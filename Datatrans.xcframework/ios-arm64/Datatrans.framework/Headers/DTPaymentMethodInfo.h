//
//  DTPaymentMethodInfo.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 9/1/10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>

@class DTPaymentOptions;

typedef enum {
	DTPaymentMethodCreditCard				= 1 << 0,
	DTPaymentMethodWebPayment				= 1 << 1,
	DTPaymentMethodWebPaymentExternal		= 1 << 2,
	DTPaymentMethodRequiresCustomScheme		= 1 << 3,
	DTPaymentMethodCreditCardOptionalCvv	= 1 << 5,
} DTPaymentMethodFlags;

@interface DTPaymentMethodInfo : NSObject

- (nullable instancetype)initWithIdentifier:(nullable NSString *)identifier;

@property (nonatomic, readonly) BOOL isCreditCard;
@property (nonatomic, readonly) BOOL isWebPayment;
@property (nonatomic, readonly) BOOL isWebPaymentExternal;
@property (nonatomic, readonly) BOOL needsCardVerification;
@property (nonatomic, readonly) BOOL hasSavedPaymentMethodSupport;
@property (nonatomic, readonly) BOOL requiresCustomScheme;
@property (nonatomic, readonly) BOOL isOptionalCvv;

@property (nonatomic, readonly) NSString* _Nullable viewPortAdjustment;

@property (nonatomic, readonly) NSString* _Nonnull title;
@property (nonatomic, readonly) NSString* _Nonnull identifier;
@property (nonatomic, readonly) NSString* _Nonnull imageName;
@property (nonatomic, readonly) Class _Nullable savedPaymentMethodClass;
@property (nonatomic, readonly) PKPaymentNetwork _Nullable pkPaymentNetworkIdentifier;

@property (nonatomic, readonly) NSRange creditCardVerificationLengthRange;

- (void)updateWithOptions:(nonnull DTPaymentOptions *)options;
- (nullable NSString *)validateOptions:(nonnull DTPaymentOptions *)options isAliasPayment:(BOOL)isAliasPayment hasKlarnaSDK:(BOOL)hasKlarnaSDK;

@end
