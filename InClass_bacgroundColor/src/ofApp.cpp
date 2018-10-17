#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    redValue = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofColor myColor;
    //using RGB
    //myColor is composed of 3 componennts: R,G,B. value 0-255
    //values do wrap
    
    
    
    myColor= ofColor(255, 0, 0);
    //or
//        myColor.r = 50;
//        myColor.g = 100;
//        myColor.b = 100;
    
//        redValue = redValue + 1;
//       greenValue += 0.5;
//       blueValue -= 1.5;
//
//
//        myColor.r = redValue;
//        myColor.g = greenValue;
//         myColor.b = blueValue;
    
    
    
    //settigs for hsb. values 0-255. but does not wrap
    //hueVal+=1;
    hueVal = rand() % 255;
    if (hueVal < 225){
        
    }
    
    std::cout << hueVal <<std::endl;
    
    myColor.setHsb(hueVal,255,255);
    
    ofBackground(myColor);
    
    
    
    
    
    
    
    
    
}

