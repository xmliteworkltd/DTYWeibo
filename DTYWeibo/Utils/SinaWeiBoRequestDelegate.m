//
//  SinaWeiBoRequestDelegate.m
//  DTYWeibo
//
//  Created by xiangming on 14-8-29.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import "SinaWeiBoRequestDelegate.h"

@implementation SinaWeiBoRequestDelegate

+ (SinaWeiBoRequestDelegate *)getUserTimeLineDataByParams:(NSDictionary *)paramDic
                                              andCallBack:(ResultBlock )resultblock;
{
   SinaWeiBoRequestDelegate *sinaRequestDelegate =  [[SinaWeiBoRequestDelegate alloc] init];
    [sinaRequestDelegate startRequest];
    return sinaRequestDelegate;
}


//开始请求
- (void)startRequest
{
    
}


#pragma mark -  WeiboSDKDelegate
/**
 收到一个来自微博客户端程序的请求
 
 收到微博的请求后，第三方应用应该按照请求类型进行处理，处理完后必须通过 [WeiboSDK sendResponse:] 将结果回传给微博
 @param request 具体的请求对象
 */
- (void)didReceiveWeiboRequest:(WBBaseRequest *)request
{
    
}

/**
 收到一个来自微博客户端程序的响应
 
 收到微博的响应后，第三方应用可以通过响应类型、响应的数据和 WBBaseResponse.userInfo 中的数据完成自己的功能
 @param response 具体的响应对象
 */
- (void)didReceiveWeiboResponse:(WBBaseResponse *)response
{
    
}



#pragma mark - WBHttpRequestDelegate
/**
 收到一个来自微博Http请求的响应
 
 @param response 具体的响应对象
 */

- (void)request:(WBHttpRequest *)request didReceiveResponse:(NSURLResponse *)response
{
    
}

/**
 收到一个来自微博Http请求失败的响应
 
 @param error 错误信息
 */

- (void)request:(WBHttpRequest *)request didFailWithError:(NSError *)error
{
    
}

/**
 收到一个来自微博Http请求的网络返回
 
 @param result 请求返回结果
 */
- (void)request:(WBHttpRequest *)request didFinishLoadingWithResult:(NSString *)result
{
    
}

/**
 收到一个来自微博Http请求的网络返回
 
 @param data 请求返回结果
 */
- (void)request:(WBHttpRequest *)request didFinishLoadingWithDataResult:(NSData *)data
{
    
}


@end
