#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //random mum gen
    //& putting in my umber vector
    for (int i = 0; i <200; i++)
    {
        int randomNumber = ofRandom(255);
        myNumbers.push_back(randomNumber);
        // pushback -> puts on the end of the vector
    }
    
    //for size of vector, print out num at that index
    for (int i = 0; i < myNumbers.size(); i++)
    {
        int randomNumber = ofRandom(255);
        std::cout<< "number at index " << i << " = " << myNumbers[i]<<std::endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(ofColor::black);

    for (int i = 0; i < myNumbers.size(); i++)
    {
        int hue = myNumbers[i]; //sets hue from my numbers array
        
        
        ofSetColor(ofColor::fromHsb(hue, 255, 255));
        ofFill();
        ofDrawCircle(i*5, 200, 5);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    ofLog() << "new numbers";
    
    myNumbers.clear();
    for (int i = 0; i < 200; i++)
    {
        int randomNumber = ofRandom(255);
        
       myNumbers.push_back(randomNumber);
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
