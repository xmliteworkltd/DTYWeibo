//
//  WeiBoMacro.h
//  DTYWeibo
//
//  Created by xiangming on 14-8-6.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#ifndef DTYWeibo_WeiBoMacro_h
#define DTYWeibo_WeiBoMacro_h



/**
 *
 * 方法简化名
 *
 **/
#pragma mark - 方法简化名

#define Version                         [[[UIDevice currentDevice] systemVersion] floatValue]       //获取当前设备的版本
#define DefaultValueForKey(key)         [[NSUserDefaults standardUserDefaults] valueForKey:key]     //从defaults中取值
#define SetValueForKey(dic,value,key)   [dic setValue:value forKey:key];                            //给字典设置键值对
#define DoubleToString(x)               [NSString stringWithFormat:@"%f",x]                         //double类型转string类型
#define IntToString(x)                  [NSString stringWithFormat:@"%d",x]                         //int类型转string类型

#define IOS5                            [[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0
#define IOS6                            [[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0
#define IOS7                            [[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0

#define Color(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]                //获取颜色的方法
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

/**
 *
 * 适配使用的常量、通用颜色
 *
 **/
#pragma mark - 常量

#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height

#define kToolBarHeight  44
#define KStateBarHeight 20
#define kTabBarHeight   49
#define kShowHeight kHeight - kToolBarHeight - KStateBarHeight

#define kSideViewControllerWidth 220

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)


#define kTextAlignmentLeft IOS6 ? NSTextAlignmentLeft : UITextAlignmentLeft
#define kTextAlignmentRight IOS6 ? NSTextAlignmentRight : UITextAlignmentRight
#define kTextAlignmentCenter IOS6 ? NSTextAlignmentCenter : UITextAlignmentCenter

/**
 *
 * 第三方Key
 *
 **/
#pragma mark - Key Value

#define kBaiduKey   @"93SFF9TzPHmhLEmlcnnorfYG"

#define KWeiChatAppID      @"wx8804553b2244e8a2"
#define KWeiChatAppSecret  @"6fe8a9621a242e9c458c61d7d9fddda6"

#define KTencentQQAppID      @"QQ41A2F110"
#define KTencentQQTenAppID      @"1101197584"

#define KTencentQQAppKey  @"2nOZnzqBzhL9Zl78"

#define KUMAppID      @"53d8bf2efd98c5a1a400000c"



#define kAppKey         @"210603908"
#define kAppSecret      @"a5db86bcedee7715b01515da3297347c"
#define kRedirectURI    @"http://www.baidu.com"
/**
 *
 * 保存文件的文件名
 *
 **/
#pragma mark - 保存文件的文件名







/**
 *
 * 保存数据等键/值
 *
 **/
#pragma mark - 保存数据等键/值








/**
 *
 * 通知名称
 *
 **/
#pragma mark- 通知名称











/**
 *
 * 网络数据接口
 *
 **/
#pragma mark - 网络数据接口

//base url
#define kBaseAppUrl                @"http://182.92.68.65"



// 获得颜色
#define kGetColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define kGlobalBg kGetColor(46, 46, 46)

// 获取Dock的高度
#define kDockHeight(orientation) ((UIInterfaceOrientationIsLandscape(orientation)?[UIScreen mainScreen].bounds.size.width:[UIScreen mainScreen].bounds.size.height) - 20)

/*
 Compose里面item的宽高
 */
// 横屏的宽度
#define kDockComposeItemWidthL 90
// 横屏的高度
#define kDockComposeItemHeightL kDockComposeItemWidthL

// 竖屏的宽度
#define kDockComposeItemWidthP 60
// 竖屏的高度
#define kDockComposeItemHeightP kDockComposeItemWidthP

/*
 Menu里面Item的宽高
 */
#define kDockMenuItemHeight kDockComposeItemHeightP




#endif
