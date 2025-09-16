//
//  DTDccServiceResponse.h
//  Datatrans
//
//  Created by Serhii Libin on 09.08.23.
//

#import <Datatrans/DTResponse.h>

@interface DTDCCServiceResponse : NSObject<DTResponse>

@property (nonatomic, nullable, copy) NSString* dccId;
@property (nonatomic, nullable, copy) NSString* dccAmount;
@property (nonatomic, nullable, copy) NSString* dccCurrency;
@property (nonatomic, nullable, copy) NSString* dccRate;
@property (nonatomic, nullable, copy) NSString* dccMarkupPercentage;

@end
