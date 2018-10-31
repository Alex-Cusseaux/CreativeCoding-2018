#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{

    sound1.load("23646_loofa_A_002.wav");
    sound2.load("3 Thieves & A Liar Synth 1.wav");
    
    sound1.play();
    sound2.play();
    
    sound1.setLoop(true);
    sound2.setLoop(true);
    
    sound1.setVolume(0.7);  //set volume betweenn 0 and 1
    sound2.setVolume(0.7);
    
    /*
     set 1 is ormal speed
     set 2 is double speed
     set less than one bu† positive number will go slower
     set -1 will play backwards
     */
    sound1.setSpeed(1);
    sound2.setSpeed(1);
    
    //set pan is for 3d sounds
    // -1 is left speaker
    // 1 is right speaker
    sound1.setPan(-1);
    sound2.setPan(1);
    
}

//--------------------------------------------------------------
void ofApp::update()
{
    //updates sound engine
    ofSoundUpdate();
    
    // use ofNoise to set pitch values
    //we will use sin() to set vol
    
    float time = ofGetElapsedTimef();
    float noiseMagnitude = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0.0, 5.0);
    float sinMagnitude = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0.0, 5.0);
    
    pitch1 = ofNoise(time * noiseMagnitude) * 4 - 2;
    sound1.setSpeed(pitch1);
    
    vol1 = sin(time * sinMagnitude) * 0.5 + 0.5;
    sound1.setVolume(vol1);
    
    pitch2 = ofNoise(time * 2.0) * 4 - 2;
    sound2.setSpeed(pitch2);
    vol2 = sin(time * 0.2) * 0.5 + 0.5;
    sound2.setVolume(vol2);
    
}

//--------------------------------------------------------------
void ofApp::draw()
{
    float xPos1 = ofMap(pitch1, -2.0, 2.0, 0.0, ofGetWidth());
    float yPos1 = ofMap(vol1, 0.0, 1.0, 0.0, ofGetHeight());
    
    float xPos2 = ofMap(pitch2, -1.0, 1.5, 0.0, ofGetWidth());
    float yPos2 = ofMap(vol2, 0.0, 1.0, 0.0, ofGetHeight());
    
    ofBackground(25);
    //get positio folows where in the sample u currently are
    if (sound1.getPosition() < 0.1)
    {
        ofSetColor(255, 255, 0);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofFill();
    ofDrawCircle(xPos1, yPos1, 50);
    
    
    if (sound2.getPosition() < 0.1)
    {
        ofSetColor(0, 255, 255);
    } else {
        ofSetColor(255, 255, 0);
    }
    ofFill();
    ofDrawCircle(xPos2, yPos2, 50);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

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
