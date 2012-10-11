//
//  Enemies.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/11/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Levels;

@interface Enemies : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Levels *level;

@end
