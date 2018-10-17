#include "Ball.h"

Ball::Ball()
{
    /* this is our costructor.
     we give default values to our ball project
     when it is created.
    */
    
    pX = ofGetWidth()/2;
    pY = ofGetHeight()/2;
    
    topSpeed = 20;
    xVelocity = topSpeed;
    yVelocity = topSpeed;
    
    xAccel = - 0.09;
    yAccel = - 0.09;
    
    dX = 1;
    dY = - 1;
    
    radius = 20;
    
    c = ofColor::fromHsb(ofRandom(255), 255, 255);
    
}

Ball::~Ball()
{
    /* rellocating memory
     (what we do w/ the momory of our destroyed object?)
     not used rn
     */
}

void Ball::setup()
{
    
}

void Ball::update()
{
    // v decreases with  acceleration
    if (xVelocity > 0)
    {
        xVelocity += xAccel;
    }
    
    if (yVelocity > 0)
    {
        yVelocity += yAccel;
    }
    
    // add velocity to position
    pX += xVelocity * dX;
    pY += yVelocity * dY;
    
    // check wallls
    
    if (pX < radius)
    {
        pX = radius;
        dX *= -1;
        xVelocity = topSpeed;
        yVelocity = topSpeed - 2;
    }
    
    if ( pX > ofGetWidth() - radius)
    {
        pX = ofGetWidth() - radius;
        dX *= -1;
        xVelocity = topSpeed;
        yVelocity = topSpeed - 2;
    }
    
    if (pY < radius)
    {
        pY = radius;
        dY *=-1;
        xVelocity = topSpeed - 2;
        yVelocity = topSpeed;
    }
    
    if (pY > ofGetHeight() - radius)
    {
        pY = ofGetHeight() - radius;
        dY *= -1;
        xVelocity = topSpeed - 2;
        yVelocity = topSpeed;
    }

}

void Ball::draw()
{
    ofSetColor(c);
    ofFill();
    ofDrawCircle(pX, pY, radius);
    
    ofSetColor(255);
    ofDrawLine(pX, pY, pX + radius, pY);
}

