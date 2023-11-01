//
//  DT2FARequestResponse.h
//  Datatrans
//
//  Created by Serhii Libin on 16.10.23.
//

#import <Datatrans/DTResponse.h>

@interface DT2FARequestResponse : NSObject<DTResponse>

@property (nonatomic, copy) NSString* transactionId;
@property (nonatomic, assign) BOOL requires2FAConfirmation;

@end
