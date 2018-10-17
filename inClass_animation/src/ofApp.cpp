#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    //lets inncrementst xpos by speedX eyeru uipdate loop
    PosX += SpeedX * directionX;
    
    if (PosX > ofGetWidth()) {
        //comes back on other side of the screenn
        //PosX = -2;
        directionX *= -1;
    }
    
    if (PosX < 0) {
     directionX *= -2;
    }
    
    
    
    PosY += SpeedY * directionY;
    
    if (PosY > ofGetHeight()) {
        //comes back on other side of the screenn
        //PosX = -2;
        directionY *= -1;
    }
    
    if (PosY < 0) {
        directionY *= -2;
    }
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(ofColor::mediumSlateBlue,60);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    
    
    ofSetBackgroundColor(ofColor::black);
    
    ofSetColor(ofColor::honeyDew);
    
   // float PosX = ofGetWidth()/2;
    //instead put global PosX
  
    
    //this is like std::cout << PosX << std::enndl;
    ofLog() << PosX;
     ofLog() << PosY;
    
    ofFill();
    //use x pos to set the
    ofDrawCircle(PosX, PosY, 20);
    
   
    
}

