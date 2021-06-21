//
//  DTVersion.h
//  datatrans-iphone
//
//  Created by Basil Achermann on 5/31/12.
//  Copyright 2012 iEffects GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DTVersion : NSObject {
}

+ (void)printIfTestOnly;

+ (NSString *)libraryName;

+ (uint32_t)libraryVersion;
+ (NSString *)libraryVersionString;
+ (NSString *)libraryVersionStringWithDeviceType;

+ (NSMutableDictionary *)statsProperties;

@end
