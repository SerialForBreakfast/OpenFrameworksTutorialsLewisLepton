//
//  SoundClass.hpp
//  017classesSound
//
//  Created by Joseph McCraw on 1/27/16.
//
//

#ifndef SoundClass_hpp
#define SoundClass_hpp

#include <stdio.h>
#include "ofMain.h"

class SoundClass{
public:
    void setup();
    void keyPressed(int key);
    
    ofSoundPlayer drums;
};

#endif /* SoundClass_hpp */
