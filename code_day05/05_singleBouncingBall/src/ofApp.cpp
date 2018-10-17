#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetCircleResolution(36);
//    ball2.xAccel = -0.1;
//    ball2.yAccel = -0.11;
//
//    ball3.xAccel = -0.15;
//    ball3.yAccel = -0.16;
//
//    ball4.xAccel = -0.2;
//    ball4.yAccel = -0.21;
    
    for(int i = 0; i < NUM_BALLS; i ++){
        Ball tempBall;
        tempBall.pX = ofRandom(ofGetWidth());
        tempBall.pY = ofRandom(ofGetHeight());
        tempBall.xAccel = - ofRandom(0);
        tempBall.yAccel = - ofRandom(0);
        tempBall.radius = ofRandom(3,20);
        
        balls.push_back( tempBall);
    }

}

//--------------------------------------------------------------
void ofApp::update()
{
    //ball1.update();
   //call update on all balls in vector
    
    for (int i = 0; i< balls.size(); i++) {
        balls[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackgroundGradient(ofColor::yellow, ofColor::cornflowerBlue);
   
    for (int i = 0; i< balls.size(); i++) {
        balls[i].draw();

    }
    
}


void ofApp::mousePressed(int x, int y, int button)
{
    Ball tempBall;
    tempBall.pX = x;
    tempBall.pY = y;
    tempBall.xAccel = - ofRandom(0);
    tempBall.yAccel = - ofRandom(0);
    tempBall.radius = 40;
    balls.push_back( tempBall);
}





