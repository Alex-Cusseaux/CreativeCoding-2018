#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(ofColor::black);
    ofFill();
    ofDrawTriangle(500, 200, 600, 400, 600, 200);
    
    
    ofBackground(0, 0, 0);
    ofSetColor(ofColor::white);
    ofNoFill();
    ofDrawRectangle(200, 200, 400, 200);
    //ofDrawRectangle(<#float x1#>, <#float y1#>, <#float w#>, <#float h#>)
    
   
    
    
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
