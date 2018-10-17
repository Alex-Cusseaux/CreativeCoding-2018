#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    float PosX = ofGetWidth()/2;
    float SpeedX = 2;
    int directionX = 1; //flip-flop switch
    int directionY = 1; //flip-flop switch
    
	float PosY = ofGetHeight()/2;
    float SpeedY = 2;
};
