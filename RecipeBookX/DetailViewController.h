//
//  DetailViewController.h
//  RecipeBookX
//
//  Created by elyps on 09/02/14.
//  Copyright (c) 2014 elyps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
