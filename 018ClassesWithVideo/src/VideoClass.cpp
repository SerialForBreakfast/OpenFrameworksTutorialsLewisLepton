//
//  VideoClass.cpp
//  018ClassesWithVideo
//
//  Created by Joseph McCraw on 1/27/16.
//
//

#include "VideoClass.hpp"

void VideoClass::setup()   {
    video.load("ShowBlenderTitles-7sec.mov");
    video.setVolume(.3);
}

void VideoClass::update(){
    video.update();
}

void VideoClass::draw(){
    video.draw(0,0,ofGetWidth(),ofGetHeight());
}

void VideoClass::keyPressed(int key){
    switch (key){
            case ' ':
            video.play();
            ofHideCursor();
            break;
            
            case OF_KEY_LEFT:
            video.previousFrame();
            break;
            
        case OF_KEY_RIGHT:
            video.nextFrame();
            break;
            
            case 'a':
            video.stop();
            break;
    }
}