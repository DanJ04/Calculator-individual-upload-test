#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//loads font
	testFont.load("Calculator.ttf", 50);

		//---------KIERAN----------------------
	button1.set(20, 460, 100, 100);
        buttonEqual.set(380, 580, 100, 100); //Setup of buttons pushed by kieran
        buttonDecimal.set(260, 580, 100, 100);
        button0.set(140, 580, 100, 100);
		//-------------------------------------


		//------------DAN----------------------


		//--------------------------------------


		//------------ANJALI--------------------
	//buttonInterface.set(20, 20, 460, 60); an idea for the size of the interface
	buttonClear.set(20, 100, 100, 100);
        button7.set(20, 220, 100, 100);
        button4.set(20, 340, 100, 100);
        buttonPandN.set(20, 580, 100, 100); // plus and minus sign for positive and negative numbers


		//--------------------------------------

		//------------ANJALY--------------------


		//--------------------------------------
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);            
    ofSetColor(180); 
    //draw button
	//---------KIERAN----------------------
	ofDrawRectangle(button1); 
        ofDrawRectangle(buttonEqual); //Equal button, Decimal place button and number 0 drawn by Kieran
        ofDrawRectangle(buttonDecimal);
        ofDrawRectangle(button0);
	//-------------------------------------


	//------------DAN----------------------

 
	//--------------------------------------


	//------------ANJALI--------------------
	ofDrawRectangle(buttonClear);
	ofDrawRectangle(button7);
	ofDrawRectangle(button4);
	ofDrawRectangle(buttonPandN);
	//--------------------------------------

	//------------ANJALY--------------------


	//--------------------------------------
   

    
  
	//---------KIERAN----------------------
	ofSetColor(255);
	//adds the text for each number
	testFont.drawString("1", 60, 530);
	testFont.drawString(".", 305, 640); //Decimal point drawn
	testFont.drawString("0", 180, 650); //Number 0 drawn
	testFont.drawString("=", 420, 650); //Equals operator drawn
	//-------------------------------------


	//------------DAN----------------------


	//--------------------------------------


	//------------ANJALI--------------------
	testFont.drawString("C", 55, 170); // Clear number drawn
	testFont.drawString("7", 55, 290);
	testFont.drawString("4", 55, 410); 
	testFont.drawString("+/-", 30, 650); // plus and minus sign drawn


	//--------------------------------------

	//------------ANJALY--------------------


	//--------------------------------------
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
