//
//  DTExternalWebAppDelegateProxy.h
//  datatrans-iphone
//
//  Created by Basil Achermann on 25.01.18.
//

#import <Foundation/Foundation.h>

@interface DTExternalWebAppDelegateProxy : NSObject<UIApplicationDelegate>

typedef BOOL (^DTExternalWebAppDelegateProxyHandler)(NSURL* url);

- (id)initWithViewController:(UIViewController *)viewController handler:(DTExternalWebAppDelegateProxyHandler)handler;
- (void)cancel;

@end
