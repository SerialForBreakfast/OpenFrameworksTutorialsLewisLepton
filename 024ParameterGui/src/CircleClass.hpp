//
//  CircleClass.hpp
//  024ParameterGui
//
//  Created by Joseph McCraw on 1/28/16.
//
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include "ofMain.h"

class CircleClass{
public:
    void setup();
    void draw();
    
    ofParameterGroup circleParameters;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    ofParameter<int> radius;
};

#endif /* CircleClass_hpp */
