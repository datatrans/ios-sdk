//
//  DTBasicAPMAppDelegateProxy.h
//  Datatrans
//
//  Created by Serhii Libin on 22.05.23.
//

#import <Foundation/Foundation.h>

typedef BOOL (^DTBasicAPMAppDelegateProxyHandler)(NSURL* url);

@interface DTBasicAPMAppDelegateProxy : NSObject<UIApplicationDelegate>

- (id)initWithViewController:(UIViewController *)viewController handler:(DTBasicAPMAppDelegateProxyHandler)handler ;
- (void)uninstallProxies;

@end
