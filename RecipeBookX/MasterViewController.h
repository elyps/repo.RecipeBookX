//
//  MasterViewController.h
//  RecipeBookX
//
//  Created by elyps on 09/02/14.
//  Copyright (c) 2014 elyps. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
