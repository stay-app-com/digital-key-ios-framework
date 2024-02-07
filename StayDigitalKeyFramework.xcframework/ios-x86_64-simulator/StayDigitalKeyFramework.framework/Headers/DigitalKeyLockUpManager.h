//
//  DigitalKeyLockUpManager.h
//  StayWeex
//
//  Created by Alberto Moraga on 1/10/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DigitalKeyProviderInputProtocol.h"

@protocol DigitalKeyProviderOutputProtocol;
@interface DigitalKeyLockUpManager : NSObject <DigitalKeyProviderInputProtocol>

@property (nonatomic, weak) id<DigitalKeyProviderOutputProtocol> delegate;

- (id)initWithDelegate:(id<DigitalKeyProviderOutputProtocol>)delegate stayData:(NSDictionary *)stayData andConfigurationDetails:(NSDictionary *)configurationDetails;

@end
