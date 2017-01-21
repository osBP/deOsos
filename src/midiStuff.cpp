//
//  midiStuff.cpp
//  deOsos
//
//  Created by Oscar David Bravo Peña on 1/6/17.
//
//

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::midiSetup(){
    ableton.listPorts();
    ableton.openPort("Driver IAC visualsBus");
    ableton.ignoreTypes(false, false, false);
    ableton.addListener(this);
    ableton.setVerbose(false);
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage &msg){
    midiMessage = msg;
    if (algoSiempre) {
        switch (midiMessage.status) {
            case MIDI_CONTROL_CHANGE:
                cout<<"CC  ch:"<<midiMessage.channel<<" ctrl:"<<midiMessage.control<<" val:"<<midiMessage.value<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.control) {
                            case 0:
                                //something = map(midiMessage.value,0,127,0.0,1.0);
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case MIDI_NOTE_ON:
                cout<<"ON  ch:"<<midiMessage.channel<<" pitch:"<<midiMessage.pitch<<" vel:"<<midiMessage.velocity<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.pitch) {
                            case 0:
                                //something = map(midiMessage.velocity,0,127,0.0,1.0);
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case MIDI_NOTE_OFF:
                cout<<"OFF ch:"<<midiMessage.channel<<" pitch:"<<midiMessage.pitch<<" vel:"<<midiMessage.velocity<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.pitch) {
                            case 0:
                                //something = map(midiMessage.velocity,0,127,0.0,1.0);
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
    
    if (todoElRuido) {
        switch (midiMessage.status) {
            case MIDI_CONTROL_CHANGE:
                cout<<"CC  ch:"<<midiMessage.channel<<" ctrl:"<<midiMessage.control<<" val:"<<midiMessage.value<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.control) {
                            case 0:
                                //something = map(midiMessage.value,0,127,0.0,1.0);
                                break;
                                
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case MIDI_NOTE_ON:
                cout<<"ON  ch:"<<midiMessage.channel<<" pitch:"<<midiMessage.pitch<<" vel:"<<midiMessage.velocity<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.pitch) {
                            case 0:
                                //something = ofMap(midiMessage.velocity,0,127,0.0,1.0);
                                break;
                                
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case MIDI_NOTE_OFF:
                cout<<"OFF ch:"<<midiMessage.channel<<" pitch:"<<midiMessage.pitch<<" vel:"<<midiMessage.velocity<<endl;
                switch (midiMessage.channel) {
                    case 1:
                        switch (midiMessage.pitch) {
                            case 0:
                                //something = ofMap(midiMessage.velocity,0,127,0.0,1.0);
                                break;
                                
                            default:
                                break;
                        }
                        break;
                        
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
}