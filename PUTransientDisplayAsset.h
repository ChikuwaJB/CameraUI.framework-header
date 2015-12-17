/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:44 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, UIImage;


@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@required
-(BOOL)isHDR;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(UIImage *)placeholderImage;

@end

