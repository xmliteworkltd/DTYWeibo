//
//  JPBaseViewController.m
//  DTYWeibo
//
//  Created by xiangming on 14-8-6.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import "JPBaseViewController.h"

@interface JPBaseViewController ()

@end

@implementation JPBaseViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Setters
- (void)setIsBackButton:(BOOL)isBackButton
{
    _isBackButton = isBackButton;
    if(_isBackButton){
        UIButton *backButton = [UIButton buttonWithType:UIButtonTypeCustom];
        backButton.frame = CGRectMake(0, 44.0/2-30.0/2.0, 23,23);
        [backButton setImage:[UIImage imageNamed:@"button_back.png"] forState:UIControlStateNormal];
        [backButton addTarget:self action:@selector(backAction) forControlEvents:UIControlEventTouchUpInside];
        
        [backButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        UIBarButtonItem *leftItem = [[UIBarButtonItem alloc] initWithCustomView:backButton];
        self.navigationItem.leftBarButtonItem = leftItem;
    }
}



//模态视图返回
- (void)setIsCancelButton:(BOOL)isCancelButton
{
    _isCancelButton = isCancelButton;
    if(_isCancelButton){
        _cancleButton = [UIButton buttonWithType:UIButtonTypeCustom];
        _cancleButton.frame = CGRectMake(0, 44.0/2-30.0/2.0, 23, 23);
        [_cancleButton addTarget:self action:@selector(cancelAction) forControlEvents:UIControlEventTouchUpInside];
        [_cancleButton setImage:[UIImage imageNamed:@"button_chazi.png"] forState:UIControlStateNormal];
        UIBarButtonItem *leftItem = [[UIBarButtonItem alloc] initWithCustomView:_cancleButton];
        self.navigationItem.leftBarButtonItem = leftItem;
        
    }
}

- (void)backAction
{
    [self.navigationController popViewControllerAnimated:YES];
}


- (void)cancelAction
{
    
    [self dismissViewControllerAnimated:YES completion:NULL];
    
}

@end
