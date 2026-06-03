//
//  DTAppDelegateProxy.h
//  Datatrans
//
//  Created by Serhii Libin on 08.08.2024.
//

#import <UIKit/UIKit.h>

@interface DTAppDelegateProxy : NSObject<UIApplicationDelegate>

typedef BOOL (^DTAppDelegateProxyURLHandler)(NSURL* url);
typedef BOOL (^DTAppDelegateProxyUserActivityHandler)(NSUserActivity* userActivity);

- (id)initWithViewController:(UIViewController *)viewController urlHandler:(DTAppDelegateProxyURLHandler)urlHandler userActivityHandler:(DTAppDelegateProxyUserActivityHandler)userActivityHandler;
- (void)cancel;

@end
