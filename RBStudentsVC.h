//
//  RBStudentsVC.h
//  CoreData - Home Work
//
//  Created by Roman Bogomolov on 14/12/14.
//  Copyright (c) 2014 Roman Bogomolov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RBFetchedVC.h"

@interface RBStudentsVC : RBFetchedVC

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
