//
//  Worlds.h
//  Bibli2
//
//  Created by Youri van der Lans on 10/11/12.
//  Copyright (c) 2012 Youri van der Lans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Games, Levels;

@interface Worlds : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Games *game;
@property (nonatomic, retain) NSSet *levels;
@end

@interface Worlds (CoreDataGeneratedAccessors)

- (void)addLevelsObject:(Levels *)value;
- (void)removeLevelsObject:(Levels *)value;
- (void)addLevels:(NSSet *)values;
- (void)removeLevels:(NSSet *)values;

@end
