#include "ofApp.h"

// NET force equals mass times acceleration
// drag force = (velocity * velocity) * dragCo * (velocity.normalized) * -1
// gravity force =
// ( gravityCo * mass1 * mass2 / (distance * diastance) ) * normralized(attractor position - particle position)
//--------------------------------------------------------------
void ofApp::setup()
{
    //ofSetBackgroundAuto(false);
	
    ofTexture(unicorn);
    ofLoadImage(unicorn, "unicorn0.png");
    
    ofTexture(unicorn1);
    ofLoadImage(unicorn1, "unicorn1.png");
    
    ofTexture(unicorn2);
    ofLoadImage(unicorn2, "unicorn2.png");
    
    ofTexture(unicorn3);
    ofLoadImage(unicorn3, "unicorn3.png");
    
    ofTexture(unicorn4);
    ofLoadImage(unicorn4, "unicorn4.png");
    
    ofTexture(unicorn5);
    ofLoadImage(unicorn5, "unicorn5.png");
    
    std::vector<ofTexture> textures;
    textures = {unicorn, unicorn1, unicorn2, unicorn3, unicorn4, unicorn5};
    
    backgroundImg.load("moon.png");
    
    for (int y = 0; y < backgroundImg.getHeight(); y+=4 )
    {
        for (int x = 0; x < backgroundImg.getWidth(); x+= 4) {
            ofColor pixelColor = backgroundImg.getColor(x, y);
            
            Particle p;
            p.position = glm::vec3(x, y, 0);
            p.velocity = glm::vec3(0.1, 0.1, 0);
            p.radius = ofRandom(1, 4);
            p.color = ofColor(pixelColor, 100);
            
            particles.push_back(p);
            
        }
    }
    
    
    
//    for (int i = 0; i < 30; i++)
//    {
//
//        int randomUnicorn = ofRandom(0,textures.size());
//        Particle p;
//        p.position = glm::vec3(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 0);
//        p.velocity = glm::vec3(0.01, 0.01, 0);
//        p.radius = ofRandom(50, 100);
//
//        p.tex = textures[randomUnicorn];
//        p.color = ofColor(ofRandom(255),255,255,100);
//        particles.push_back(p);
//    }
}

//--------------------------------------------------------------
void ofApp::update()
{
	glm::vec3 mousePos(ofGetMouseX(), ofGetMouseY(), 0);
	
	for (auto &p : particles)
	{
		float dragCo = 0.01;
		glm::vec3 dragMagnitude = (p.velocity * p.velocity) * dragCo;
		glm::vec3 dragDirection = glm::normalize(p.velocity) * -1;
		
		glm::vec3 drag = dragMagnitude * dragDirection;
		
		glm::vec3 gravityForce = computeGravity(p, mousePos);
        
//        float distance = glm::distance(mousePos, p.position); //distace
//        glm::vec3 directionVec = mousePos - p.position; //dirrection
//        glm::vec3 direction = glm::normalize(directionVec); //scale it to get unit vector
//
//
//        float magnitude = distance * 0.01; //someScaleumber
//         gravityForce = magnitude * direction * forceDirection;
//
//
		if (ofGetMousePressed())
		{
			p.applyForce(gravityForce);
		}
		
		p.applyForce(drag); //apply drag every frame
		p.update();
	}
}


        


glm::vec3 ofApp::computeGravity(Particle &part, glm::vec3 &attractor)
{
	float gravityConst = 50;
	
	// get the direction (normalized vector) form particle to attractor
	glm::vec3 direction = glm::normalize(attractor - part.position);
	
	// get the distance from attractor to particle
	float distance = glm::distance(attractor, part.position);
	// clamp it!
	distance = ofClamp(distance, 5, 25);
	
	// compute the magnitude of the force using the mass of the particle and gravity constant
	float magnitude = (gravityConst * part.mass) / (distance * distance);
	
	// a force has direction and magnitude
	glm::vec3 gravity = direction * magnitude;

	return gravity;
    
    if (ofGetKeyPressed(' ')) {
        particles.clear();
    }
    
}
/*
 int idex x * (y+image.getwidth());
 particles[index].position = {x, y, 0}
 */


//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackground(20);
//
//    backgroundImg.draw(0,0, ofGetWidth(), ofGetHeight());
//    ofPopStyle();
//
   for (auto &p : particles)
   {
     p.draw();
   }
    ofSetColor(255, 255, 255);
    string frameStr = "FRamerate ::" + ofToString(ofGetFrameRate());
    ofDrawBitmapString(frameStr, 20, 20);
    
    string partStr = "particles ::" + ofToString(particles.size());
    ofDrawBitmapString(partStr, 20, 40);
    
    ofPopStyle();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
// if (key == 't')
// {
//     forceDirection = 1;
// }
//
//    if (key == 'y')
//    {
//        forceDirection = -1;
//    }
    
//     if (key == ' ')
//         {
//             particles.();
//         }
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
