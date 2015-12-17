/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:44 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand {

	/*^block*/id __completionBlock;

}

@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_completionBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end

