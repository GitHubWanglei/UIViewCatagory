//
//  UIView+Catagory.h
//  ViewShakeDemo
//
//  Created by lihongfeng on 16/7/18.
//  Copyright © 2016年 wanglei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Catagory)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

- (void)shake;

@end
