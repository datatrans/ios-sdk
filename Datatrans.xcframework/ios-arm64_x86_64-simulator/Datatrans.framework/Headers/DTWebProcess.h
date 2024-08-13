#import <Foundation/Foundation.h>

@class DTTransactionError;

@protocol DTWebProcess <NSObject>
@end

@protocol DTWebProcessDelegate <NSObject>

- (void)webProcessDidFail:(nonnull id<DTWebProcess>)webProcess error:(nonnull DTTransactionError *)error transactionId:(nullable NSString *)transactionId params:(nonnull NSDictionary<NSString*, NSString*> *)params;
- (void)webProcessDidSucceed:(nonnull id<DTWebProcess>)webProcess transactionId:(nullable NSString *)transactionId params:(nonnull NSDictionary<NSString*, NSString*> *)params;
- (void)webProcessAliasCreated:(nonnull id<DTWebProcess>)webProcess method:(nonnull NSString *)method transactionId:(nullable NSString *)transactionId params:(nonnull NSDictionary<NSString*, NSString*> *)params;
- (void)webProcessWasCancelled:(nonnull id<DTWebProcess>)webProcess;

@end

@protocol DTPostFinanceWebProcessDelegate <DTWebProcessDelegate>

- (void)webProcessDidStartPFEPayment:(nonnull id<DTWebProcess>)webProcess url:(nonnull NSURL *)url;

@end

@protocol DTIDEALWebProcessDelegate <DTWebProcessDelegate>

- (void)webProcessDidStartIDEALPayment:(nonnull id<DTWebProcess>)webProcess url:(nonnull NSURL *)url;

@end
