//
//  MasterViewController.h
//  ControllingSource
//
//  Created by EC-IMAC on 14-2-12.
//  Copyright (c) 2014年 EC-Byron. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
