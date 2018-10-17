#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0, 0, 0);
    
    
    
    //SQUARE
    // ofFill();
    // ofSetColor(ofColor::blue);
    //  ofDrawRectangle(230, 230, 140, 140);
    
    //top horizontal line
  //  ofDrawLine(230, 230, 370, 230);
    //vertical left line
   // ofDrawLine(230, 230, 230, 370);
    //bottom horizontal line
   // ofDrawLine(230, 370, 370, 370);
    //vertical right line
    //ofDrawLine(370, 230, 370, 370);
    
    //VERTICAL LINES
    int width = ofGetWidth();
    int hight = ofGetHeight();
    ofPath path;
    path.setMode(ofPath::POLYLINES);
    
    //path.setFillColor(ofColor::gold);

    
    path.arc(300,300, 50, 50, 0, 360);
    path.close();
    //lies
    //for(int i=200; i <600; i=i+10)
 // {
        //get rnd num 0- hight
      //  int yPos = ofRandom(hight);
        
       ofSetColor(ofColor::white);
       // ofNoFill();
        //ofDrawCircle(i, 400, 20);
        ofDrawLine(i, 200, i, 400);
        // ofFill();
        //ofDrawCircle(i, yPos, 10);
        
        //ofSetColor(255);
        //ofDrawBitmapString(ofToString(i), i, 400);
  // }
    
   
    
   // for( int i = 0; i < 5; i++) {
        // create a new ofSubPath
     //   path.arc( i * 50 + 20, i * 50 + 20, i * 40 + 10, i * 40 + 10, 0, 360);
       // path.close();
   // }

    
    
    
    
    
    
    
    
    
    path.close();
    path.simplify();
    

    
    
    path.draw();
    
    
}






