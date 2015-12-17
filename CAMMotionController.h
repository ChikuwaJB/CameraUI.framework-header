/*
* This header is generated by classdump-dyld 0.7
* on Thursday, December 17, 2015 at 7:29:45 AM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@class BKSAccelerometer, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate> {

	long long _deviceOrientation;
	long long _dominantPhysicalButton;
	long long __cachedCaptureOrientation;
	BKSAccelerometer* __accelerometer;
	long long __numberOfDominantPhysicalButtonObservers;
	CMMotionManager* __physicalButtonMotionManager;

}

@property (nonatomic,readonly) long long captureOrientation; 
@property (nonatomic,readonly) long long panoramaCaptureOrientation; 
@property (assign,nonatomic) long long deviceOrientation;                                                                                         //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) long long dominantPhysicalButton;                                                                                    //@synthesize dominantPhysicalButton=_dominantPhysicalButton - In the implementation block
@property (assign,setter=_setCachedCaptureOrientation:,nonatomic) long long _cachedCaptureOrientation;                                            //@synthesize _cachedCaptureOrientation=__cachedCaptureOrientation - In the implementation block
@property (setter=_setAccelerometer:,nonatomic,retain) BKSAccelerometer * _accelerometer;                                                         //@synthesize _accelerometer=__accelerometer - In the implementation block
@property (assign,setter=_setNumberOfDominantPhysicalButtonObservers:,nonatomic) long long _numberOfDominantPhysicalButtonObservers;              //@synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _physicalButtonMotionManager;                                                                    //@synthesize _physicalButtonMotionManager=__physicalButtonMotionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(long long)deviceOrientation;
-(long long)captureOrientation;
-(void)deviceDidChangeOrientation:(id)arg1 ;
-(long long)_cachedCaptureOrientation;
-(long long)_applyPanoramaTransformToOrientation:(long long)arg1 ;
-(void)_setCachedCaptureOrientation:(long long)arg1 ;
-(void)_setDeviceOrientation:(long long)arg1 ;
-(CMMotionManager *)_physicalButtonMotionManager;
-(long long)_numberOfDominantPhysicalButtonObservers;
-(void)_setDominantPhysicalButton:(long long)arg1 ;
-(void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1 ;
-(void)_updatePhysicalButtonObservation;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(long long)panoramaCaptureOrientation;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(long long)dominantPhysicalButton;
-(BKSAccelerometer *)_accelerometer;
-(void)_setAccelerometer:(id)arg1 ;
@end

