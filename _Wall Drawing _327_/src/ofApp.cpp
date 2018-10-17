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
    
    //TRAPEZOID
        //top hotizotal line
        ofDrawLine(200, 200, 600, 200);
        //vertical left line
        ofDrawLine(200, 200, 200, 400);
        //bottom horizontal line
        ofDrawLine(200, 400, 750, 400);
        //right sloped line
        ofDrawLine(600, 200, 750, 400);
    
    //SQUARE
   // ofFill();
   // ofSetColor(ofColor::blue);
  //  ofDrawRectangle(230, 230, 140, 140);
    
        //top horizontal line
        ofDrawLine(230, 230, 370, 230);
        //vertical left line
        ofDrawLine(230, 230, 230, 370);
        //bottom horizontal line
        ofDrawLine(230, 370, 370, 370);
        //vertical right line
        ofDrawLine(370, 230, 370, 370);

    //VERTICAL LINES
    int width = ofGetWidth();
   int hight = ofGetHeight();
    
    
    //for moving teal targets
    for(int i=200; i <600; i=i+10)
    {
        //get rnd num 0- hight
        int yPos = ofRandom(hight);
        
        ofSetColor(ofColor::white);
        ofNoFill();
        //ofDrawCircle(i, 400, 20);
        ofDrawLine(i, 200, i, 400);
       // ofFill();
        //ofDrawCircle(i, yPos, 10);
        
        //ofSetColor(255);
        //ofDrawBitmapString(ofToString(i), i, 400);
    }
    
    
    
    
        
    
}
        //void ofApp::drawVerticalLines(int x, int y)
       // {
            
          //  for(int i=200; i <600; i=i+5)
        
          //  {
         //   ofSetColor(ofColor::white);
          //  ofFill();
          //  ofDrawLine(i, 200, i, 200);
            
       // }
    
    
    
       // }

    
