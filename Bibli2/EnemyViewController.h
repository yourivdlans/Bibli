//
//  EnemyViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "NewEnemyViewController.h"

#import "Levels.h"
#import "Enemies.h"

@interface EnemyViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) Levels *level;

@end
