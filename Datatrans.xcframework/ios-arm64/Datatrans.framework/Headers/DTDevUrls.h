//
//  DTDevUrls.h
//  Datatrans
//
//  Created by Serhii Libin on 26.06.2024.
//

#import <Foundation/Foundation.h>
#import <Datatrans/DTUrlsProtocol.h>

@interface DTDevUrls : NSObject <DTUrlsProtocol>

- (nonnull instancetype)initWithDevHost:(nonnull NSString *)devHost;

@end
