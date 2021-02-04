//
//  DTAliasRequest+Internal.h
//  datatrans-iphone
//
//  Created by bacherma on 9/9/14.
//
//

#import <Datatrans/DTAliasRequest.h>

@interface DTAliasRequest (Internal)

@property (nonatomic, readonly) NSString* merchantId;
@property (nonatomic, readonly) NSString* currencyCode;
@property (nonatomic, copy) DTCard* card;
@property (nonatomic, readonly) NSArray<NSString *>* paymentMethodIdents;

@end
