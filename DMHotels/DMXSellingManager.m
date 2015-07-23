//
//  DMXSellingManager.m
//  DMDespegar
//
//  Created by Nicolas Miyasato on 7/15/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import "DMXSellingManager.h"
#import <DeepLinkKit/DeepLinkKit.h>

@implementation DMXSellingManager

+(instancetype) sharedManager {
    static dispatch_once_t onceToken;
    static DMXSellingManager *mngr = nil;
    dispatch_once(&onceToken, ^{
        mngr = [[DMXSellingManager alloc] init];
    });
    
    return mngr;
}

- (void) boughtHotel:(NSDictionary *)hotelInfo {
    NSLog(@"la la la");
}

@end
