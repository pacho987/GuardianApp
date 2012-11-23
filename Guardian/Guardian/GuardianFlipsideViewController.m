//
//  GuardianFlipsideViewController.m
//  Guardian
//
//  Created by Diego Francisco Castillo Velasquez on 23/11/12.
//  Copyright (c) 2012 Diego Francisco Castillo Velasquez. All rights reserved.
//

#import "GuardianFlipsideViewController.h"

@interface GuardianFlipsideViewController ()

@end

@implementation GuardianFlipsideViewController

- (void)awakeFromNib
{
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
