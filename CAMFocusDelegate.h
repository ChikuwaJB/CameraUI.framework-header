/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:48 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMFocusDelegate <NSObject>
@optional
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;

@required
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;

@end

