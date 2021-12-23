//
//  DTWebCallbackUrls.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 05.10.20.
//

@interface DTWebCallbackUrls : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithCallbackScheme:(nullable NSString *)scheme testing:(BOOL)testing;

- (nonnull NSURL *)cancelURL;
- (nonnull NSURL *)errorURL;
- (nonnull NSURL *)successURL;

@end
