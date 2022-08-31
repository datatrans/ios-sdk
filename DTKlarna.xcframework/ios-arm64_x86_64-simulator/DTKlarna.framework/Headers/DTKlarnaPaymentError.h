#import <Foundation/Foundation.h>

@class KlarnaPaymentError;

@interface DTKlarnaPaymentError : NSObject // Matches KlarnaPaymentError/KlarnaMobileSDKError

- (nonnull instancetype)initWithError:(nonnull KlarnaPaymentError *)error NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

// From KlarnaMobileSDKError
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
@property (nonatomic, readonly) BOOL isFatal;

// From KlarnaPaymentError
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable invalidFields;
@property (nonatomic, readonly, copy) NSString * _Nullable action;

@end
