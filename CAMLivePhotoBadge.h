/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:46 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMBadgeTextView.h>

@interface CAMLivePhotoBadge : CAMBadgeTextView {

	long long _irisMode;

}

@property (assign,nonatomic) long long irisMode;              //@synthesize irisMode=_irisMode - In the implementation block
-(id)_text;
-(id)_textAttributes;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(double)_cornerRadius;
-(UIEdgeInsets)_textInsets;
-(void)_updateFromIrisModeChange;
@end

