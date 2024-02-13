//
//  DigitalKeyProviderFactory.h
//  StayWeex
//
//  Created by Alberto Moraga on 1/10/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DigitalKeyProviderInputProtocol.h"
#import "DigitalKeyProviderOutputProtocol.h"

typedef NS_ENUM(NSUInteger, DigitalKeyProvider) {
    KABA_PROVIDER       = 1,
    ASSAABLOY_PROVIDER  = 2,
    SALTO_PROVIDER      = 3,
    UNKNOWN_PROVIDER    = 4
};

@interface DigitalKeyProviderFactory : NSObject

+ (id<DigitalKeyProviderInputProtocol>)createKeyManagerWithStayData:(NSDictionary *)stayData configurationDetails:(NSDictionary *)configurationDetails andDelegate:(id<DigitalKeyProviderOutputProtocol>)delegate;

@end
