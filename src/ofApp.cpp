#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    algoSiempreSetup();
    algoSiempre = true;
    todoElRuido = false;
    ofSetWindowTitle("ofxStupidMidiSyphon Test");
    mainOutputSyphonServer.setName("Screen Output");
}

//--------------------------------------------------------------
void ofApp::update(){
    algoSiempreUpdate();
}

//--------------------------------------------------------------
void ofApp::draw(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    algoSiempreDraw();
    mainOutputSyphonServer.publishScreen();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(algoSiempre){
        switch (key) {
            case 'p':
                triangulation.addPoint( ofPoint( ofRandom(-2000,2000),ofRandom(-2000,2000),ofRandom(-2000,2000) ) );
                triangulation.triangulate();
                break;
            case 'r':
                triangulation.reset();
                break;
            default:
                break;
        }
    }
}

//--------------------------------------------------------------
void ofApp::exit(){
    cout<<"exit"<<endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}
