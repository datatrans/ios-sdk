#import <Foundation/Foundation.h>

NS_SWIFT_NAME(PPRiskComponentManager)
@interface DTPPRiskComponentManager : NSObject

+ (nonnull NSString *)collectAndSubmit;
+ (nonnull NSString *)collectAndSubmitWithExistingClientMetadataId:(nonnull NSString *)existingClientMetadataId NS_SWIFT_NAME(collectAndSubmit(existingClientMetadataId:));
@property (class, nonatomic, readonly) BOOL hasPPRiskMagnes;

@end
