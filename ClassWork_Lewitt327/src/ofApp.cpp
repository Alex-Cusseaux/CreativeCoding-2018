#include "ofApp.h"

//--------------------------------------------------------------
void setup(){

}

//--------------------------------------------------------------
void update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //VERTICAL LINES
    int width = ofGetWidth();
    int hight = ofGetHeight();
    
    
    //VERTICAL LINES
    for(int i=200; i <600; i=i+10)
    {
        ofSetColor(ofColor::white);
        ofNoFill();
        ofDrawLine(i, 200, i, 400);
    }
    
    //SQUARE
    ofSetColor(ofColor::black);
    ofFill();
    ofDrawRectangle(230, 230, 100, 100);
    
    //HORIZONTAL LINES
    for(int i=230; i <331; i=i+10)
    {
        ofSetColor(ofColor::white);
        ofNoFill();
        ofDrawLine(230, i, 330, i);
        
    }

    
    
}


