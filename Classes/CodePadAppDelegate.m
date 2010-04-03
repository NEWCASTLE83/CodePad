//
//  CodePadAppDelegate.m
//  CodePad
/*
 
 This work is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 United States License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/us/ or send a letter to 
 Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 
*/

#import "CodePadAppDelegate.h"


#import "RootViewController.h"
#import "DetailViewController.h"


@implementation CodePadAppDelegate

@synthesize window, splitViewController, rootViewController, detailViewController;


#pragma mark -
#pragma mark Application lifecycle

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    
    // Add the split view controller's view to the window and display.
    [window addSubview:splitViewController.view];
    [window makeKeyAndVisible];
    
    return YES;
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Save data if appropriate
}


#pragma mark -
#pragma mark Memory management

- (void)dealloc {
    [splitViewController release];
    [window release];
    [super dealloc];
}


@end

