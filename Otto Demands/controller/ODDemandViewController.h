//
//  ODDemandViewController.h
//  Otto Demands
//
//  Created by Norman Lau on 5/27/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ODDemandViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;

@property (strong,nonatomic) NSArray *subjectLists;

@property (strong, nonatomic) IBOutlet UITableView *speechBubble;

- (IBAction) refresh;

@end
