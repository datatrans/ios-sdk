//
//  DTAliasRequest.h
//  Datatrans
//
//  Created by Basil Achermann on 12/27/10.
//  Copyright 2010 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTAliasRequest : NSObject <NSCopying>

- (id)initWithMerchantId:(NSString *)merchantId currencyCode:(NSString *)currencyCode;

@end
