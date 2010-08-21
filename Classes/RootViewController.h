//
//  RootViewController.h
//  CodePad
//
//  Created by Ze'ev Klapow on 8/20/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


@class DetailViewController;

@interface RootViewController : UITableViewController {
		
    DetailViewController *detailViewController;
}

		
@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end

