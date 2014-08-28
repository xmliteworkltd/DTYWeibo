//
//  SinaWeiBoRequestDelegate.h
//  DTYWeibo
//
//  Created by xiangming on 14-8-29.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeiboSDK.h"

//所有接口请求数据回调block

typedef void^(ResultBlock)(id result);

/***
 新浪微博接口宏定义
 
 ****/


//授权回调地址
#define kRedirectURL @"https://api.weibo.com/oauth2/default.html"

//获取当前登录用户及其所关注用户的最新微博
#define kStatuses_Home_Timeline @"statuses/home_timeline"


@interface SinaWeiBoRequestDelegate : NSObject<WBHttpRequestDelegate,WeiboSDKDelegate>

@property (nonatomic, copy) ResultBlock resultblock;

//获取微博的方法
+ (SinaWeiBoRequestDelegate *)getUserTimeLineDataByParams:(NSDictionary *)paramDic andCallBack:(ResultBlock )resultblock;

//开始请求
- (void)startRequest;

@end
