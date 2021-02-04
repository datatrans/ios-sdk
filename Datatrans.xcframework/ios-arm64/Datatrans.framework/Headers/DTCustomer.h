//
//  DTCustomer.h
//  datatrans-iphone
//
//  Created by pschmid on 14/08/17.
//  Copyright 2017 ieffects ag. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTDate;
@class DTAddress;

@interface DTCustomer : NSObject<NSCopying>

@property (nonatomic, copy) DTAddress* address;
@property (nonatomic, copy) DTDate* birthDate;
@property (nonatomic, copy) NSString* cellPhone;
@property (nonatomic, copy) NSString* customerId;
@property (nonatomic, copy) NSString* gender;
@property (nonatomic, copy) NSString* ipAddress;
@property (nonatomic, copy) NSString* language;
@property (nonatomic, copy) NSString* mailAddress;
@property (nonatomic, copy) NSString* phone;
@property (nonatomic, copy) NSString* type;

@end
