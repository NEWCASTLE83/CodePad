//
//  CodePadAppDelegate.h
//  CodePad
//
//  Created by Ze'ev Klapow on 8/20/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>

@class RootViewController;

@class DetailViewController;

@interface CodePadAppDelegate : NSObject <UIApplicationDelegate> {

    UIWindow *window;

    UISplitViewController *splitViewController;
    RootViewController *rootViewController;
    DetailViewController *detailViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet UISplitViewController *splitViewController;

@property (nonatomic, retain) IBOutlet RootViewController *rootViewController;

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end

