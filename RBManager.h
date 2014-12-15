//
//  RBCoreDataManager.h
//  CoreData - Home Work
//
//  Created by Roman Bogomolov on 14/12/14.
//  Copyright (c) 2014 Roman Bogomolov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface RBManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (RBManager*) sharedManager;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
