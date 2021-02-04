//
//  DTBasketItem-h
//  datatrans-iphone
//
//  Created by bacherma on 06/07/15.
//  Copyright 2015 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTBasketItem : NSObject<NSCopying>

@property (nonatomic, copy) NSString* articleId;
@property (nonatomic, copy) NSString* name;
@property (nonatomic, assign) NSInteger grossPrice;
@property (nonatomic, assign) NSInteger quantity;

@property (nonatomic, copy) NSString* itemDescription;
@property (nonatomic, assign) float_t tax;
@property (nonatomic, assign) NSInteger taxAmount;
@property (nonatomic, copy) NSString* type; // default: "goods"

- (id)initWithId:(NSString *)articleId name:(NSString *)name grossPrice:(NSInteger)grossPrice quantity:(NSInteger)quantity;

@end
