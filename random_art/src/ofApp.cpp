#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
     ofSetBackgroundAuto(false);
    
    prevTime = 0;
    
    
//    int x = 0;
//
//
//
//
//
//    for (x = 1; x< 4; x++){
//    closedShapePolyline.addVertex(ofRandom(200), ofRandom(200));
//    closedShapePolyline.addVertex(ofRandom(200),ofRandom(200));
//    closedShapePolyline.addVertex(ofRandom(200),ofRandom(200));
//    closedShapePolyline.addVertex(ofRandom(200), ofRandom(200));
//
//    }
//
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(ofColor::black);
//    float time = ofGetElapsedTimef();
//
//    if ((time - prevTime)>1000) {
//        closedShapePolyline.clear();
//        prevTime = time;
    
        
    //}
    
    
    
    
    // ofSeedRandom(2);
    
    
    for (int rows=0; rows<50; rows++) {
        ofPushMatrix(); // Save the coordinate system before we shift it
       

    for (int x = 1; x < 20; x++){
        
        ofPolyline closedShapePolyline;
        
        closedShapePolyline.addVertex(ofRandom(50) + (x*50),ofRandom(50));
        closedShapePolyline.addVertex(ofRandom(50) + (x*50),ofRandom(50));
        closedShapePolyline.addVertex(ofRandom(50) + (x*50),ofRandom(50));
        closedShapePolyline.addVertex(ofRandom(50) + (x*50),ofRandom(50));
        float hue = ofRandom(255);
        ofSetColor(ofColor::fromHsb(hue, 180, 255));
        closedShapePolyline.draw();
        
        
    }
   
        ofPopMatrix(); // Return to the coordinate system before we shifted it horizontally
        ofTranslate(0, 50);
    }
    
    
    
   
//        do {
//            closedShapePolyline.addVertex(ofRandom(500), ofRandom(500));
//            closedShapePolyline.addVertex(ofRandom(500),ofRandom(500));
//            closedShapePolyline.addVertex(ofRandom(500),ofRandom(500));
//            closedShapePolyline.addVertex(ofRandom(500), ofRandom(500));
//            closedShapePolyline.draw();
//        } while (x<4);
    
    //ofPushMatrix();
    
//    for (int cols=0; cols<4; cols++) {
//
//        ofSetColor(ofColor::white);
//
//        closedShapePolyline.draw();
//        ofTranslate(250, 0);
//
//    }
//
//    ofSetColor(ofColor::white);
//       closedShapePolyline.draw();
   
   // ofPopMatrix();

    
}

