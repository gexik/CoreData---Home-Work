//
//  RBFetchedVC.h
//  CoreData - Home Work
//
//  Created by Roman Bogomolov on 14/12/14.
//  Copyright (c) 2014 Roman Bogomolov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface RBFetchedVC : UITableViewController <NSFetchedResultsControllerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
