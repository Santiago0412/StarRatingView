//
//  ViewController.m
//  CWStarRatingViewDemo
//
//  Created by WANGCHAO on 14/11/8.
//  Copyright (c) 2014年 wangchao. All rights reserved.
//

#import "ViewController.h"
#import "ViewController.h"
#import "CWStarRateView.h"

@interface ViewController ()
@property (strong, nonatomic) CWStarRateView *starRateView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.starRateView = [[CWStarRateView alloc] initWithFrame:CGRectMake(10, 100, 300, 40) numberOfStars:5];
    self.starRateView.scorePercent = 1;
    self.starRateView.starType = StarTypeHalf;
    self.starRateView.hasAnimation = YES;
    [self.view addSubview:self.starRateView];
}

@end
