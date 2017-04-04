//
//  EffectsFacory.swift
//  Bow
//
//  Created by Maciej Chmielewski on 30.03.2017.
//  Copyright © 2017 Maciej Chmielewski. All rights reserved.
//

import Foundation
import GuitarDsp

struct EffectsFacory {
    let samplingSettings: SamplingSettings
    
    func all() -> [Effect] {
        return [makeAmp(), makeDelay(), makeHarmonizer(), makePhaseVocoder(), makeReverb()]
    }
    
    func makeAmp() -> AmpEffect {
        return AmpEffect(samplingSettings: samplingSettings)
    }
    
    func makeDelay() -> DelayEffect {
        return DelayEffect(fadingFunctionA: 0.2, fadingFunctionB: 0.2, echoesCount: 3, samplingSettings: samplingSettings, timing: Timing(tactPart: .Half, tempo: 120))
    }
    
    func makeHarmonizer() -> HarmonizerEffect {
        return HarmonizerEffect(samplingSettings: samplingSettings)
    }
    
    func makePhaseVocoder() -> PhaseVocoderEffect {
        return PhaseVocoderEffect(samplingSettings: samplingSettings)
    }
    
    func makeReverb() -> ReverbEffect {
        return ReverbEffect(samplingSettings: samplingSettings)
    }
}
