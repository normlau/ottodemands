//
//  SubjectList.h
//  CoreDataUtil
//
//  Created by Norman Lau on 5/5/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Subject;

@interface SubjectList : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSSet *subjects;
@end

@interface SubjectList (CoreDataGeneratedAccessors)

- (void)addSubjectsObject:(Subject *)value;
- (void)removeSubjectsObject:(Subject *)value;
- (void)addSubjects:(NSSet *)values;
- (void)removeSubjects:(NSSet *)values;

@end
