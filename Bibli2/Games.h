//
//  Games.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/11/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Worlds;

@interface Games : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *worlds;
@end

@interface Games (CoreDataGeneratedAccessors)

- (void)addWorldsObject:(Worlds *)value;
- (void)removeWorldsObject:(Worlds *)value;
- (void)addWorlds:(NSSet *)values;
- (void)removeWorlds:(NSSet *)values;

@end
