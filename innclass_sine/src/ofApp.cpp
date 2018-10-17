#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef();
    float frequency = 1;
    
    
    
   // sinFunction = sin(time * frequency);
    //sinFunction = ofMap(sinFunction, -1, 1, 0, 200);
    
    ofLog() << sinFunction;
    
    sinFunction = ofGetHeight()/2 + ofGetWidth()/2 * sin(time* frequency);
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(ofColor::deepPink);
    ofSetColor(ofColor::lime);
    ofDrawCircle(ofGetWidth()/2, sinFunction, 10);
    
    
}


