//
//  DTCardAliasRequestResponse.h
//  Datatrans
//
//  Created by Patrick Fompeyrine on 23.11.20.
//

#import <Datatrans/DTResponse.h>

@interface DTCardAliasRequestResponse : NSObject <DTResponse>

@property (nonatomic, copy) NSString* alias;
@property (nonatomic, copy) NSString* maskedCardNumber;
@property (nonatomic, copy) NSString* transactionId;

@end
