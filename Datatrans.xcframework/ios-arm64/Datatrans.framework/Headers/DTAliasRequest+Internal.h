//
//  DTAliasRequest+Internal.h
//  datatrans-iphone
//
//  Created by bacherma on 9/9/14.
//
//

#import <Datatrans/DTAliasRequest.h>

@interface DTAliasRequest (Internal)

@property (nonnull, nonatomic, readonly) NSString* merchantId;
@property (nonnull, nonatomic, readonly) NSString* currencyCode;
@property (nonnull, nonatomic, readonly) NSString* refno;
@property (nullable, nonatomic, readonly) NSString* refno2;
@property (nullable, nonatomic, readonly) NSString* refno3;

@end
