//
//  KFDispatcher.h
//  SampleSDKApp
//
//  Created by admin on 15/4/1.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KFAgent;
@class KFError;
@class KFMessage;
@class KFUser;
@interface KFDispatcher : NSObject

/**
 *  NavBarButton的显示方式
 */
typedef enum{
    KFNavBarUITypeLocalizedLabel = 0,   //NavBarButton设置为文字
    KFNavBarUITypeImage                 //NavBarButton设置为图片
}KFNavBarUIType;

/**
 *  文档展示方式
 */
typedef  enum{
    KFHelpCenterTypeDefault = 0,  // 使用默认,默认使用KFHelpCenterTypeCategory
    KFHelpCenterTypeCategory,     // 展示分区列表
    KFHelpCenterTypeForum,        // 直接展示所有分类列表
    KFHelpCenterTypePost,         // 直接展示所有文档列表
}KFHelpCenterType;

/**
 *  消息发送状态
 */
typedef enum {
    kMessageStatusSending = 0,
    kMessageStatusSuccess,
    kMessageStatusFailure
}kMessageStatus;
/**
 *  消息类型
 */
typedef enum {
    kMessageTypeText = 0,
    kMessageTypeImage,
    kMessageTypeVoice,
    kMessageTypeSystem,
    kMessageTypeOther
}kMessageType;
/**
 *  消息来自于
 */
typedef enum {
    kMessageFromMe = 0,
    kMessageFromOther
}kMessageFrom;


/**
 * API success block.
 */
typedef void (^KFAPISuccess) (NSDictionary *result);

typedef void (^KFAPIDownloadVoiceSuccess) (KFMessage *message);


typedef void (^KFInitSuccess) (KFUser *user);

/**
 * API error block
 */
typedef void (^KFAPIError) (KFError *error);
/**
 *  API progress block
 */
typedef void  (^KFAPIUploadProgress)(NSProgress * progress);

/**
 *  点击BarButton的回调
 */
typedef void (^KFBarButtonActionBlock)();


typedef void (^KFChatMessageCompletion)(KFError *error,KFMessage *message);

typedef void (^KFChatGetHistoryCompletion)(KFError *error,NSArray *history);

typedef void (^KFChatGetAgentCompletion)(KFError *error,KFAgent *agent);

typedef void (^KFChatCompletion)(KFError *error);

@end
