//
//  VideoClass.hpp
//  018ClassesWithVideo
//
//  Created by Joseph McCraw on 1/27/16.
//
//

#ifndef VideoClass_hpp
#define VideoClass_hpp

#include <stdio.h>
#include "ofMain.h"

class VideoClass{
public:
    
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    ofVideoPlayer video;
};

#endif /* VideoClass_hpp */
