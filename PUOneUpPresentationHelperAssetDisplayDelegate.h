/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:46 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
@optional
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;

@required
-(CGRect*)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3;

@end
