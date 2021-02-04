//
//  DTAliasRequest.h
//  Datatrans
//
//  Created by Basil Achermann on 12/27/10.
//  Copyright 2010 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTCard;

@interface DTAliasRequest : NSObject <NSCopying>

// hidden mode card alias request
- (id)initWithMerchantId:(NSString *)merchantId
            currencyCode:(NSString *)currencyCode
                    card:(DTCard *)card;

// standard mode alias request
- (id)initWithMerchantId:(NSString *)merchantId currencyCode:(NSString *)currencyCode paymentMethods:(NSArray *)paymentMethods;

@end
