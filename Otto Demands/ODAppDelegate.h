//
//  ODAppDelegate.h
//  Otto Demands
//
//  Created by Norman Lau on 5/27/13.
//  Copyright (c) 2013 Norman Lau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ODAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
