//
//  LevelViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "NewLevelViewController.h"

#import "Worlds.h"
#import "Levels.h"

@interface LevelViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) Worlds *world;
@property (strong, nonatomic) Levels *selectedLevel;

@end
