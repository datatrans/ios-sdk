//
//  DTUrls.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 6/22/20.
//  Copyright 2020 ieffects ag. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Datatrans/DTUrlsProtocol.h>

@interface DTUrls : NSObject <DTUrlsProtocol>

- (nonnull instancetype)initWithTestingEnabled:(BOOL)testingEnabled;

@end
