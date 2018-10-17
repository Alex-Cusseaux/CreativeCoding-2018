#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetFrameRate(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    //ofBackground(0, 0, 0);
    ofBackgroundGradient(ofColor::deepPink, ofColor::chocolate, OF_GRADIENT_BAR);
    
    //poit 1 x, poit1 y, poinnt 2 x, poinnt 2 y
    ofDrawLine(200, 200, 600, 600);
    ofSetLineWidth(10);
    
    
    
    
    ofSetCircleResolution(50);
    ofSetColor(100, 0, 0);
    ofNoFill();
    ofDrawCircle(200, 200, 150);
    
    ofSetCircleResolution(50);
    //sets collor in r, g, b format (0-255)
    ofSetColor(0, 100, 0);
    ofFill();
    //x,y,rad
    ofDrawCircle(200, 200, 100);
    
    ofSetCircleResolution(50);
    ofSetColor(0, 0, 100);
    ofDrawCircle(200, 200, 50);
    
    
    //this is a for loop
    //get width of drawing screen
    int width = ofGetWidth();
    int hight = ofGetHeight();
    
   
    //for moving teal targets
    for(int i=50; i <width; i=i+10)
    {
        //get rnd num 0- hight
        int yPos = ofRandom(hight);
        
        ofSetColor(0, 100, 100);
        ofNoFill();
        ofDrawCircle(i, yPos, 20);
        ofFill();
        ofDrawCircle(i, yPos, 10);
        
        //ofSetColor(255);
        //ofDrawBitmapString(ofToString(i), i, 400);
    }
    
    
    
    //for moving lime targets
    for(int i=50; i <width; i=i+10)
    {
        //get rnd num 0- hight
        int yPos = ofRandom(hight);
        int circleRes =ofRandom(3,10);
        ofSetCircleResolution(circleRes);
        ofSetLineWidth(5);
        ofSetColor(ofColor::fromHex(0x7FFF00));
        ofNoFill();
        ofDrawCircle(i, yPos, 20);
        ofSetLineWidth(5);
        ofFill();
        ofDrawCircle(i, yPos, 10);
        
        //ofSetColor(255);
        //ofDrawBitmapString(ofToString(i), i, 400);
    }
    
   
    
    
    
    
  
    
    drawThreeCircles(100, 100);
    
    
   
    
}

void ofApp::drawThreeCircles(int x, int y)
{
    ofSetColor(ofColor::pink);
    ofFill();
    ofSetCircleResolution(35);
    ofDrawCircle(x, y, 10, 10);
    ofDrawCircle(x+50, y+50, 10, 10);
    ofDrawCircle(x+100, y+100, 10, 10);
}


