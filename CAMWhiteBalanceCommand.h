/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:47 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {

	BOOL __matchExposureMode;
	long long __whiteBalanceMode;

}

@property (nonatomic,readonly) BOOL _matchExposureMode;                  //@synthesize _matchExposureMode=__matchExposureMode - In the implementation block
@property (nonatomic,readonly) long long _whiteBalanceMode;              //@synthesize _whiteBalanceMode=__whiteBalanceMode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithWhiteBalanceMode:(long long)arg1 ;
-(id)initWithMatchExposureMode;
-(long long)_whiteBalanceMode;
-(BOOL)_matchExposureMode;
-(id)_descriptionForWhiteBalanceMode:(long long)arg1 ;
@end

