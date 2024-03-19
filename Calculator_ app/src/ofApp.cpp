#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//loads font
	testFont.load("Calculator.ttf", 50);

	//---------KIERAN----------------------
	button1.set(20, 500, 100, 100);
	buttonEqual.set(380, 620, 100, 100); //Setup of buttons pushed by kieran
	buttonDecimal.set(260, 620, 100, 100);
	button0.set(140,620, 100, 100);
	//-------------------------------------


	//------------DAN----------------------
	buttonDiv.set(380, 140, 100, 100);
	buttonX.set(380, 260, 100, 100);
	buttonMinus.set(380, 380, 100, 100);
	buttonPlus.set(380, 500, 100, 100);
	button3.set(260, 500, 100, 100);

	//--------------------------------------


	//------------ANJALI--------------------
    //buttonInterface.set(20, 20, 460, 100); // an idea for the size of the interface
	buttonClear.set(20, 140, 100, 100);
	button7.set(20, 260, 100, 100);
	button4.set(20, 380, 100, 100);
	buttonPandN.set(20, 620, 100, 100); // plus and minus sign for positive and negative numbers


	//--------------------------------------

	//------------ANJALY-----------------------------
	button8.set(140, 260, 100, 100);
	button5.set(140, 380, 100, 100);
	button2.set(140, 500, 100, 100);
	button9.set(260, 260, 100, 100);
	button6.set(260, 380, 100, 100);
	button%.set(260, 140, 100, 100);





	//--------------------------------------


}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

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
	//ofDrawRectangle(buttonInterface);

	//--------------------------------------

	//------------ANJALY--------------------
	ofDrawRectangle(button8);
	ofDrawRectangle(button5);
	ofDrawRectangle(button2);
	ofDrawRectangle(button9);
	ofDrawRectangle(button6);
	ofDrawRectangle(button%);




	//--------------------------------------




	//---------KIERAN----------------------
	ofSetColor(255);
	//adds the text for each number
	testFont.drawString("1", 60, 570);
	testFont.drawString(".", 305, 680); //Decimal point drawn
	testFont.drawString("0", 180, 690); //Number 0 drawn
	testFont.drawString("=", 420, 690); //Equals operator drawn
	//-------------------------------------


	//------------DAN----------------------
	testFont.drawString("/", 415, 210);
	testFont.drawString("X", 420, 330);
	testFont.drawString("-", 420, 450);
	testFont.drawString("+", 415, 570);
	testFont.drawString("3", 300, 570);

	//--------------------------------------


	//------------ANJALI--------------------
	testFont.drawString("C", 55, 210); // Clear number drawn
	testFont.drawString("7", 55, 330);
	testFont.drawString("4", 55, 450);
	testFont.drawString("+/-", 30, 690); // plus and minus sign drawn


	//--------------------------------------

	//------------ANJALY--------------------
		   //adds the text for each number
	testFont.drawString("8", 180, 330);
	testFont.drawString("5", 180, 450);
	testFont.drawString("2", 180, 570);
	testFont.drawString("9", 300, 330);
	testFont.drawString("6", 300, 450);
        testFont.drawString("%", 285, 210);


	//--------------------------------------
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	
	if (button1.inside(x, y)) {
		appendNumber("1"); // Append "1" to the current number
	}

	if (button2.inside(x, y)) {
		appendNumber("2"); // Append "2" to the current number
	}

	if (button3.inside(x, y)) {
		appendNumber("3"); // Append "3" to the current number
	}
	if (button4.inside(x, y)) {
		appendNumber("4"); // Append "4" to the current number
	}
	if (button5.inside(x, y)) {
		appendNumber("5"); // Append "5" to the current number
	}
	if (button6.inside(x, y)) {
		appendNumber("6"); // Append "6" to the current number
	}
	if (button7.inside(x, y)) {
		appendNumber("7"); // Append "7" to the current number
	}
	if (button8.inside(x, y)) {
		appendNumber("8"); // Append "8" to the current number
	}
	if (button9.inside(x, y)) {
		appendNumber("9"); // Append "9" to the current number
	}
	if (button0.inside(x, y)) {
		appendNumber("0"); // Append "0" to the current number
	}

	if (buttonPlus.inside(x, y)) {
		processOperator("+"); // Process addition operator
	}

	if (buttonDecimal.inside(x, y)) {
		appendNumber("."); // Process decimal operator
	}

	if (buttonDiv.inside(x, y)) {
		processOperator("/"); // Process divison operator
	}

	if (buttonX.inside(x, y)) {
		processOperator("*"); // Process multiplication operator
	}

	if (buttonEqual.inside(x, y)) {
		calculate(); // Calculate the result
	}

	if  (buttonMinus.inside (x, y)) {
		processOperator("-"); // process substraction operator
	}
	if (buttonPandN.inside(x, y)) {
		appendNumber("-"); //negative integers
	}

	if (buttonPercentage.inside(x, y)) {
	percentage(); // Process percentage function
	}

	if (buttonClear.inside(x, y)) {
	currentNum.clear(); // Clear the current number
	totalNum.clear(); // Clear the total number
	operatorState.clear(); // Clear the operator state
	return; // Return to avoid executing other button checks
	}
}

void ofApp::percentage() {
	if (!currentNum.empty()) {
		float currentNumber =  stof(currentNum); // Convert the current number to a float
		float result = currentNumber * 0.01; // Calculate the percentage
		currentNum = to_string(result);// Convert the result back to a string
		cout << "%" << endl; // Output the percentage symbol 
	}
}


void ofApp::appendNumber(const string& number) {
	currentNum.append(number); // Append the given number to the current number
	cout << currentNum << endl; // Output the updated current number 
}

void ofApp::processOperator(const string& op) {
	if (!currentNum.empty()) {
		num1 = stof(currentNum); // Convert the current number to an integer and store it as num1
		operatorState = op; // Store the operator(+,-,%....)
		currentNum.clear(); // Clear the current number to start entering the next number
		cout << operatorState << endl; // Output the operator 
	}
}

void ofApp::calculate() {
	if (!currentNum.empty()) {
		num2 = stof(currentNum); // Convert the current number to an integer and store it as num2
		float Total = 0;

		//Plus function(DAN)----------------
		if (operatorState == "+") {
			Total = num1 + num2; // Perform addition operation
		}
		//----------------------------------

		//Divison function(KIERAN)------------
		if (operatorState == "/") {
			Total = num1 / num2; // Perform divison operation
		}
		//-----------------------------------

		//Multiplication function(Anjali)------------
		if (operatorState == "*") {
			Total = num1 * num2; // Perform multiplication operation
		}
		//Substraction function(Anjaly)-----------------------------------
                if (operatorState == "-") {
			Total = num1 - num2; // perform substraction operation
		}
	
		
		cout << Total << endl; // Output the total 
		totalNum = to_string(Total); // Store the total as a string
		currentNum.clear(); // Clear the current number for next input
		operatorState.clear(); // Reset the operator state for next calculation
	}
}




//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
