//
//  GuardianMainViewController.h
//  Guardian
//
//  Created by Diego Francisco Castillo Velasquez on 23/11/12.
//  Copyright (c) 2012 Diego Francisco Castillo Velasquez. All rights reserved.
//

#import "GuardianFlipsideViewController.h"

@interface GuardianMainViewController : UIViewController <GuardianFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
