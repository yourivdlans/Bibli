//
//  Levels.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/11/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Enemies, Worlds;

@interface Levels : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *enemies;
@property (nonatomic, retain) Worlds *world;
@end

@interface Levels (CoreDataGeneratedAccessors)

- (void)addEnemiesObject:(Enemies *)value;
- (void)removeEnemiesObject:(Enemies *)value;
- (void)addEnemies:(NSSet *)values;
- (void)removeEnemies:(NSSet *)values;

@end
