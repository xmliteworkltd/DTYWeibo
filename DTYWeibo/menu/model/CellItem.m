//
//  CellItem.m
//  QQ空间-HD
//
//  Created by apple on 13-9-12.
//  Copyright (c) 2013年 itcast. All rights reserved.
//

#import "CellItem.h"

@implementation CellItem
+ (id)itemWithTitle:(NSString *)title cellItemType:(CellItemType)cellItemType
{
    CellItem *item = [[CellItem alloc] init];
    item.title = title;
    item.cellItemType = cellItemType;
    return item;
}

//- (id)init
//{
//    if (self = [super init]) {
//        _on = [[NSUserDefaults standardUserDefaults] boolForKey:_title];
//    }
//    return self;
//}

- (void)setTitle:(NSString *)title
{
    _title = title;
    
    // 读档
    _on = [[NSUserDefaults standardUserDefaults] boolForKey:title];
}

- (void)setOn:(BOOL)on
{
    _on = on;
    
    // 归档
    [[NSUserDefaults standardUserDefaults] setBool:on forKey:_title];
    [[NSUserDefaults standardUserDefaults] synchronize];
    
    // 调用block
    if (_switchChangeBlock) {
        _switchChangeBlock(self);
    }
}
@end
