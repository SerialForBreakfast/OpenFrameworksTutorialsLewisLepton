//
//  CircleClass.cpp
//  024ParameterGui
//
//  Created by Joseph McCraw on 1/28/16.
//
//

#include "CircleClass.hpp"

void CircleClass::setup(){
    circleParameters.setName("Circle Controls");
    circleParameters.add(red.set("red", 255, 0, 255));
    circleParameters.add(blue.set("blue", 200, 0, 255));
    circleParameters.add(green.set("green", 255, 0, 255));
    circleParameters.add(posX.set("posX", 500, 0, 1000));
    circleParameters.add(posY.set("posY", 600, 0, 1000));
    circleParameters.add(radius.set("radius", 90, 0, 1000));
    
}
void CircleClass::draw(){
    ofSetColor(red,green,blue);
    ofCircle(posX,posY,radius);
}