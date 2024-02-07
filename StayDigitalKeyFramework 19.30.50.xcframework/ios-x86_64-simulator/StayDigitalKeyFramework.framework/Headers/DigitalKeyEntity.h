//
//  DigitalKeyEntity.h
//  StayWeex
//
//  Created by Alberto Moraga on 28/9/18.
//  Copyright © 2018 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DigitalKeyEntity : NSObject

@property (nonatomic, strong) NSString *checkin;
@property (nonatomic, strong) NSString *checkout;
@property (nonatomic, strong) NSString *room;
@property (nonatomic, strong) NSString *provider;
@property (nonatomic, strong) NSArray *doors;


- (NSDictionary *)jsonRepresentation;

@end
