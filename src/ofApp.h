#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
#include "ofxDelaunay.h"
#include "ofxSyphon.h"
//#include "ofxFPSCamera.h"

class ofApp : public ofBaseApp, public ofxMidiListener {

	public:
		void setup();
		void update();
		void draw();
        void exit();
		void keyPressed(int key);
    void mouseReleased(int x, int y, int button);
    
    ofxSyphonServer mainOutputSyphonServer;
    //------------LightsAndCamera---------------------------------
    //ofxFPSCamera camFPS;
    
    //------------------MIDI--------------------------------------
    void midiSetup();
    void newMidiMessage(ofxMidiMessage& eventArgs);
    ofxMidiMessage midiMessage;
    ofxMidiIn ableton;
    
	//-----------General_Booleans---------------------------------
    bool todoElRuido,algoSiempre;
    
    //----------------algoSiempre---------------------------------
    void algoSiempreSetup();
    void algoSiempreUpdate();
    void algoSiempreDraw();
    ofxDelaunay triangulation;
    ofEasyCam cam;
    ofLight light;
    ofShader shader;
    ofVec4f color;
    
    //----------------todoElRuido---------------------------------
    
};
