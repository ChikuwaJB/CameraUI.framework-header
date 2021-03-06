/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:48 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {

	CAMCaptureEngine* __engine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _engine;              //@synthesize _engine=__engine - In the implementation block
-(void)changeToDirection:(long long)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(CAMCaptureEngine *)_engine;
@end

