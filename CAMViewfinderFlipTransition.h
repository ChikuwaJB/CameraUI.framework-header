/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:44 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMPreviewView, CAMSnapshotView;

@interface CAMViewfinderFlipTransition : NSObject {

	CAMPreviewView* __previewView;
	CAMSnapshotView* __frontSnapshotView;
	CAMSnapshotView* __backSnapshotView;
	CAMSnapshotView* __targetSnapshotView;

}

@property (nonatomic,readonly) CAMPreviewView * _previewView;                                                   //@synthesize _previewView=__previewView - In the implementation block
@property (setter=_setFrontSnapshotView:,nonatomic,retain) CAMSnapshotView * _frontSnapshotView;                //@synthesize _frontSnapshotView=__frontSnapshotView - In the implementation block
@property (setter=_setBackSnapshotView:,nonatomic,retain) CAMSnapshotView * _backSnapshotView;                  //@synthesize _backSnapshotView=__backSnapshotView - In the implementation block
@property (setter=_setTargetSnapshotView:,nonatomic,retain) CAMSnapshotView * _targetSnapshotView;              //@synthesize _targetSnapshotView=__targetSnapshotView - In the implementation block
-(CAMSnapshotView *)_frontSnapshotView;
-(CAMSnapshotView *)_backSnapshotView;
-(CAMSnapshotView *)_targetSnapshotView;
-(void)_setFrontSnapshotView:(id)arg1 ;
-(CAMPreviewView *)_previewView;
-(void)_setBackSnapshotView:(id)arg1 ;
-(void)_cleanupFromFlipTransition;
-(void)_setTargetSnapshotView:(id)arg1 ;
-(id)initWithPreviewView:(id)arg1 ;
-(void)performFlipTransitionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(/*^block*/id)arg1 ;
@end

