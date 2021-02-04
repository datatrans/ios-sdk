//
//  DTInitialTransactionProcess.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 6/22/20.
//  Copyright 2020 ieffects ag. All rights reserved.
//

@class DTInitialTransaction;
@class DTNetworking;


@interface DTInitialTransactionProcess : NSObject

typedef void (^InitialTransactionCompletion)(DTInitialTransaction * _Nullable transaction, NSError * _Nullable error);

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithNetworking:(nonnull DTNetworking *)networking idempotencyKey:(nonnull NSString *)idempotencyKey;

- (void)startWithMobileToken:(nonnull NSString *)mobileToken completion:(nonnull InitialTransactionCompletion)completion;

@end
