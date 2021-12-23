//
//  DTPaymentMethodInfo.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 9/1/10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTPaymentOptions;

typedef enum {
	DTPaymentMethodCreditCard				= 1 << 0,
	DTPaymentMethodNeedsCardExpiration		= 1 << 1,
	DTPaymentMethodNeedsCardVerification	= 1 << 2,
	DTPaymentMethodNeedsCardholder			= 1 << 3,
	DTPaymentMethodWebPayment               = 1 << 5,
    DTPaymentMethodWebPaymentExternal       = 1 << 7,
} DTPaymentMethodFlags;

@interface DTPaymentMethodInfo : NSObject

- (nullable instancetype)initWithIdentifier:(nullable NSString *)identifier;

@property (nonatomic, readonly) BOOL isCreditCard;
@property (nonatomic, readonly) BOOL isWebPayment;
@property (nonatomic, readonly) BOOL isWebPaymentExternal;
@property (nonatomic, readonly) BOOL needsCardExpiration;
@property (nonatomic, readonly) BOOL needsCardVerification;
@property (nonatomic, readonly) BOOL needsCardholder;
@property (nonatomic, readonly) BOOL hasSavedPaymentMethodSupport;

@property (nonatomic, readonly) NSString* _Nullable viewPortAdjustment;

@property (nonatomic, readonly) NSString* _Nonnull title;
@property (nonatomic, readonly) NSString* _Nonnull identifier;
@property (nonatomic, readonly) NSString* _Nonnull imageName;
@property (nonatomic, readonly) Class _Nullable savedPaymentMethodClass;

@property (nonatomic, readonly) NSRange creditCardVerificationLengthRange;
@property (nonatomic, readonly) NSRange creditCardNumberLengthRange;
@property (nonatomic, readonly) NSArray<NSString *>* _Nullable creditCardNumberPrefixes;
@property (nonatomic, readonly) NSArray<NSNumber *>* _Nullable creditCardNumberSpaces;

- (nullable NSString *)commonPrefix;

- (nullable UIImage *)imageForSize:(CGSize)size;

- (void)updateWithOptions:(nonnull DTPaymentOptions *)options;
- (nullable NSString *)validateOptions:(nonnull DTPaymentOptions *)options isAliasPayment:(BOOL)isAliasPayment;

+ (nullable DTPaymentMethodInfo *)uniqueMethodInMethods:(nonnull NSArray<DTPaymentMethodInfo *> *)methods forNumberStartingWith:(nonnull NSString *)number;
+ (nonnull NSSet<DTPaymentMethodInfo *> *)methodsInMethods:(nonnull NSArray<DTPaymentMethodInfo *> *)methods forNumberStartingWith:(nonnull NSString *)number;

@end
