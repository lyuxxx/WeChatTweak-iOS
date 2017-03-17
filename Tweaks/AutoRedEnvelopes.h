//
//  WeChatTweak.h
//
//  Created by Sunnyyoung on 2017/01/01.
//

@interface NSString (NSString_SBJSON)

- (id)JSONArray;
- (id)JSONDictionary;
- (id)JSONValue;

@end

@interface WCPayInfoItem: NSObject

@property(retain, nonatomic) NSString *m_c2cNativeUrl;

@end

@interface CMessageMgr : NSObject

- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;

@end

@interface CMessageWrap : NSObject

@property (nonatomic) NSUInteger m_uiMessageType;               // 消息类型
@property (retain, nonatomic) NSString* m_nsFromUsr;            // 发信人，可能是群或个人
@property (retain, nonatomic) NSString* m_nsToUsr;              // 收信人
@property (retain, nonatomic) NSString* m_nsContent;            // 消息内容
@property (retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;  // PayInfo
@property (assign, nonatomic) NSUInteger m_uiStatus;
@property (assign, nonatomic) NSUInteger m_uiCreateTime;

- (id)initWithMsgType:(long long)arg1;
+ (_Bool)isSenderFromMsgWrap:(id)arg1;

@end

@interface CContact: NSObject

@property(retain, nonatomic) NSString *m_nsUsrName;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl;

- (id)getContactDisplayName;

@end

@interface CContactMgr : NSObject

- (id)getSelfContact;

@end

@interface MMServiceCenter : NSObject

+ (instancetype)defaultCenter;
- (id)getService:(Class)service;

@end

@interface WCRedEnvelopesLogicMgr: NSObject

- (void)OpenRedEnvelopesRequest:(id)params;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;

@end

@interface WCBizUtil : NSObject

+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;

@end

@interface SKBuiltinBuffer_t : NSObject

@property(retain, nonatomic) NSData *buffer;
@property(nonatomic) unsigned int iLen;

@end

@interface HongBaoRes : NSObject

@property(retain, nonatomic) SKBuiltinBuffer_t *retText;

@end
