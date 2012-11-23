//
//  GuardianFlipsideViewController.h
//  Guardian
//
//  Created by Diego Francisco Castillo Velasquez on 23/11/12.
//  Copyright (c) 2012 Diego Francisco Castillo Velasquez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GuardianFlipsideViewController;

@protocol GuardianFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(GuardianFlipsideViewController *)controller;
@end

@interface GuardianFlipsideViewController : UIViewController

@property (weak, nonatomic) id <GuardianFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
