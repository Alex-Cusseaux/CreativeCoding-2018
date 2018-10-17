#pragma once

#include "ofMain.h"
// .h is the class file
// .cpp is what we do w said class


class Ball {
public:
    Ball();     //costructor
    ~Ball();    //destructor
    
    // fuctions
    void setup();
    void update();
    void draw();
    
    
    
    //ball has dirrection for x & y
    int dX;
    int dY;
    
    // position of ball
    float pY;
    float pX;
    
    // acceleration of ball
    float xAccel;
    float yAccel;
    
    //velocity of ball
    float xVelocity;
    float yVelocity;
    
    //radius of ball
    int radius;
    
    //top speed of ball
    float topSpeed;
    
    //color of ball
    ofColor c;
    
    
    
};

