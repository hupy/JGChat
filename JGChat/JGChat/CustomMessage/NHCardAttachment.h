//
//  NHCardAttachment.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/21.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTESCustomAttachmentDefines.h"

@interface NHCardAttachment : NSObject<NIMCustomAttachment,NTESCustomAttachmentInfo>

//名片的图片
@property(nonatomic, strong) NSString *identificantionImageUrl;

//名片的介绍
@property (nonatomic, strong) NSString *identificantionIntro;

//名片的电话
@property (nonatomic, strong) NSString *phoneNumber;

@end
