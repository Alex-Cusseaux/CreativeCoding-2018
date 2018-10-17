#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float noiseInc = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0.5);
    float noisePosition = 0;
    
    
    for (int i = 0; i < ofGetWidth(); i++)
    {
        noisePosition += noiseInc;
        float noise = ofNoise(noisePosition);
        float hue = ofMap(noise, 0, 1, 0, 255);
        ofSetColor(ofColor::fromHsb(hue, 255, 255));
        
        ofDrawLine(i, 0, i, ofGetHeight());
        
    }
    
    
}


