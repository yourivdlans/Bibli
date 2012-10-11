//
//  NewWorldViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/9/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "Games.h"
#import "Worlds.h"

@interface NewWorldViewController : UIViewController <UITextFieldDelegate, NSFetchedResultsControllerDelegate>
{
    UITextField *worldTextField;
}

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UITextField *worldTextField;
@property (strong, nonatomic) Games *game;

- (void)dismissKeyboard;
- (IBAction)insertNewWorld:(id)sender;

@end
