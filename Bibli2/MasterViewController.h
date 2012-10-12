//
//  MasterViewController.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/5/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

#import "WorldViewController.h"
#import "NewGameViewController.h"
#import "Games.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) Games *selectedGame;

@end
