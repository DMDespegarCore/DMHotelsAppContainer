//
//  AppDelegate.h
//  DMHotels
//
//  Created by Matias Servetto on 6/28/15.
//  Copyright (c) 2015 Despegar.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DMHotelsFoundation/DMXSellingManager.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (DMXSellingManager *)xSellingManager;
@end

