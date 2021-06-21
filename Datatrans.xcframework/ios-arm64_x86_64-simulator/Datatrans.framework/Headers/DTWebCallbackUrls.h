//
//  DTWebCallbackUrls.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 05.10.20.
//

@interface DTWebCallbackUrls : NSObject

- (nonnull instancetype)initWithCallbackScheme:(nullable NSString *)scheme testing:(BOOL)testing;

- (nonnull NSURL *)cancelURL;
- (nonnull NSURL *)errorURL;
- (nonnull NSURL *)successURL;

- (void)setCancelURL:(nonnull NSString *)cancelUrl errorURL:(nonnull NSString *)errorURL successURL:(nonnull NSString *)successURL;

@end
