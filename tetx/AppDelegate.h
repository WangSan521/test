//
//  AppDelegate.h
//  tetx
//
//  Created by 三哥哥 on 2019/3/7.
//  Copyright © 2019年 三哥哥. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

