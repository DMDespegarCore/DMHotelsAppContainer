//
//  DMXSellingManager.h
//  DMDespegar
//
//  Created by Nicolas Miyasato on 7/15/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DMHotelsFoundation/DMHotelsFoundation.h>

@interface DMXSellingManager : NSObject <DMHotelXSellingProtocol>

+ (instancetype) sharedManager;

@end
