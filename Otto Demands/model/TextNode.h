//
//  TextNode.h
//  CoreDataUtil
//
//  Created by Norman Lau on 3/17/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "DemandNode.h"


@interface TextNode : DemandNode

@property (nonatomic, retain) NSString * text;

@end
