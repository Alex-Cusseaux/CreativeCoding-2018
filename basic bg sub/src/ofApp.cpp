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
    
   
}

//--------------------------------------------------------------
void ofApp::update(){
    threshold = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255, true);
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        //setp 1: convert color to grayscale
        for (int x = 0; x < gw; x++)
        {
            for (int y = 0; y < gh; y++)
            {
                int brightess =  grabber.getPixels().getColor(x , y).getBrightness();
                grayPixels.setColor(x, y, brightess);
            }
        }
        
        //step 2: grab a bg when hit space
        if (ofGetKeyPressed(' ') == true)
        {
            bgPixels = grayPixels;
        }
        
        //step 3: compare bg pix to current gray pix to create a foreground.
        for (int x = 0; x < gw; x++)
        {
            for (int y = 0; y < gh; y++)
            {
                int currentBrightess = grayPixels.getColor(x, y).getBrightness();
                int bgBrightess = bgPixels.getColor(x, y).getBrightness();
                
                int absoluteDiff = std::abs(currentBrightess - bgBrightess);
                
                if (absoluteDiff > threshold)
                {
                    diffPixels.setColor(x, y, ofColor(currentBrightess));
                } else{
                    diffPixels.setColor(x, y, ofColor(0));
                }
            }
        }
        grayTex.loadData(grayPixels);
        bgTex.loadData(bgPixels);
        diffTex.loadData(diffPixels);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(25);
    
    int halfWidth = gw/2;
    int halfHeight = gh/2;
    grabber.draw(0, 0, halfWidth, halfHeight);
    
    grayTex.draw(halfWidth, 0, halfWidth, halfHeight);
    bgTex.draw(0, halfHeight, halfWidth, halfHeight);
    bgTex.draw(0, halfHeight, halfWidth, halfHeight);
    diffTex.draw(halfWidth, halfHeight, halfWidth, halfHeight);
    
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
