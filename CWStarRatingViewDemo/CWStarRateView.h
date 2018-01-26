//
//  CWStarRateView.h
//  StarRateDemo
//
//  Created by WANGCHAO on 14/11/4.
//  Copyright (c) 2014年 wangchao. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_OPTIONS(NSUInteger, StarType) {
    StarTypeIncomplete = 1 << 0,
    StarTypeHalf = 1 << 1,
    StarTypeComplete = 1 << 2,
};

@class CWStarRateView;
@protocol CWStarRateViewDelegate <NSObject>
@optional
- (void)starRateView:(CWStarRateView *)starRateView scroePercentDidChange:(CGFloat)newScorePercent;
@end

@interface CWStarRateView : UIView

@property (nonatomic, assign) CGFloat scorePercent;//得分值，范围为0--1，默认为1
@property (nonatomic, assign) BOOL hasAnimation;//是否允许动画，默认为NO
@property (nonatomic, assign) StarType starType;//评分时星星类型

@property (nonatomic, weak) id<CWStarRateViewDelegate>delegate;

- (instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars;

@end

