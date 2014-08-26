//
//  BaseModel.h
//  DTYWeibo
//
//  Created by xiangming on 14-8-26.
//  Copyright (c) 2014年 JunePartner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel  : NSObject <NSCoding,NSCopying>

-(id)initWithDataDic:(NSDictionary*)data;

- (NSDictionary*)attributeMapDictionary;

- (void)setAttributes:(NSDictionary*)dataDic;

- (NSString *)customDescription;

- (NSString *)description;

- (NSData*)getArchivedData;

- (NSString *)cleanString:(NSString *)str;    //清除\n和\r的字符串

@end
