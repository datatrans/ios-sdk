//
//  DTStatusRequestResponse.h
//  Datatrans
//
//  Created by Patrick Fompeyrine on 23.11.20.
//

#import <Datatrans/DTResponse.h>

@interface DTStatusRequestResponse : NSObject<DTResponse>

@property (nonatomic, assign) BOOL isEnrolled;
@property (nonatomic, copy) NSString* transactionId;

@end
