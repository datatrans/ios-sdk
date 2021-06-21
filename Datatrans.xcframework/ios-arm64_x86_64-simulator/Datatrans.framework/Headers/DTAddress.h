//
//  DTAddress.h
//  datatrans-iphone
//
//  Created by bacherma on 06/07/15.
//  Copyright 2015 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTAddress : NSObject<NSCopying>

@property (nonatomic, copy) NSString* firstName;
@property (nonatomic, copy) NSString* lastName;
@property (nonatomic, copy) NSString* street;
@property (nonatomic, copy) NSString* zipCode;

@property (nonatomic, copy) NSString* city;
@property (nonatomic, copy) NSString* countryCode;
@property (nonatomic, copy) NSString* street2;

- (id)initWithFirstName:(NSString *)firstName
			   lastName:(NSString *)lastName
				 street:(NSString *)street
				zipCode:(NSString *)zipCode;

@end
