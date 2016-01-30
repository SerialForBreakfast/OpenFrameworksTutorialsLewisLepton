#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.load("ShowBlender.mov");
    video.play();
    //video.setVolume(1.0);
    video.setSpeed(.5);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(0,0,320,240);
    //ofSetColor(0,0,0);
    ofDrawBitmapString("frame: " + ofToString(video.getCurrentFrame()) + " / " + ofToString(video.getTotalNumFrames()), 20, 350);
    
    ofDrawBitmapString("Speed: " + ofToString(video.getSpeed()) + " / " + ofToString(video.getPosition()), 20, 370);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
