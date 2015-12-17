/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:47 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMCaptureResponse : NSObject {

	unsigned short _sessionIdentifier;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id)init;
-(unsigned short)sessionIdentifier;
-(long long)type;
-(id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)releaseCachedImages;
@end

