//
//  algoSiempre.cpp
//  deOsos
//
//  Created by Oscar David Bravo Peña on 1/6/17.
//
//

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::algoSiempreSetup(){
    ofEnableSmoothing();
    ofBackground(0);
    ofVec3f origin(0,0,0);
    
    cam.setTarget(origin);
    light.setPointLight();
    light.setPosition(2000, 2000, 2000);
    //shader.load("shadersGL3/shader");
}

//--------------------------------------------------------------
void ofApp::algoSiempreUpdate(){
    color.w= 0;
    color.x= 0;
    color.y= 0;
    color.z= 0;
}

//--------------------------------------------------------------
void ofApp::algoSiempreDraw(){
    float percentX = mouseX / (float)ofGetWidth();
    percentX = ofClamp(percentX, 0, 1);
    ofColor colorLeft = ofColor::magenta;
    ofColor colorRight = ofColor::cyan;
    ofColor colorMix = colorLeft.getLerped(colorRight, percentX);
    ofSetColor(colorMix);
    //cam.setDistance(150);
    light.enable();
    cam.begin();
    //shader.begin();
    //shader.setUniform1f("time", ofGetElapsedTimef());
    ofNoFill();
    triangulation.draw();
    //shader.end();
    cam.end();
    light.disable();
}