//
//  DigitalKeySaltoManager.h
//  StayWeex
//
//  Created by Alberto Moraga on 28/9/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DigitalKeyProviderInputProtocol.h"

@protocol DigitalKeyProviderOutputProtocol;
@interface DigitalKeySaltoManager : NSObject <DigitalKeyProviderInputProtocol>

@property (nonatomic, weak) id<DigitalKeyProviderOutputProtocol> delegate;

- (id)initWithDelegate:(id<DigitalKeyProviderOutputProtocol>)delegate stayData:(NSDictionary *)stayData andConfigurationDetails:(NSDictionary *)configurationDetails;

@end
