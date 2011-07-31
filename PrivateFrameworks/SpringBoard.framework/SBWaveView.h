/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBWaveView : XXUnknownSuperclass {
	float _phaseWidth;
	float _phaseShift;
	float _minAmplitude;
	float _maxAmplitude;
	float _amplitude;
	float _levelDamping;
	double _phaseDuration;
	double _amplitudeChangeTime;
	double _amplitudeChangeDuration;
	float _lastAmplitude;
	float _level;
	BOOL _animating;
}
-(void)setFrame:(CGRect)frame;
-(void)setColor:(id)color;
-(void)setPhaseWidth:(float)width;
-(void)setPhaseShift:(float)shift;
-(float)_phaseShift;
-(float)_currentAmplitude;
-(void)_setAmplitude:(float)amplitude animated:(BOOL)animated;
-(void)setMinAmplitude:(float)amplitude;
-(void)setMaxAmplitude:(float)amplitude;
-(void)setPhaseAnimationDuration:(double)duration;
-(void)setLevel:(float)level animated:(BOOL)animated;
-(void)setLevelDamping:(float)damping;
-(float)_amplitudeForLevel:(float)level;
-(void)beginAnimating;
-(void)stopAnimating;
-(void)_finishedAnimating;
@end

