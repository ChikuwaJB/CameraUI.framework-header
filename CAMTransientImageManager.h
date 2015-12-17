/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:47 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUTransientImageManager.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {

	NSMutableDictionary* __pairedVideosByPairedUUID;
	NSMutableDictionary* __activeRequestsByPairedUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * _pairedVideosByPairedUUID;                //@synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _activeRequestsByPairedUUID;              //@synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)insertPairedVideoWithConvertible:(id)arg1 ;
-(void)removePairedVideoForUUID:(id)arg1 ;
-(NSMutableDictionary *)_pairedVideosByPairedUUID;
-(NSMutableDictionary *)_activeRequestsByPairedUUID;
-(void)_handleRequestTimeout:(id)arg1 ;
-(id)existingPairedVideoForUUID:(id)arg1 ;
@end

