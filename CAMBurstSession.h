/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:48 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject {

	BOOL _finalized;
	unsigned long long _estimatedCount;
	unsigned long long _count;
	CIBurstImageSet* __burstImageSet;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic) unsigned long long estimatedCount;                                     //@synthesize estimatedCount=_estimatedCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                                              //@synthesize count=_count - In the implementation block
@property (assign,setter=_setFinalized:,getter=_isFinalized,nonatomic) BOOL finalized;              //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) CIBurstImageSet * _burstImageSet;                                    //@synthesize _burstImageSet=__burstImageSet - In the implementation block
-(void)_setCount:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(id)performBurstAnalysisForDevice:(long long)arg1 ;
-(void)addStillImageCaptureResult:(id)arg1 ;
-(void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2 ;
-(unsigned long long)estimatedCount;
-(BOOL)_isFinalized;
-(CIBurstImageSet *)_burstImageSet;
-(void)_setEstimatedCount:(unsigned long long)arg1 ;
-(void)_setFinalized:(BOOL)arg1 ;
@end

