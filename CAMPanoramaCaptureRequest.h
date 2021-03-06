/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:48 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMPanoramaCaptureRequestDelegate;
@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	id<CAMPanoramaCaptureRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CAMPanoramaCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
@end

