//
//  DTErrorHandlerDelegate.h
//  datatrans-iphone
//
//  Created by Patrick Fompeyrine on 08.10.20.
//

@protocol DTErrorHandlerDelegate <NSObject>

- (void)didHandleError:(nonnull NSError *)error;

@end
