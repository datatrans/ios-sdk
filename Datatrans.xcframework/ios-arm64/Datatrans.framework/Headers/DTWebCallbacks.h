//
//  DTWebCallback.h
//  datatrans-iphone
//
//  Created by Basil Achermann on 29.01.18.
//

#import <Foundation/Foundation.h>

@protocol DTRequestHandler;
@protocol DTWebProcess;
@protocol DTWebProcessDelegate;
@class DTWebCallbackUrls;
@class DTWebProcessViewController;

@interface DTWebCallbacks : NSObject

- (nonnull instancetype)initWithCallbackUrls:(nonnull DTWebCallbackUrls *)urls;

- (void)addRequestHandler:(nonnull id<DTRequestHandler>)handler;

- (BOOL)canHandleRequest:(nonnull NSURLRequest *)request;
- (BOOL)handleRequest:(nonnull NSURLRequest *)request webProcess:(nonnull id<DTWebProcess>)webProcess notificationDelegate:(nullable id<DTWebProcessDelegate>)delegate;

@end

#pragma mark -

@protocol DTRequestHandler <NSObject>

- (BOOL)canHandleRequest:(nonnull NSURLRequest *)request;
- (void)handleRequest:(nonnull NSURLRequest *)request webProcess:(nonnull id<DTWebProcess>)process notificationDelegate:(nullable id<DTWebProcessDelegate>)delegate;

@end
