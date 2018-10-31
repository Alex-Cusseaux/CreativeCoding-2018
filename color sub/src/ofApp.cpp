#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640, 480);
    
    gw = grabber.getWidth();
    gh = grabber.getHeight();
    
    grayPixels.allocate(gw, gh, OF_PIXELS_GRAY);
    grayTex.allocate(gw, gh, GL_LUMINANCE);
    
    bgPixels.allocate(gw, gh, OF_PIXELS_GRAY);
    bgTex.allocate(gw, gh, GL_LUMINANCE);
    
    diffPixels.allocate(gw, gh, OF_PIXELS_GRAY);
    diffTex.allocate(gw, gh, GL_LUMINANCE);
    
    finalPixels.allocate(gw, gh, OF_PIXELS_GRAY);
    finalTex.allocate(gw, gh, GL_LUMINANCE);
    
   
    gui.setup();        //(label, initial val, min, max
    gui.add(threshold.set("threshold", 127, 0, 255));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(25);
    
    int halfWidth = gw/2;
    int halfHeight = gh/2;
    grabber.draw(0, 0, halfWidth, halfHeight);
    
    
    gui.draw();
//    string threshStr = "threshold ->" + ofToString(threshold);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
