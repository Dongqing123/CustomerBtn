//
//  UIButton+douleClick.h
//  zztest
//
//  Created by YZ on 2018/4/26.
//  Copyright © 2018年 YZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (douleClick)
#define defaultInterval 0.5//默认时间间隔
@property(nonatomic,assign)NSTimeInterval timeInterval;//用这个给重复点击加间隔

@property(nonatomic,assign)BOOL isIgnoreEvent;//YES不允许点击NO允许点击
@end
