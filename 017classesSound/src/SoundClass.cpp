//
//  SoundClass.cpp
//  017classesSound
//
//  Created by Joseph McCraw on 1/27/16.
//
//

#include "SoundClass.hpp"


void SoundClass::setup(){
    drums.load("synth.wav");
}

void SoundClass::keyPressed(int key){
    switch (key) {
            case ' ':
            drums.play();
            printf("Played\n");
            break;
        case OF_KEY_LEFT:
            drums.setSpeed(-1.0);
            break;
            
        case OF_KEY_RIGHT:
            drums.setSpeed(1.0);
            break;
    }
}