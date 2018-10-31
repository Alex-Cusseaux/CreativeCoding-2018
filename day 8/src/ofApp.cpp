#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640, 480);
    gWidth = grabber.getWidth();
    gHeight = grabber.getHeight();
    
    grayPix.allocate(gWidth, gHeight, OF_PIXELS_GRAY);
    grayTexture.allocate(gWidth, gHeight, GL_LUMINANCE);
    // does not work
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    threshold =ofMap(ofGetMouseX(), 0, ofGetMouseY(), 0, 255, true);
    
    if (grabber.isFrameNew())
    {
        for (int x = 0; x < gWidth; x++)
        {
            for (int y = 0 ; y < gHeight; y++)
            {
                   int BrightnessValue = grabber.getPixels().getColor(x, y).getBrightness();
                if (BrightnessValue > threshold) {
                    grayPix.setColor(x, y, ofColor(0));
                }else {
                    grayPix.setColor(x, y, ofColor(BrightnessValue));
                }
                
            }
        }
        grayTexture.loadData(grayPix);
//
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(25);
    
    int halfWidth = gWidth/2;
    int halfHeight = gHeight/2;
    
    for (int x = 0; x < gWidth; x+= 20)
    {
        for (int y = 0 ; y < gHeight; y+=20)
        {
            int Brightness = grabber.getPixels().getColor(x, y).getBrightness();
            
            int rotation = ofMap(Brightness, 0, 255, 0, 180);
            
            ofColor originalColor = grabber.getPixels().getColor(x, y);
            
            ofPushMatrix;
            ofTranslate(x, y);
            ofRotateXDeg(rotation);
            //                ofRotateYDeg(rotation);
            ofSetColor(originalColor);
            ofDrawRectangle(0-10, 0-10, 20, 20);
            ofPopMatrix();
        }
    }
    
    grabber.draw(0, 0, halfWidth, halfHeight);
//    string threshstr =
//    ofDrawBitmapStringHighlight(threshStr, 10, 10);
    
    
    
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
