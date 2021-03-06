//
//  CellItem.h
//  QQ空间-HD
//
//  Created by apple on 13-9-12.
//  Copyright (c) 2013年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    CellItemTypeNone,                   
    CellItemTypeDisclosureIndicator,    
    CellItemTypeDetailDisclosureButton, 
    CellItemTypeCheckmark,
    CellItemTypeSwitch, // 扩充
    CellItemTypeButton
} CellItemType;

@interface CellItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *className;

// 点击了某一个行的回调
@property (nonatomic, copy) void (^cellClickBlock)(CellItem *item);
// cell上面的switch状态发生改变时回调
@property (nonatomic, copy) void(^switchChangeBlock)(CellItem *item);

@property (nonatomic, assign) CellItemType cellItemType;
@property (nonatomic, assign, getter = isOn) BOOL on;

+ (id)itemWithTitle:(NSString *)title cellItemType:(CellItemType)cellItemType;
@end
