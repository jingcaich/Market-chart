//
//  DXkLineModelConfig.h
//  DXChart
//
//  Created by caijing on 17/2/23.
//  Copyright © 2017年 caijing. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
#import "DXkLineModel.h"

@interface DXkLineModelConfig : NSObject

@property (nonatomic, assign) NSInteger maxVolume; // 保存最大交易量
@property (nonatomic, assign) CGFloat painterHeight; // 总的高度
@property (nonatomic, assign) CGFloat painterTopHeight; // 上部分的高度
@property (nonatomic, assign) CGFloat painterBottomHeight; // 下部分的高度
@property (nonatomic, assign) CGFloat painterMidGap; // 中间间隙
@property (nonatomic, assign) CGFloat painterWidth; // 画布宽度
@property (nonatomic, assign) CGFloat painterBottomToTop;
@property (nonatomic, assign) CGFloat layerToLayerGap; // layer之间的间隙
@property (nonatomic, assign) CGFloat scale; // 目前的缩放比例
@property (nonatomic, assign) CGFloat kLineWidth; // k线宽
@property (nonatomic, assign) CGFloat kOriginLineWidth; //初始K线宽度
@property (nonatomic, assign) CGFloat topMargin; // 成交量图top的余白
@property (nonatomic, assign) CGFloat MALineWidth; // MA线或者dif线等线的宽度

@property (nonatomic,assign) CGFloat scaleBound; // 触发缩放最小距离0.03f
@property (nonatomic,assign) CGFloat ScaleFactor; //缩放因子 0.03f

@property (nonatomic,assign) CGFloat maxScale; 
@property (nonatomic,assign) CGFloat minScale;

// 正负颜色
@property (nonatomic, strong) UIColor *positiveColor;
@property (nonatomic, strong) UIColor *negativeColor;
// MA相关颜色
@property (nonatomic, strong) UIColor *ma5Color;
@property (nonatomic, strong) UIColor *ma10Color;
@property (nonatomic, strong) UIColor *ma20Color;
@property (nonatomic, strong) UIColor *ma30Color;
// MACD相关颜色
@property (nonatomic, strong) UIColor *difColor;
@property (nonatomic, strong) UIColor *deaColor;

// KLine相关
@property (nonatomic, assign) CGFloat maxHigh;
@property (nonatomic, assign) CGFloat minLow;

@property (nonatomic, assign) CGFloat highest; // (max high - min low) / 6 + max high. 
@property (nonatomic, assign) CGFloat lowest; // min low - (max high - min low)/ 6.

@property (nonatomic, assign) CGFloat macdHighest;
@property (nonatomic, assign) CGFloat macdLowest;

+ (instancetype)sharedInstance;

- (UIColor *)getBgColorWithLineType:(DXLineType)lineType;
- (CGFloat)getXPositionWithIndex:(NSInteger)index;
- (CGFloat)getPriceWithYPosition:(CGFloat)y;
- (NSString *)getDateWithIndex:(NSInteger)index;

@end
