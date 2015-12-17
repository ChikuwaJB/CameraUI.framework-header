/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:46 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMPreviewView, CAMSnapshotView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject {

	CAMPreviewView* __previewView;
	CAMSnapshotView* __snapshotView;

}

@property (nonatomic,readonly) CAMPreviewView * _previewView;                                       //@synthesize _previewView=__previewView - In the implementation block
@property (setter=_setSnapshotView:,nonatomic,retain) CAMSnapshotView * _snapshotView;              //@synthesize _snapshotView=__snapshotView - In the implementation block
-(void)_setSnapshotView:(id)arg1 ;
-(CAMSnapshotView *)_snapshotView;
-(CAMPreviewView *)_previewView;
-(id)initWithPreviewView:(id)arg1 ;
-(id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2 ;
-(void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)openAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
