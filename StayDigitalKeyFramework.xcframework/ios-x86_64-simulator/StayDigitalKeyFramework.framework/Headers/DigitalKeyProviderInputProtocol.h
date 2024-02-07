//
//  DigitalKeyProviderInputProtocol.h
//  StayWeex
//
//  Created by Alberto Moraga on 28/9/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DigitalKeyProviderInputProtocol <NSObject>

- (void)startProcess;

- (BOOL)isUserRegistered;
- (BOOL)needsMobilePhoneRegistration;
- (BOOL)needsEmailRegistration;
- (BOOL)needsSMSConfirmation;
- (BOOL)needsBlockButtonDesactive;
- (BOOL)hasMobilePhoneStored;
- (void)reloadKeys;
- (void)activateKeyWithIndex:(NSInteger)indexKey withError:(NSError **)error;
- (void)deactivateKeyWithIndex:(NSInteger)indexKey withError:(NSError **)error;

@optional
- (void)setPhoneNumber:(NSString *)number;
- (NSString *)storedMobilePhone;
- (void)setEmail:(NSString *)email;
- (void)setInvitationCode:(NSString *)code;
- (void)setSMSCode:(NSString *)smsCode;
- (void)resendSMSCode;


@end
