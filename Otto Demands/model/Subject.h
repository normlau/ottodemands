//
//  Subject.h
//  CoreDataUtil
//
//  Created by Norman Lau on 3/17/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SubjectList;

@interface Subject : NSManagedObject

@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) SubjectList *parentList;

@end
