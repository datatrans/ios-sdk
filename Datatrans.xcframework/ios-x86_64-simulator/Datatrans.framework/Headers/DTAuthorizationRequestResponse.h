//
//  DTAuthorizationRequestResponse.h
//  Datatrans
//
//  Created by Patrick Fompeyrine on 23.11.20.
//

#import <Datatrans/DTResponse.h>

@interface DTAuthorizationRequestResponse : NSObject<DTResponse>

@property (nonatomic, assign) NSInteger responseCode;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *>* responseInfo; // optional info (maskedCC etc.), in case of split authorization
@property (nonatomic, copy) NSString* transactionId;

@end
