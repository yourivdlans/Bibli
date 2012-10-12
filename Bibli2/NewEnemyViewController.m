//
//  NewEnemyViewController.m
//  Bibli2
//
//  Created by Youri van der Lans on 10/12/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import "NewEnemyViewController.h"

@interface NewEnemyViewController ()

@end

@implementation NewEnemyViewController

@synthesize enemyTextField;

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
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)dismissKeyboard {
    [enemyTextField resignFirstResponder];
}

- (IBAction)insertNewEnemy:(id)sender
{
    NSString *tmp = [self.enemyTextField text];
    
    if ( tmp.length > 0 )
    {
        Enemies *enemy = [NSEntityDescription insertNewObjectForEntityForName:@"Enemies"
                                                    inManagedObjectContext:self.managedObjectContext];
        
        enemy.name = tmp;
        [enemy setLevel:self.level];
        
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
    [self insertNewEnemy:textField];
    
    return YES;
}

@end
