//
//  WorldViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/9/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "NewWorldViewController.h"
#import "LevelViewController.h"
#import "Games.h"
#import "Worlds.h"

@interface WorldViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) Games *game;
@property (strong, nonatomic) Worlds *selectedWorld;

@end
