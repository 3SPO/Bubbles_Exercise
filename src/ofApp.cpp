#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(50) ;
    ofSetFrameRate(60) ;
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(255) ;
    Bubble tempBubble ;
    Bubble tempBubble2 ;
    tempBubble.color.setHsb(ofMap(ofGetMouseX(),0 , ofGetWindowWidth(), 0, 255),255,255) ;
    tempBubble2.color.setHsb(ofMap(ofGetMouseX(),0 , ofGetWindowWidth(), 255, 0),ofMap(ofGetMouseY(),0 , ofGetWindowHeight(), 0, 255),255) ;
    tempBubble2.pos = ofVec2f(ofGetWindowWidth()/2,ofGetWindowHeight()/2) ;
    bubbles.push_back(tempBubble) ;
    bubbles2.push_back(tempBubble2) ;
    for(int i=0;i<bubbles.size();i++) {
        float distance = ofDist(512, 384, bubbles[i].pos.x, bubbles[i].pos.y) ;
        if (distance >= 750) bubbles.erase(bubbles.begin() + i) ;
        bubbles[i].update() ;
    }
    for(int i=0;i<bubbles2.size();i++) {
        float distance = ofDist(512, 384, bubbles2[i].pos.x, bubbles2[i].pos.y) ;
        if (distance >= 750) bubbles2.erase(bubbles2.begin() + i) ;
        bubbles2[i].update() ;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<bubbles.size();i++) {
        bubbles[i].drawCircle() ;
    }
    for(int i=0;i<bubbles2.size();i++) {
        bubbles2[i].drawRect() ;
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
