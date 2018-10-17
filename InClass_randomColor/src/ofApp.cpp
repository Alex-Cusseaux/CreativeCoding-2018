#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetCircleResolution(32);
    int spacing = 10;
    
    
    
    
    
    
    for (int y =0; y< ofGetHeight(); y += spacing)
    {
        for (int x =0; x< ofGetWidth(); x += spacing)
        {
            ofColor prettyColor;
            
            //x goes from 0 -800 but we need it to go fro 0 - 255
            //so remap the values of x to 0-255
            //has 5 arguments:
                    //1. value to be mapped
                    //2. the input rage lowwer bounds (the range that x is curretly in)
                    //3. input range upper bounds
                    //4. output range lowwer bounds
            
            float remappedX = ofMap(x, 0, ofGetWidth(), 0, 255);
            float hue = remappedX;
            float sat = ofMap(y, 0, ofGetHeight(), 0, 255);
            float bri = ofRandom(200,255);
            
            prettyColor.setHsb(hue, sat, bri);
            
            ofFill();
            ofSetColor(prettyColor);
            ofDrawCircle(x, y, spacing/2);
            
        }
        
    }
    
    
}

