//
//  DTPaymentModel.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 8/31/10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTPaymentModel : NSObject

+ (BOOL)creditCardNumberIsValidLuhn:(NSString *)number;

@end
