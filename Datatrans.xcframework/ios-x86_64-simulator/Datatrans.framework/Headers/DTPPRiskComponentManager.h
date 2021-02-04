//
//  DTPPRiskComponentManager.h
//  datatrans-iphone
//
//  Created by Basil Achermann on 20.02.18.
//

#import<Foundation/Foundation.h>


@interface DTPPRiskComponentManager : NSObject

//
// The returned instance must be kept while the PP risk component is being used, i.e. during the complete PAP process.
// Release the instance at the end of the process to also dealloc the PP shared component
- (instancetype)initWithPairingId:(NSString *)pairingId;

+ (NSString *)uniquePairingId;

@end
