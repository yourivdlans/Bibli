//
//  NewGameViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/5/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "Games.h"

@interface NewGameViewController : UIViewController <UITextFieldDelegate, NSFetchedResultsControllerDelegate>
{
    UITextField *gameTextField;
}

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UITextField *gameTextField;

- (void)dismissKeyboard;
- (IBAction)insertNewGame:(id)sender;

@end
