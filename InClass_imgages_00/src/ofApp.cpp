#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //load someimages to beready to display.
    img1.load("kitty.png");
    img2.load("gradient.png");
    img3.load("network.png");
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofBackground(ofColor::pink);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        int size = ofRandom(10,250);
         img1.draw(ofGetMouseX(), ofGetMouseY(),size,size);
    }
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        int size = ofRandom(10,250);
        img2.draw(ofGetMouseX(), ofGetMouseY(),size,size);
    }
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_MIDDLE)){
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        int size = ofRandom(10,250);
        img3.draw(ofGetMouseX(), ofGetMouseY(),size,size);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        float hue = ofRandom(255);
        ofColor c = ofColor::fromHsb(hue, 180, 255);
        ofClear(c);
    }
    
    if (key == 's'){
        ofSaveFrame();
        
    }
    
}


