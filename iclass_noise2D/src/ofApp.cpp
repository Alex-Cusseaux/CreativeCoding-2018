#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //true will clamp the values inside
        //float noiseIncX = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0.5, false);
        //float noiseIncY = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 0.5, false);
    
    //get time
    float time = ofGetElapsedTimef();
    
    //we inc by this amnt ,which changes w sine
    float xOff = sin(time * 0.002);
    float noisePosX = 0;
    
    //same for 
    float yOff = sin(time * 0.003);
    float noisePosY = 0;
    
    
    for (int y = 0; y < ofGetHeight(); y+=2)
    {
        for (int x = 0; x < ofGetWidth(); x+=2)
        {
//            noisePosX += noiseIncX;
//            noisePosY += noiseIncY;
            
            //noise *always* gives  value 0.0 - 1.0
            float noise = ofNoise(x * xOff,y * yOff);
            
            //multiply noise by 255 = 0 - 1
            float hue = noise * 255;
            
            ofSetColor(ofColor::fromHsb(hue, 255, 255));
            ofDrawRectangle(x, y, 2, 2);
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

