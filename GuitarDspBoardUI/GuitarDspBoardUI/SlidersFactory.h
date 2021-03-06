//
//  SlidersFactory.h
//  GuitarDsp
//
//  Created by Maciej Chmielewski on 15.03.2017.
//
//

#import <Foundation/Foundation.h>
#import <BoardUI/BoardUI.h>
#import "DelayEffect.h"
#import "PhaseVocoderEffect.h"
#import "HarmonizerEffect.h"
#import "ReverbEffect.h"

@interface SlidersFactory : NSObject

+ (NSArray<Slider *> *)delaySliders:(DelayEffect *)delayEffect;
+ (NSArray<Slider *> *)phaseVocoderSliders:(PhaseVocoderEffect *)phaseVocoderEffect;
+ (NSArray<Slider *> *)harmonizerSliders:(HarmonizerEffect *)harmonizerEffect;
+ (NSArray<Slider *> *)reverbSliders:(ReverbEffect *)reverbEffect;

@end
