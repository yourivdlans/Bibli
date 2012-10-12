//
//  NewLevelViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "Worlds.h"
#import "Levels.h"

@interface NewLevelViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *levelTextField;
}

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UITextField *levelTextField;
@property (strong, nonatomic) Worlds *world;

- (void)dismissKeyboard;
- (IBAction)insertNewLevel:(id)sender;

@end
