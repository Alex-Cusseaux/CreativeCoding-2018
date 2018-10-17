#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("/Library/Fonts/Chalkduster.ttf", 20);
    sentences = ofSplitString(ofBufferFromFile("novel.txt").getText(),".", true, true);
    
    /*
	 usual for loop
        for(int i = 0;i < sentences.size(); i++)
        {
            ofLog() << sentences[i];
        }
	 
    	only works on things w a size
    	will also hit everything
	 */
	
	//auto will guess the type of data being pulled out, like string, int, etc.
    for (auto SingleLine : sentences)
     {
        ofLog() << SingleLine;
     }
	text = sentences[0];
}

//--------------------------------------------------------------
void ofApp::update(){
/*


		//move to the left by speed every update
	xPos += speed;

		//get bounding box of text
	ofRectangle boundingBox = font.getStringBoundingBox(text, xPos, yPos);
		//get the width of the box
	int boundingBoxWidth = boundingBox.width;

		//the if text gets to a point, reset to right side of screen
	if (xPos <= 0 - boundingBoxWidth) {
		xPos = ofGetWidth();
	}

	ofLog() << xPos;
 */
}

//--------------------------------------------------------------
void ofApp::draw(){
	
    ofSetBackgroundColor(ofColor::black);
	
	
/*	for( int i = 0; i < amount; i++)
	{
		 font.drawString(sentences[i], xPos, yPos);
	}
*/
	
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

	//yPos = ofGetMouseY();
	
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
//--------------------------------------------------------------

