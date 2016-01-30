//
//  PlanetClass.hpp
//  030projectOrbit
//
//  Created by Joseph McCraw on 1/30/16.
//
//

#ifndef PlanetClass_hpp
#define PlanetClass_hpp

#include "ofMain.h"
class PlanetClass {
public:
    void setup();
    void update();
    void draw();
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    float rotation = 0.0;
};


#endif /* PlanetClass_hpp */

