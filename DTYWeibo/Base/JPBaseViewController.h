//
//  JPBaseViewController.h
//  DTYWeibo
//
//  Created by xiangming on 14-8-6.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPBaseViewController : UIViewController

@property (nonatomic, assign) BOOL isBackButton; //判断是否需要返回
@property (nonatomic, assign) BOOL isCancelButton;//判断是否需要取消

@property (nonatomic,strong) UIButton *backButton;
@property (nonatomic,strong) UIButton *cancleButton;

//设为返回和取消两个按钮的方法为公有，便于子类重写
- (void)backAction;

- (void)cancelAction;


@end
