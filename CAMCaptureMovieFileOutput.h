/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:46 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureMovieFileOutput.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, AVCaptureFileOutputRecordingDelegate;
@class CAMCaptureEngine, NSObject, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate> {

	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __userInfoQueue;
	NSMutableDictionary* __userInfoBySettingsID;
	NSMutableArray* __removeOnCompletionSettingsIDs;
	NSDictionary* _currentUserInfo;
	NSDictionary* _userInfoForNextCapture;
	id<AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;

}

@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                   //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _userInfoQueue;                                //@synthesize _userInfoQueue=__userInfoQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _userInfoBySettingsID;                                //@synthesize _userInfoBySettingsID=__userInfoBySettingsID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _removeOnCompletionSettingsIDs;                            //@synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * currentUserInfo;                                                 //@synthesize currentUserInfo=_currentUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForNextCapture;                                          //@synthesize userInfoForNextCapture=_userInfoForNextCapture - In the implementation block
@property (assign,nonatomic,__weak) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate;              //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)stopRecording;
-(CAMCaptureEngine *)_captureEngine;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(void)_userInfoQueueIncrementSettingsID;
-(NSDictionary *)userInfoForNextCapture;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
-(void)setWrappedDelegate:(id<AVCaptureFileOutputRecordingDelegate>)arg1 ;
-(void)_incrementSettingsIDAndStoreCaptureUserInfo;
-(NSDictionary *)currentUserInfo;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSMutableArray *)_removeOnCompletionSettingsIDs;
-(id<AVCaptureFileOutputRecordingDelegate>)wrappedDelegate;
-(id)initWithEngine:(id)arg1 ;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
@end

