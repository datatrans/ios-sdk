//
//  DTCardTokenRequestResponse.h
//  Datatrans
//
//  Created by Patrick Fompeyrine on 23.11.20.
//

#import <Datatrans/DTResponse.h>

@interface DTCardTokenRequestResponse : NSObject<DTResponse>

@property (nonatomic, copy) NSString* maskedCardNumber;
@property (nonatomic, copy) NSString* token;
@property (nonatomic, copy) NSString* transactionId;

@end
