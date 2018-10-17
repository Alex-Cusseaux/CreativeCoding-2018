#include "ofApp.h"

scrollText::scrollText()     //initial val for var
{
    fontSize = ofRandom(3, 48);
    font.load("/Library/Fonts/Optima.ttc", fontSize);
    
    xPos = ofGetWidth();
    yPos = 200;
    speed = ofRandom(1, 10);
    
}

scrollText::~scrollText()
{
    //nothing to destruct
}

void scrollText::setup(string displayText)  //has to match fuction in .h
{
    /*pass in displaytext from "outside" of our main app/
     use this to set up object text value*/
    text = displayText;
}

void scrollText::update()
{
    //move to the left by speed every update
    xPos += speed;
    
    //get bounding box of text
    ofRectangle boundingBox = font.getStringBoundingBox(text, xPos, yPos);
    //get the width of the box
    int boundingBoxWidth = boundingBox.width;
    
    //the if text gets to a point, reset to right side of screen
    if (xPos <= 0 - boundingBoxWidth) {
        xPos = ofGetWidth();
    }
    ofLog() << xPos;
}

void scrollText::draw()
{
    font.drawString(text,xPos,yPos);
}
