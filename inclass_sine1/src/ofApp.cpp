#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::black);
    
    float time = ofGetElapsedTimef();
    float frequency = 0.02;
    
    for (int i = 0 ; i < 800; i++) {
        float sine = sinf(time * frequency * i);
        float PosY = ofMap(sine, -1, 1, 0, ofGetHeight());
    
        float hue = ofMap(sine, -1, 1, 0, 255);
        
        ofSetColor(ofColor::fromHsb(hue, 100, 255));
        ofFill();
        ofDrawCircle(i * 8 , PosY, 8);
    }

    


}
