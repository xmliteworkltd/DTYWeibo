//
//  JPAppDelegate.h
//  DTYWeibo
//
//  Created by xiangming on 14-8-4.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPAppDelegate : UIResponder <UIApplicationDelegate,WeiboSDKDelegate>
{
    NSString* wbtoken;//授权后获取到的token
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSString *wbtoken;

@end
