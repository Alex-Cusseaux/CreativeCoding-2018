#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::black);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef();
    float frequencyX = 5;
    float frequencyY = 1.5;
    
    float offset = 2;
    
    float sineValueX = sin(time* frequencyX);
    xPos = ofMap(sineValueX, -1, 1, ofGetWidth(), -50);
    
    float sineValueY = sin(time* frequencyY);
    yPos = ofMap(sineValueY, -1, 1, ofGetHeight(), -50);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetColor( ofColor::forestGreen);
    ofFill();
    ofDrawCircle(xPos, yPos, 5);
    
    
}


