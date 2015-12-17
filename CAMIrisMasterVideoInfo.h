/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:47 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface CAMIrisMasterVideoInfo : NSObject {

	NSMutableSet* __referenceVideoURLs;

}

@property (nonatomic,readonly) NSMutableSet * _referenceVideoURLs;              //@synthesize _referenceVideoURLs=__referenceVideoURLs - In the implementation block
-(id)init;
-(BOOL)containsReferenceVideoURL:(id)arg1 ;
-(void)addReferenceVideoURL:(id)arg1 ;
-(void)removeReferenceVideoURL:(id)arg1 ;
-(unsigned long long)referenceVideoURLCount;
-(NSMutableSet *)_referenceVideoURLs;
@end

