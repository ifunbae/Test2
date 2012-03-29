//
//  AppDelegate.h
//  UniversalTest
//
//  Created by 배 연성 on 12. 3. 29..
//  Copyright (c) 2012년 에스티큐브. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ContentController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) ContentController *contentController;
@end
