//
//  Bubble.cpp
//  learning_Bubbles
//
//  Created by Alex C Esposito on 4/15/15.
//
//

#include "Bubble.h"

Bubble::Bubble() {
    pos = ofVec2f(ofGetMouseX(), ofGetMouseY()) ;
    vel = ofVec2f(ofRandom(-3,3),ofRandom(-4,4)) ;
    rad = (int)(ofRandom(5,15) );
    rad2 = (int)(ofRandom(5,30) );
    ofColor(255,255,255) ;
}

void Bubble::setup(float _x, float _y) {
    pos = ofVec2f(_x, _y) ;
}

void Bubble::update() {
    pos += vel ;
}

void Bubble::drawCircle() {
    ofSetColor(color) ;
    ofCircle(pos, rad) ;
}

void Bubble::drawRect() {
    ofSetColor(color) ;
    ofRect(pos, rad2, rad2) ;
}
