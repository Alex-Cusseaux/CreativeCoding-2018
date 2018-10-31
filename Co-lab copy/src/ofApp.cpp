#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(ofGetWidth(), ofGetHeight());
    
    gWidth = grabber.getWidth();
    gHeight = grabber.getHeight();
    
    grabberPix.allocate(gWidth, gHeight, OF_PIXELS_RGB);
    texture.allocate(gWidth, gHeight, GL_RGB);
}

//--------------------------------------------------------------
void ofApp::update(){

    float noiseScale = 0.001;   // 0.002
    float threshold = 100;
    
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        // get a fresh set of pixels to play with
        grabberPix = grabber.getPixels();
        
        for (int x = 0; x < gWidth; x++)
        {
            for (int y = 0; y < gHeight; y++)
            {
                // do something
                
                ofColor pixelColor = grabberPix.getColor(x, y);
                float brightness = pixelColor.getBrightness();
                
                // 2d Noise
                float noise = ofNoise((x + ofGetMouseX()) * noiseScale, (y + ofGetMouseY()) * noiseScale);
                
                int displacedX = x + gWidth * noise;
                int displacedY = y + gHeight * noise;
                
                displacedX = ofWrap(displacedX, 0, gWidth);
                displacedY = ofWrap(displacedY, 0, gHeight);
                
//                if (brightness > threshold) {
//                    grabberPix.setColor(x, y, ofColor::fromHsb(brightness, 255, 255)); //ofColor::fromHsb(brightness, 180, 255)
//                }else{
//                    grabberPix.setColor(x, y, ofColor(0));
//                }
                //float size = ofMap(brightness, 0., 255., 2., 25., true);
                
                if (brightness <= (255/7)) {
                    grabberPix.setColor(x, y, ofColor(255));
                    
                   
                }else if (brightness > (255/7) & brightness <= (255/7 *2)){
                    grabberPix.setColor(x, y, ofColor(0));
                }else if (brightness > (255/7 *2) & brightness <= (255/7 *3)){
                    grabberPix.setColor(x, y, ofColor(255));
                }else if (brightness > (255/7 *3) & brightness <= (255/7 *4)){
                    grabberPix.setColor(x, y, ofColor(0));
                }else if (brightness > (255/7 *4) & brightness <= (255/7 *5)){
                    grabberPix.setColor(x, y, ofColor(255));
                }else if (brightness > (255/7 *5) & brightness <= (255/7 *6)){
                    grabberPix.setColor(x, y, ofColor(0));
                }else if (brightness > (255/7 *6) & brightness <= 255){
                    grabberPix.setColor(x, y, ofColor(255));
                }
                // grab the color at the displaced location from the fresh pixels
//                ofColor displacedColor = grabber.getPixels().getColor(displacedX, displacedY);
//               grabberPix.setColor(x, y, displacedColor);
                
               
                
                
                
            }
        }
    }
    
    texture.loadData(grabberPix);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
     ofColor pixelColor = grabberPix.getColor(x, y);
    float brightness = pixelColor.getBrightness();
    for (int x = 0; x < gWidth; x++)
    {
        for (int y = 0; y < gHeight; y++)
        {
   
    for (brightness <= 100) {
        
        for(float brightness = pixelColor.getBrightness(); brightness <ofGetWidth(); brightness = brightness +10)
        {
            ofSetColor(ofColor::white);
            ofNoFill();
            ofDrawLine(brightness, 200, brightness, 400);
        }
    }
}
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2 + gWidth/2, ofGetHeight()/2 - gHeight/2);
//    float xMouse = ofMap(ofGetMouseX(),0 ,ofGetWidth(), 0.001, 1);
//    float yMouse = ofMap(ofGetMouseY(),0 ,ofGetHeight(), 0.001, 1);
//    ofScale(-xMouse, yMouse, 1);
    ofScale(-1, 1, 1);
    
    texture.draw(0, 0);
    
    ofPopMatrix();
    
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
