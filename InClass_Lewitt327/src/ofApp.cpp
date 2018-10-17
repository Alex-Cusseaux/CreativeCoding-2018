#include "ofApp.h"

// _Wall Drawing #327_ - On a black wall, a white trapezoid within which are white vertical parallel lines and a white square within which are white horizontal parallel lines. The vertical lines within the trapezoid do not enter the square, and the horizontal lines within the square do not enter the trapezoid.


//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //PUTS RECT DEFAULT ATARTING POINT AS CENTER
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    //background color
    ofBackground(ofColor::black);
    
    //get width and height of screen
    int width= ofGetWidth();
    int height = ofGetHeight();
    //get center of screen
    // float centerX = width/2;
    // float centerY = height/2;
    
    //a white trapezoid
        //set top width of trap
        float topWidth = 400;
        //sets bottom width of trap
        float bottomWidth = 600;
        //set hight of trap
        float trapHeight = 300;
    
    
    float centerX = ofGetMouseX();
    float centerY = ofGetMouseY();
    
    
    
        //4 points of trap
        //vec2 is made up (x, y)
        glm::vec2 p0;
        glm::vec2 p1;
        glm::vec2 p2;
        glm::vec2 p3;
    
        //set cords for p0
        p0.x = centerX - topWidth/2;
        p0.y = centerY - trapHeight/2;
    
        p1.x = centerX + topWidth/2;
        p1.y = centerY - trapHeight/2;
    
        p2.x = centerX - bottomWidth/2;
        p2.y = centerY + trapHeight/2;
    
        p3.x = centerX + bottomWidth/2;
        p3.y = centerY + trapHeight/2;
    
        //gives point coordiates
       // std::cout<<p0<<" "<< p1<< " "<< p2 << " "<< p3 <<std::endl;
    
        //draw trapezoid
        ofNoFill();
        ofSetColor(255);
        ofDrawLine(p0, p1);
        ofDrawLine(p1, p3);
        ofDrawLine(p2, p3);
        ofDrawLine(p2, p0);
    
    
    //within which are vertical paralell lines
        //line spacing
        int spacing = 10;
    
        //set coord from where the vertical lines will start ad end on the x axis
        int lineStart = (centerX - bottomWidth/2)+1;
        int lineEnd = centerX + bottomWidth/2;
    
        for (int x =  lineStart ; x < lineEnd ; x += spacing)
        {
            //use x to set x positio of line. use just x instead of x+1 for normal lies
            ofDrawLine(x, centerY - trapHeight/2, x+1, centerY + trapHeight/2 );
            
        }
    
        ofFill();
        ofSetColor(0);
        ofDrawRectangle(0, 0, width, centerY - trapHeight/2);
        //ofDrawRectangle(0, height, width, centerY - bottomWidth/2);
    
        //makes mask point from where p2 is on x, where p0 is on y
        glm::vec2 maskLeft(p2.x, p0.y);
        ofDrawTriangle(p0, p2, maskLeft);
        //same but right
        glm::vec2 maskRight(p3.x, p1.y);
        ofDrawTriangle(p1, p3, maskRight);
    
    int squareSize = 200;
    //white square w horizontal paralel lines
    glm::vec2 rectPoint(centerX , centerY);
    //mask
    ofFill();
    ofSetColor(0);
    ofDrawRectangle(rectPoint, squareSize, squareSize);
    
    ofNoFill();
    ofSetColor(255);
    ofDrawRectangle(rectPoint, squareSize, squareSize);
    
    
    //set coord from where the vertical lines will start ad end on the x axis
   
  
    for(int i=centerY - squareSize/2; i <centerY + squareSize/2; i=i+spacing)
    {
        ofSetColor(ofColor::white);
        ofDrawLine(centerX - squareSize/2, i - 1, centerX + squareSize/2, i);
        
    }
    
    
    
    
        //GETS A PARTICULAR POINT IN SPACE (at the center)
            glm::vec2 center(centerX, centerY);
            ofFill();
            ofSetColor(ofColor::white);
            ofDrawCircle(center, 10);
    
    
    
    
    
    
    
    
    
    
    
    
    
    

}


