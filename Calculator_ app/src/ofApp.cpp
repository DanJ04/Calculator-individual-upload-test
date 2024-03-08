#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	testFont.load("Calculator.ttf", 50);
	button1.set(50, 500, 100, 100);
	buttonEqual.set(390, 580, 100, 100); //Setup of buttons pushed by kieran
   	buttonDecimal.set(270, 580, 100, 100);
   	button0.set(20, 580, 230, 100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);            
    ofSetColor(180); 
    //draw button
    ofDrawRectangle(button1); 
    ofDrawRectangle(buttonEqual); //Equal button, Decimal place button and number 0 drawn by Kieran
    ofDrawRectangle(buttonDecimal);
    ofDrawRectangle(button0);

    
    ofSetColor(255);
    //adds the text for each number
    testFont.drawString("1", 85,570);
    testFont.drawString(".", 315, 640); //Decimal point drawn
    testFont.drawString("0", 120, 650); //Number 0 drawn
    testFont.drawString("=", 430, 650); //Equals operator drawn

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
