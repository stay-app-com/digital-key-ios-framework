//
//  DigitalKeyProviderOutputProtocol.h
//  StayWeex
//
//  Created by Alberto Moraga on 28/9/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DigitalKeyProviderOutputProtocol <NSObject>

- (void)startupCompleted;
- (void)startupCompletedFailed;
- (void)startupCompletedFailedError:(NSString *)error;
- (void)startupCompletedInvitationCode;
- (void)startupCompletedFailedInvitationCode;
- (void)startupCompletedFailedErrorInvitationCode:(NSString *)error;
- (void)firstStepRegistrationCompleted;
- (void)registrationCompleted;
- (void)registrationFailed:(NSError *)error;
- (void)reloadKeysCompleted:(NSArray *)keys;
- (void)reloadKeysFailed:(NSString *)error;
- (void)doorAccessGranted;
- (void)doorAccessRejected:(NSString *)error;
- (void)doorAccessGrantedD;
- (void)doorAccessRejectedD:(NSString *)error;

@end
