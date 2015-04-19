//
//  CircleClickView.h
//  CircleClickView
//
//  Created by guodong on 15/4/18.
//  Copyright (c) 2015年 guodong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CircleClickView : UIView

@property (nonatomic,strong) NSMutableArray *contentArray;

@property (nonatomic,strong) NSMutableArray *pathArray;

@property (nonatomic,strong) NSMutableArray *edgePathArray;

@property (nonatomic,assign) int clickWhich;

@property (nonatomic,assign) BOOL isClickCenter;

-(CGMutablePathRef)createPath:(CGMutablePathRef)path withAngle:(float)angle1 andAngle:(float)angle2 andCenter:(CGPoint)center andRadius:(float)radius;

-(CGMutablePathRef)createEdgePathwithAngle:(float)angle1 andAngle:(float)angle2 andCenter:(CGPoint)center andRadius:(float)radius;

typedef void (^EdgeSelectBlock)(int which);

typedef void (^CenterSelectBlock)(void);

- (id)initWithFrame:(CGRect)frame andCompletionHandler:(EdgeSelectBlock)edgeBlock andCenterBolock:(CenterSelectBlock)centerBlock;

@property (nonatomic,weak) EdgeSelectBlock edgeBlock;
@property (nonatomic,weak) CenterSelectBlock centerBlock;
@end
