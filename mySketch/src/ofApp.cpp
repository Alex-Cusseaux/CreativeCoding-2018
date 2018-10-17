#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetBackgroundAuto(false);
    img1.load("round.png");
    img2.load("heart.png");
    img3.load("ring.png");
    ofSetBackgroundColor(ofColor::black);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(ofColor::white);
    ofDrawBitmapString("Controls", 100, 100);
    ofDrawBitmapString("1 - Circle Brush", 100, 115);
    ofDrawBitmapString("2 - Heart Brush", 100, 126);
    ofDrawBitmapString("3 - Ring Brush", 100, 136);
    ofDrawBitmapString("Space Bar - Clear", 100, 147);
    ofDrawBitmapString("s - Save image", 100, 157);
    
    
    
        if (active == 1 and ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
            float hue = ofRandom(255);
            ofSetColor(ofColor::fromHsb(hue, 180, 255));
            int size = ofRandom(10,250);
            img1.draw(ofGetMouseX(), ofGetMouseY(),size,size);
        
        }
    
        //whayt hapens when 2 is active
        if (active == 2 and ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
            float hue = ofRandom(255);
            ofSetColor(ofColor::fromHsb(hue, 180, 255));
            int size = ofRandom(10,250);
            img2.draw(ofGetMouseX(), ofGetMouseY(),size,size);
        }
    
    if (active == 3 and ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        int size = ofRandom(10,250);
        img3.draw(ofGetMouseX(), ofGetMouseY(),size,size);
    }
    
    
    
    
    
    
    }
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

  if (key == ' '){
      
        ofColor c = ofColor::black;
        ofClear(c);
  }

    
    if (key == '1'){
        active = 1;
        
    }
    
    if (key == '2'){
        active = 2;
        
    }
    
    if (key == '3'){
        active = 3;
        
    }
    
    if (key == 's'){
        ofSaveFrame();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
