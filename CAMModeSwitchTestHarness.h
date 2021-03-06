/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:47 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMPerformanceTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredMode;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3 ;
-(void)runConfiguredTest;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3 ;
-(void)ensureCaptureMode:(long long)arg1 thenPerform:(/*^block*/id)arg2 ;
@end

