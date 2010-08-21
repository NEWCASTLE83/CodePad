//
//  CodePadAppDelegate.m
//  CodePad
//
//  Created by Ze'ev Klapow on 8/20/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#import "CodePadAppDelegate.h"

@implementation CodePadAppDelegate


@synthesize window;

@synthesize splitViewController;

@synthesize rootViewController;

@synthesize detailViewController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    // Override point for customization after application launch.
    // Add the split view controller's view to the window and display.
    [window addSubview:splitViewController.view];
    [window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application {

    // Save data if appropriate.
}

- (void)dealloc {

    [window release];
    [splitViewController release];
    [rootViewController release];
    [detailViewController release];
    [super dealloc];
}

@end

