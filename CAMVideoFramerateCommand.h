/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:46 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoFramerateCommand : CAMCaptureCommand {

	long long __videoConfiguration;

}

@property (nonatomic,readonly) long long _videoConfiguration;              //@synthesize _videoConfiguration=__videoConfiguration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_videoConfiguration;
-(id)initWithVideoConfiguration:(long long)arg1 ;
@end

