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
    
    
    //seconnds
    ofPath pathSec;
    pathSec.setCurveResolution(100);
    pathSec.moveTo(400, 400);
    pathSec.arc(400, 400, 300, 300, secDegree, 360);
    pathSec.setColor(ofColor::aquamarine);
    pathSec.setFilled(true);
    pathSec.setStrokeWidth(1);
    pathSec.draw();
    pathSec.close();
   
    //miutes
    ofPath pathMin;
    pathMin.setCurveResolution(100);
    pathMin.moveTo(400, 400);
    pathMin.arc(400, 400, 250, 250, minDegree, 360);
    pathMin.setColor(ofColor::purple);
    pathMin.setFilled(true);
    pathMin.setStrokeWidth(1);
    pathMin.draw();
    pathMin.close();
//
//
//    //hr
    ofPath pathHr;
    pathHr.setCurveResolution(100);
    pathHr.moveTo(400, 400);
    pathHr.arc(400, 400, 200, 200, hrsDegree, 360);
    pathHr.setColor(ofColor::hotPink);
    pathHr.setFilled(true);
    pathHr.setStrokeWidth(1);
    pathHr.draw();
    pathHr.close();
    
   
    
   // path.arc(float x, float y, float radiusX, float radiusY, float angleBegin, float angleEnd)
    
    
    
    
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
