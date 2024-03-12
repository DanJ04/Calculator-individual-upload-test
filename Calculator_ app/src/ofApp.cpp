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
	buttonDiv.set(380, 100, 100, 100);
	buttonX.set(380, 220, 100, 100);
	buttonMinus.set(380, 340, 100, 100);
	buttonPlus.set(380, 460, 100, 100); 
	button3.set(260, 460, 100, 100);

		//--------------------------------------


		//------------ANJALI--------------------
	//buttonInterface.set(20, 20, 460, 60); an idea for the size of the interface
	buttonClear.set(20, 100, 100, 100);
        button7.set(20, 220, 100, 100);
        button4.set(20, 340, 100, 100);
        buttonPandN.set(20, 580, 100, 100); // plus and minus sign for positive and negative numbers


		//--------------------------------------

		//------------ANJALY-----------------------------
                button8.set(140, 220, 100, 100);
                button5.set(140, 340, 100, 100);
                button2.set(140, 460, 100, 100);
	        button2.set(140, 460, 100, 100);
                button9.set(260, 220, 100, 100);
                button6.set(260, 340, 100, 100);
                
                
 
  
   
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
      	ofSetColor(255, 165, 0); //changed the colour to match the other operators(DAN)
	ofDrawRectangle(buttonEqual); //Equal button, Decimal place button and number 0 drawn by Kieran
	ofSetColor(180);
        ofDrawRectangle(buttonDecimal);
        ofDrawRectangle(button0);
	//-------------------------------------


	//------------DAN----------------------
	ofSetColor(255, 165, 0);
	ofDrawRectangle(buttonDiv);
	ofDrawRectangle(buttonX);
	ofDrawRectangle(buttonMinus);
	ofDrawRectangle(buttonPlus);
	ofSetColor(180);
	ofDrawRectangle(button3);
 
	//--------------------------------------


	//------------ANJALI--------------------
	ofDrawRectangle(buttonClear);
	ofDrawRectangle(button7);
	ofDrawRectangle(button4);
	ofDrawRectangle(buttonPandN);
	//--------------------------------------

	//------------ANJALY--------------------
       ofDrawRectangle(button8);
       ofDrawRectangle(button5);
       ofDrawRectangle(button2);
       ofDrawRectangle(button9);
       ofDrawRectangle(button6);
      


 
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
	 testFont.drawString("/", 415, 170);
	 testFont.drawString("X", 420, 290);
	 testFont.drawString("-", 420, 410);
	 testFont.drawString("+", 415, 530); 
	 testFont.drawString("3", 300, 530);

	//--------------------------------------


	//------------ANJALI--------------------
	testFont.drawString("C", 55, 170); // Clear number drawn
	testFont.drawString("7", 55, 290);
	testFont.drawString("4", 55, 410); 
	testFont.drawString("+/-", 30, 650); // plus and minus sign drawn


	//--------------------------------------

	//------------ANJALY--------------------
           //adds the text for each number
          testFont.drawString("8", 180, 290);
           testFont.drawString("5", 180, 410);
           testFont.drawString("2", 180, 530);
	testFont.drawString("9", 300, 290);
         testFont.drawString("6", 300, 410);


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
