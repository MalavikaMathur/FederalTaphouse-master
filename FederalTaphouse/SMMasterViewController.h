//
//  SMMasterViewController.h
//  FederalTaphouse
//
//  Created by Malavika Mathuron 9/7/14.
//  Copyright (c) 2014 softwaremerchant. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import "CATEGORY.h"

@interface SMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
- (IBAction)refresh:(id)sender;
@property CATEGORY *selectedCategory;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

-(void)loadImageIntoTable:(UIImageView *) imageView;
-(NSString *)findIfNew:(NSString *)date;
@end
