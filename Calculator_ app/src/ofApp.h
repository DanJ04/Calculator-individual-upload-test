#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:

		//--------------------------------------
		// a new screen for the HEX page
		enum ScreenState {
			MAIN_SCREEN,
			HEX_SCREEN,
		};

		// always start with the main screen
		ScreenState currentScreen = MAIN_SCREEN;

		//--------------------------------------


		void setup();
		void update();
		void draw();

		ofTrueTypeFont testFont;
		ofSoundPlayer resultSound;
                //---------KIERAN----------------------
		ofRectangle button1;
		ofRectangle buttonEqual;
		ofRectangle buttonDecimal;
		ofRectangle button0;
		//-------------------------------------


		//------------DAN----------------------
		ofRectangle buttonPlus;
		ofRectangle buttonX;
		ofRectangle buttonMinus;
		ofRectangle buttonDiv; 
		ofRectangle button3;

		//--------------------------------------


		//------------ANJALI--------------------
                ofRectangle buttonClear;
                ofRectangle button7;
                ofRectangle button4;
                ofRectangle buttonPandN; // plus and minus sign for positive and negative numbers


		//--------------------------------------

		//------------ANJALY--------------------

                   ofRectangle button8;
                   ofRectangle button5;
                   ofRectangle button2;
                   ofRectangle button9;
                   ofRectangle button6;
                   ofRectangle buttonPercentage;


		//--------buttons for the HEX page-----------------



		//------------ANJALY--------------------



		//--------------------------------------


		//------------ANJALY--------------------


		//--------------------------------------



		//--------------------------------------

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);



		//extra functions for functionality
		void appendNumber(const string& number);
		void processOperator(const string& op);
		void calculate();
                void percentage();

	
		//variables for functionality.
		string currentNum;
		string totalNum;
		string operatorState;
		float num1 = 0;
		float num2 = 0;

// Declare a member variable to store the running total
float runningTotal = 0;

// Declare a member variable to indicate whether the calculation has been performed
bool calculationPerformed = false;
		
};
