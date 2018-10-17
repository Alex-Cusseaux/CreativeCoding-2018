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
    
    int sec = ofGetSeconds();
    int min = ofGetMinutes();
    int hrs = ofGetHours();
    
    float secDegree = ofMap(sec, 0, 60, 0, 360);
    float minDegree = ofMap(min, 0, 60, 0, 360);
    float hrsDegree = ofMap(hrs, 0, 24, 0, 720);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth(), ofGetHeight());
    ofRotateZDeg(180);
    //seccond had
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateZDeg(secDegree);
    
        ofSetLineWidth(1);
        ofSetColor(ofColor::burlyWood);
        ofDrawLine(0, 0, 0, 300);
    ofDrawCircle(0, 0, 10);
    ofPopMatrix();

    //miute hand
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateZDeg(minDegree);
    
        ofSetColor(ofColor::burlyWood);
        ofSetLineWidth(3);
        ofDrawLine(0, 0, 0, 250);
    ofPopMatrix();
    
    //hour had
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateZDeg(hrsDegree);
    
        ofSetColor(ofColor::burlyWood);
        ofDrawLine(0, 0, 0, 100);
    ofPopMatrix();
    
    
    
    ofPopMatrix();
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
