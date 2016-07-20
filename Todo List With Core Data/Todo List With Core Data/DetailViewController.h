//
//  DetailViewController.h
//  Todo List With Core Data
//
//  Created by Martin Zhang on 2016-07-20.
//  Copyright © 2016 Martin Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

