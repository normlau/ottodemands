//
//  DemandNode.h
//  CoreDataUtil
//
//  Created by Norman Lau on 3/17/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Demand;

@interface DemandNode : NSManagedObject

@property (nonatomic, retain) NSNumber * position;
@property (nonatomic, retain) Demand *parentDemand;

@end
