//
//  NewEnemyViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "Enemies.h"
#import "Levels.h"

@interface NewEnemyViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *enemyTextField;
}

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UITextField *enemyTextField;
@property (strong, nonatomic) Levels *level;

- (void)dismissKeyboard;
- (IBAction)insertNewEnemy:(id)sender;

@end
