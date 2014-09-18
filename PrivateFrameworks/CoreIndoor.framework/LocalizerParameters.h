/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class BodyFixedDetectorParameters, InjectionParameters, MotionTruthParameters, MultiphoneDbmParameters, PdrParameters, PedometryCompassMotionParameters, WifiParameters;

@interface LocalizerParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int notifyIntervalNanos : 1; 
        unsigned int bilinearWifi : 1; 
        unsigned int confidenceFactor : 1; 
        unsigned int localizerType : 1; 
        unsigned int modeEstimator : 1; 
        unsigned int motionPdrUnmodelledHeadingVariancePerSecond : 1; 
        unsigned int numParticles : 1; 
        unsigned int time2dMotionVariancePerSecond : 1; 
    int _bilinearWifi;
    BodyFixedDetectorParameters *_bodyFixed;
    float _confidenceFactor;
    } _has;
    InjectionParameters *_injection;
    int _localizerType;
    int _modeEstimator;
    float _motionPdrUnmodelledHeadingVariancePerSecond;
    MotionTruthParameters *_motionTruth;
    MultiphoneDbmParameters *_multiphoneDbm;
    unsigned long long _notifyIntervalNanos;
    unsigned int _numParticles;
    PdrParameters *_pdr;
    PedometryCompassMotionParameters *_pedomCompassMotion;
    float _time2dMotionVariancePerSecond;
    WifiParameters *_wifi;
}

@property int bilinearWifi;
@property(retain) BodyFixedDetectorParameters * bodyFixed;
@property float confidenceFactor;
@property bool hasBilinearWifi;
@property(readonly) bool hasBodyFixed;
@property bool hasConfidenceFactor;
@property(readonly) bool hasInjection;
@property bool hasLocalizerType;
@property bool hasModeEstimator;
@property bool hasMotionPdrUnmodelledHeadingVariancePerSecond;
@property(readonly) bool hasMotionTruth;
@property(readonly) bool hasMultiphoneDbm;
@property bool hasNotifyIntervalNanos;
@property bool hasNumParticles;
@property(readonly) bool hasPdr;
@property(readonly) bool hasPedomCompassMotion;
@property bool hasTime2dMotionVariancePerSecond;
@property(readonly) bool hasWifi;
@property(retain) InjectionParameters * injection;
@property int localizerType;
@property int modeEstimator;
@property float motionPdrUnmodelledHeadingVariancePerSecond;
@property(retain) MotionTruthParameters * motionTruth;
@property(retain) MultiphoneDbmParameters * multiphoneDbm;
@property unsigned long long notifyIntervalNanos;
@property unsigned int numParticles;
@property(retain) PdrParameters * pdr;
@property(retain) PedometryCompassMotionParameters * pedomCompassMotion;
@property float time2dMotionVariancePerSecond;
@property(retain) WifiParameters * wifi;

- (void).cxx_destruct;
- (int)bilinearWifi;
- (id)bodyFixed;
- (float)confidenceFactor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBilinearWifi;
- (bool)hasBodyFixed;
- (bool)hasConfidenceFactor;
- (bool)hasInjection;
- (bool)hasLocalizerType;
- (bool)hasModeEstimator;
- (bool)hasMotionPdrUnmodelledHeadingVariancePerSecond;
- (bool)hasMotionTruth;
- (bool)hasMultiphoneDbm;
- (bool)hasNotifyIntervalNanos;
- (bool)hasNumParticles;
- (bool)hasPdr;
- (bool)hasPedomCompassMotion;
- (bool)hasTime2dMotionVariancePerSecond;
- (bool)hasWifi;
- (unsigned long long)hash;
- (id)initEmpty;
- (id)injection;
- (bool)isEqual:(id)arg1;
- (int)localizerType;
- (void)mergeFrom:(id)arg1;
- (int)modeEstimator;
- (float)motionPdrUnmodelledHeadingVariancePerSecond;
- (id)motionTruth;
- (id)multiphoneDbm;
- (unsigned long long)notifyIntervalNanos;
- (unsigned int)numParticles;
- (id)pdr;
- (id)pedomCompassMotion;
- (bool)readFrom:(id)arg1;
- (void)setBilinearWifi:(int)arg1;
- (void)setBodyFixed:(id)arg1;
- (void)setConfidenceFactor:(float)arg1;
- (void)setHasBilinearWifi:(bool)arg1;
- (void)setHasConfidenceFactor:(bool)arg1;
- (void)setHasLocalizerType:(bool)arg1;
- (void)setHasModeEstimator:(bool)arg1;
- (void)setHasMotionPdrUnmodelledHeadingVariancePerSecond:(bool)arg1;
- (void)setHasNotifyIntervalNanos:(bool)arg1;
- (void)setHasNumParticles:(bool)arg1;
- (void)setHasTime2dMotionVariancePerSecond:(bool)arg1;
- (void)setInjection:(id)arg1;
- (void)setLocalizerType:(int)arg1;
- (void)setModeEstimator:(int)arg1;
- (void)setMotionPdrUnmodelledHeadingVariancePerSecond:(float)arg1;
- (void)setMotionTruth:(id)arg1;
- (void)setMultiphoneDbm:(id)arg1;
- (void)setNotifyIntervalNanos:(unsigned long long)arg1;
- (void)setNumParticles:(unsigned int)arg1;
- (void)setPdr:(id)arg1;
- (void)setPedomCompassMotion:(id)arg1;
- (void)setTime2dMotionVariancePerSecond:(float)arg1;
- (void)setWifi:(id)arg1;
- (float)time2dMotionVariancePerSecond;
- (void)updateDeepTo:(id)arg1;
- (id)wifi;
- (void)writeTo:(id)arg1;

@end