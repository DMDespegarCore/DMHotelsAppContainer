//
//  AppDelegate.h
//  DMHotels
//
//  Created by Matias Servetto on 6/28/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DMHotelsFoundation/DMHotelsFoundation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, DMHotelSellingProvider>

@property (strong, nonatomic) UIWindow *window;

@end

