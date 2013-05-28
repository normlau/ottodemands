//
//  Demand.h
//  CoreDataUtil
//
//  Created by Norman Lau on 3/17/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DemandList, DemandNode;

@interface Demand : NSManagedObject

@property (nonatomic, retain) NSSet *nodes;
@property (nonatomic, retain) DemandList *parentList;
@end

@interface Demand (CoreDataGeneratedAccessors)

- (void)addNodesObject:(DemandNode *)value;
- (void)removeNodesObject:(DemandNode *)value;
- (void)addNodes:(NSSet *)values;
- (void)removeNodes:(NSSet *)values;

@end
