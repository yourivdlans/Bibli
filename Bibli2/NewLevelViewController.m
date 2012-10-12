//
//  NewLevelViewController.m
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import "NewLevelViewController.h"

@interface NewLevelViewController ()

@end

@implementation NewLevelViewController

@synthesize levelTextField;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    // Hide keyboard on view press
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dismissKeyboard)];
    tap.cancelsTouchesInView = NO;
    [self.view addGestureRecognizer:tap];
    
    [self fetchedResultsController];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)dismissKeyboard {
    [levelTextField resignFirstResponder];
}

- (IBAction)insertNewLevel:(id)sender
{
    NSString *tmp = [self.levelTextField text];
    
    if ( tmp.length > 0 )
    {
        Levels *level = [NSEntityDescription insertNewObjectForEntityForName:@"Levels"
                                                    inManagedObjectContext:self.managedObjectContext];
        
        level.name = tmp;
        [level setWorld:self.world];
        
        // Save the context.
        NSError *error = nil;
        if (![self.managedObjectContext save:&error]) {
            // Replace this implementation with code to handle the error appropriately.
            // abort() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development.
            NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
            abort();
        }
        
        [self.navigationController popViewControllerAnimated:YES];
    }
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self insertNewLevel:textField];
    
    return YES;
}

@end
