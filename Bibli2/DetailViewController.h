//
//  DetailViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/5/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
