//
//  DTDate.h
//  datatrans-iphone
//
//  Created by bacherma on 06/07/15.
//  Copyright 2015 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTDate : NSObject <NSCopying>

@property (nonatomic, readonly) NSString* dateString;

- (id)initWithYear:(int)year month:(int)month day:(int)day;
- (id)initWithString:(NSString *)s; // dd.MM.yyyy or yyyy-MM-dd

@end
