#pragma once

#include "ofMain.h"
#include "Ball.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void mousePressed(int x, int y, int button);
    

    Ball ball1;
    Ball ball2;
    Ball ball3;
    Ball ball4;
    Ball ball5;
	
    std::vector<Ball> balls;
    const int NUM_BALLS = 500;
};
