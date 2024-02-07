//
//  DigitalKeyAssaabloyManager.h
//  Vincci
//
//  Created by Antonio Jesús Oliva Tajuelo on 14/10/2019.
//  Copyright © 2019 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DigitalKeyProviderInputProtocol.h"

@protocol DigitalKeyProviderOutputProtocol;
@interface DigitalKeyAssaabloyManager : NSObject <DigitalKeyProviderInputProtocol>

@property (nonatomic, weak) id<DigitalKeyProviderOutputProtocol> delegate;

- (id)initWithDelegate:(id<DigitalKeyProviderOutputProtocol>)delegate stayData:(NSDictionary *)stayData andConfigurationDetails:(NSDictionary *)configurationDetails;

@end
