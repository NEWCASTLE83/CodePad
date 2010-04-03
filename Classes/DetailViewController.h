//
//  DetailViewController.h
//  CodePad
/*
 
 This work is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 United States License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/us/ or send a letter to 
 Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 
*/

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    
    UIPopoverController *popoverController;
    UIToolbar *toolbar;
    
    id detailItem;
    UILabel *detailDescriptionLabel;
}

@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) id detailItem;
@property (nonatomic, retain) IBOutlet UILabel *detailDescriptionLabel;

@end
