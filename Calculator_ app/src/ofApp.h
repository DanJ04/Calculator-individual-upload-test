#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofTrueTypeFont testFont;
                //---------KIERAN----------------------
		ofRectangle button1;
		ofRectangle buttonEqual;
		ofRectangle buttonDecimal;
		ofRectangle button0;
		//-------------------------------------


		//------------DAN----------------------


		//--------------------------------------


		//------------ANJALI--------------------
                ofRectangle buttonClear;
                ofRectangle button7;
                ofRectangle button4;
                ofRectangle buttonPandN; // plus and minus sign for positive and negative numbers


		//--------------------------------------

		//------------ANJALY--------------------


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

		
};
