//
//  PillsTableViewController.h
//  PillReminderProject
//
//  Created by Damir Stuhec on 4/5/12.
//  Copyright (c) 2012 FERI Maribor, Slovenia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTableViewController.h"


@interface PillsTableViewController : CoreDataTableViewController

@property (nonatomic, strong) UIManagedDocument *pillDatabase;

@end