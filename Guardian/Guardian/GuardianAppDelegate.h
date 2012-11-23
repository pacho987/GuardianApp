//
//  GuardianAppDelegate.h
//  Guardian
//
//  Created by Diego Francisco Castillo Velasquez on 23/11/12.
//  Copyright (c) 2012 Diego Francisco Castillo Velasquez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GuardianAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
