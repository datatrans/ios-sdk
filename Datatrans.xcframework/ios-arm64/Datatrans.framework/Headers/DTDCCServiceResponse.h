//
//  DTDccServiceResponse.h
//  Datatrans
//
//  Created by Serhii Libin on 09.08.23.
//

#import <Datatrans/DTResponse.h>

@interface DTDCCServiceResponse : NSObject<DTResponse>

@property (nonatomic, nonnull, copy) NSString* transactionId;
@property (nonatomic, nullable, copy) NSString* dccAmount;
@property (nonatomic, nullable, copy) NSString* dccCurrency;
@property (nonatomic, nullable, copy) NSString* dccRate;
@property (nonatomic, nullable, copy) NSString* dccMarkupPercentage;

@end
