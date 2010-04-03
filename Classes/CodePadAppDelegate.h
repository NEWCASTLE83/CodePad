//
//  CodePadAppDelegate.h
//  CodePad
/*
 
 This work is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 United States License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/us/ or send a letter to 
 Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 
*/

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
