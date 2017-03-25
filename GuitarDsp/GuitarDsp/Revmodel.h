//
//  Revmodel.h
//  GuitarDsp
//
//  Created by Maciej Chmielewski on 25.03.2017.
//
//

#import <Foundation/Foundation.h>
#import "Comb.h"
#include "Allpass.h"
#include "tuning.h"

@interface Revmodel : NSObject {
    float	gain;
    float	roomsize,roomsize1;
    float	damp,damp1;
    float	wet,wet1,wet2;
    float	dry;
    float	width;
    float	mode;
    
    // The following are all declared inline
    // to remove the need for dynamic allocation
    // with its subsequent error-checking messiness
    
    // Comb filters
    NSMutableArray<Comb *> *combL;
    NSMutableArray<Comb *> *combR;
    
    // Allpass filters
    NSMutableArray<Allpass *> *allpassL;
    NSMutableArray<Allpass *> *allpassR;
    
    // Buffers for the combs
    float	bufcombL1[combtuningL1];
    float	bufcombR1[combtuningR1];
    float	bufcombL2[combtuningL2];
    float	bufcombR2[combtuningR2];
    float	bufcombL3[combtuningL3];
    float	bufcombR3[combtuningR3];
    float	bufcombL4[combtuningL4];
    float	bufcombR4[combtuningR4];
    float	bufcombL5[combtuningL5];
    float	bufcombR5[combtuningR5];
    float	bufcombL6[combtuningL6];
    float	bufcombR6[combtuningR6];
    float	bufcombL7[combtuningL7];
    float	bufcombR7[combtuningR7];
    float	bufcombL8[combtuningL8];
    float	bufcombR8[combtuningR8];
    
    // Buffers for the allpasses
    float	bufallpassL1[allpasstuningL1];
    float	bufallpassR1[allpasstuningR1];
    float	bufallpassL2[allpasstuningL2];
    float	bufallpassR2[allpasstuningR2];
    float	bufallpassL3[allpasstuningL3];
    float	bufallpassR3[allpasstuningR3];
    float	bufallpassL4[allpasstuningL4];
    float	bufallpassR4[allpasstuningR4];
}

- (void)mute;
- (void)processmix:(float *)inputL
            inputR:(float *)inputR
           outputL:(float *)outputL
           outputR:(float *)outputR
        numsamples:(long)numsamples
              skip:(int)skip;

- (void)	processreplace:(float *)inputL
                inputR:(float *)inputR
               outputL:(float *)outputL
               outputR:(float *)outputR
            numsamples:(long)numsamples
                  skip:(int)skip;

- (void)setroomsize:(float)value;
- (float)getroomsize;
- (void)setdamp:(float)value;
- (float)getdamp;
- (void)setwet:(float)value;
- (float)getwet;
- (void)setdry:(float)value;
- (float)getdry;
- (void)setwidth:(float)value;
- (float)getwidth;
- (void)setmode:(float)value;
- (float)getmode;
- (void)update;

@end
