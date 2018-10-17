#pragma once

#include "ofMain.h"

class scrollText{ // cotains class definitions
public:
    //has member variables & member functions
    
    
    
    scrollText(); //class constructer, initialiser
    ~scrollText();//class constructor, destructer.
    
    //the destructor will release memory when objects are destroyed
    
    //declare class functions
    void setup(string displayText);
    void update();
    void draw();
    
    //declare class varriables
    ofTrueTypeFont font;
    string text;
    
    float xPos;
    float yPos;
    float speed;
    
    ofColor c;
    int fontSize;
    
};
