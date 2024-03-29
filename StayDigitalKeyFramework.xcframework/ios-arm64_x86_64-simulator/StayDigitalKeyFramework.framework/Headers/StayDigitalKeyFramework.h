//
//  StayDigitalKeyFramework.h
//  StayDigitalKeyFramework
//
//  Created by Alberto Moraga on 19/05/2021.
//  Copyright © 2021 Benoit PASQUIER. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for StayDigitalKeyFramework.
FOUNDATION_EXPORT double StayDigitalKeyFrameworkVersionNumber;

//! Project version string for StayDigitalKeyFramework.
FOUNDATION_EXPORT const unsigned char StayDigitalKeyFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <StayDigitalKeyFramework/PublicHeader.h>
#import <StayDigitalKeyFramework/DigitalKeyModule.h>
#import <StayDigitalKeyFramework/DigitalKeyEntity.h>
#import <StayDigitalKeyFramework/DigitalKeyProviderOutputProtocol.h>
#import <StayDigitalKeyFramework/DigitalKeyProviderInputProtocol.h>
#import <StayDigitalKeyFramework/DigitalKeyProviderFactory.h>
#ifdef INCLUDE_SALTO
#import <StayDigitalKeyFramework/DigitalKeySaltoManager.h>
#endif
#ifdef INCLUDE_ASSAABLOY
#import <StayDigitalKeyFramework/DigitalKeyAssaabloyManager.h>
#endif


