#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxJSON.h"

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
                ofRectangle buttonHEX;


		//--------------------------------------

		//------------ANJALY--------------------

                   ofRectangle button8;
                   ofRectangle button5;
                   ofRectangle button2;
                   ofRectangle button9;
                   ofRectangle button6;
                   ofRectangle buttonPercentage;
                   ofRectangle buttonPi;


		//--------buttons for the HEX page-----------------
             //---------------anjaly-------------------------------
                        ofRectangle buttonA;
                        ofRectangle buttonB;
                        ofRectangle buttonC;
                        ofRectangle buttonD;
                         ofRectangle buttonE;
                         ofRectangle buttonF;
        
		//------------ANJALI--------------------
                ofRectangle buttonh1;
                ofRectangle buttonh2;
                ofRectangle buttonh3;
                ofRectangle buttonh4;
                ofRectangle buttonh5;
                ofRectangle buttonh6;
                ofRectangle buttonh7;
                ofRectangle buttonh8;
                ofRectangle buttonh9;
                ofRectangle buttonh0;

                ofRectangle buttonPlusH;
                ofRectangle buttonXH;
                ofRectangle buttonMinusH;
                ofRectangle buttonDivH;

                ofRectangle buttonEqualH;

                ofRectangle buttonClearH;

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
                 void ValueOfPi();
      
	
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
bool isNewNumber = true;
bool buttonPNClicked = false;
bool buttonClicked = false;
bool isNegative = false; // Track whether the number is negative or positive
bool decimalRepeat = false;

//converting hex number to decimal
ofxJSONElement json;
string hexToDecimal();
		
};
