//
//  DemandList.h
//  CoreDataUtil
//
//  Created by Norman Lau on 3/17/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Demand;

@interface DemandList : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *demands;
@end

@interface DemandList (CoreDataGeneratedAccessors)

- (void)addDemandsObject:(Demand *)value;
- (void)removeDemandsObject:(Demand *)value;
- (void)addDemands:(NSSet *)values;
- (void)removeDemands:(NSSet *)values;

@end
