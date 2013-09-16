//
//  EGOImageLoadingDemoAppDelegate.h
//  EGOImageLoadingDemo
//
//  Created by Shaun Harrison on 10/19/09.
//  Copyright enormego 2009. All rights reserved.
//

@interface EGOImageLoadingDemoAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@end

