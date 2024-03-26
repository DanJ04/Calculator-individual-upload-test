#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//loads font
	testFont.load("Calculator.ttf", 50);
	resultSound.load("videoplayback.WAV");

	//---------KIERAN----------------------
	button1.set(20, 500, 100, 100);
	buttonEqual.set(380, 620, 100, 100); //Setup of buttons pushed by kieran
	buttonDecimal.set(260, 620, 100, 100);
	button0.set(140, 620, 100, 100);
	historyButton.set(375, 20, 50, 50);
	//-------------------------------------


	//------------DAN----------------------
	buttonDiv.set(380, 140, 100, 100);
	buttonX.set(380, 260, 100, 100);
	buttonMinus.set(380, 380, 100, 100);
	buttonPlus.set(380, 500, 100, 100);
	button3.set(260, 500, 100, 100);

	//--------------------------------------


	//------------ANJALI--------------------
	buttonClear.set(20, 20, 100, 100);
	button7.set(20, 260, 100, 100);
	button4.set(20, 380, 100, 100);
	buttonPandN.set(20, 620, 100, 100); // plus and minus sign for positive and negative numbers
	buttonHEX.set(140, 140, 100, 100);

	//--------------------------------------

	//------------ANJALY-----------------------------
	button8.set(140, 260, 100, 100);
	button5.set(140, 380, 100, 100);
	button2.set(140, 500, 100, 100);
	button9.set(260, 260, 100, 100);
	button6.set(260, 380, 100, 100);
	buttonPercentage.set(260, 140, 100, 100);
	buttonPi.set(20, 140, 100, 100);
	//--------------------------------------

	//--------buttons for the HEX page-----------------

	//------------Anjaly-------------------------
	buttonA.set(20, 356, 100, 76);
	buttonB.set(140, 356, 100, 76);
	buttonC.set(260, 356, 100, 76);
	buttonD.set(20, 260, 100, 76);
	buttonE.set(140, 260, 100, 76);
	buttonF.set(260, 260, 100, 76);
	//--------------------------------------



        //------------ANJALI--------------------
	buttonh1.set(20, 644, 100, 76);
	buttonh2.set(140, 644, 100, 76);
	buttonh3.set(260, 644, 100, 76);
	buttonh4.set(20, 548, 100, 76);
	buttonh5.set(140, 548, 100, 76);
	buttonh6.set(260, 548, 100, 76);
	buttonh7.set(20, 452, 100, 76);
	buttonh8.set(140, 452, 100, 76);
	buttonh9.set(260, 452, 100, 76);
	buttonh0.set(380, 620, 100, 100);

	buttonDivH.set(260, 140, 100, 100);
	buttonXH.set(380, 140, 100, 100);
	buttonMinusH.set(380, 260, 100, 100);
	buttonPlusH.set(380, 380, 100, 100);
	buttonEqualH.set(380, 500, 100, 100);

	buttonClearH.set(20, 140, 100, 100);


	//--------------------------------------


}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	// Draw different elements based on the current screen state
	switch (currentScreen) {
	case MAIN_SCREEN:
		
		ofBackground(0);
		ofSetColor(180);
		//draw button
		testFont.drawString(operatorState, 415, 100);
		testFont.drawString(currentNum, 150, 100);
		

		//---------KIERAN----------------------
		ofDrawRectangle(button1);
		ofSetColor(255, 165, 0); //changed the colour to match the other operators(DAN)
		ofDrawRectangle(buttonEqual); //Equal button, Decimal place button and number 0 drawn by Kieran
		ofSetColor(180);
		ofDrawRectangle(buttonDecimal);
		ofDrawRectangle(button0);
		ofDrawRectangle(historyButton);
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
		ofDrawRectangle(buttonHEX);

		//--------------------------------------

		//------------ANJALY--------------------
		ofDrawRectangle(button8);
		ofDrawRectangle(button5);
		ofDrawRectangle(button2);
		ofDrawRectangle(button9);
		ofDrawRectangle(button6);
		ofDrawRectangle(buttonPercentage);
		ofDrawRectangle(buttonPi);
		//--------------------------------------




		//---------KIERAN----------------------
		ofSetColor(255);
		//adds the text for each number
		testFont.drawString("1", 60, 570);
		testFont.drawString(".", 305, 680); //Decimal point drawn
		testFont.drawString("0", 180, 690); //Number 0 drawn
		testFont.drawString("=", 420, 690); //Equals operator drawn
		testFont.drawString("H", 385, 65);
		//-------------------------------------


		//------------DAN----------------------
		testFont.drawString("/", 415, 210);
		testFont.drawString("X", 420, 330);
		testFont.drawString("-", 420, 450);
		testFont.drawString("+", 415, 570);
		testFont.drawString("3", 300, 570);

		//--------------------------------------


		//------------ANJALI--------------------
		testFont.drawString("C", 55, 90); // Clear number drawn
		testFont.drawString("7", 55, 330);
		testFont.drawString("4", 55, 450);
		testFont.drawString("+/-", 30, 690); // plus and minus sign drawn
		testFont.drawString("HEX", 150, 210);


		//--------------------------------------

		//------------ANJALY--------------------
			   //adds the text for each number
		testFont.drawString("8", 180, 330);
		testFont.drawString("5", 180, 450);
		testFont.drawString("2", 180, 570);
		testFont.drawString("9", 300, 330);
		testFont.drawString("6", 300, 450);
		testFont.drawString("%", 285, 210);
		testFont.drawString("pi", 55, 200);



		//--------------------------------------

		break;
		//--------------------------------------
	case HEX_SCREEN:
		ofBackground(0);
		ofSetColor(180);
		testFont.drawString(operatorState, 415, 100);
                testFont.drawString(currentNum, 150, 100);

		//-----------------anjaly-------
		ofDrawRectangle(buttonA);
		ofDrawRectangle(buttonB);
		ofDrawRectangle(buttonC);
		ofDrawRectangle(buttonD);
		ofDrawRectangle(buttonE);
		ofDrawRectangle(buttonF);

		//---------------anjali----------
		ofDrawRectangle(buttonHEX);
		ofDrawRectangle(buttonClearH);
		ofDrawRectangle(buttonh1);
		ofDrawRectangle(buttonh2);
		ofDrawRectangle(buttonh3);
		ofDrawRectangle(buttonh4);
		ofDrawRectangle(buttonh5);
		ofDrawRectangle(buttonh6);
		ofDrawRectangle(buttonh7);
		ofDrawRectangle(buttonh8);
		ofDrawRectangle(buttonh9);
		ofDrawRectangle(buttonh0);

		ofSetColor(255, 165, 0);
		ofDrawRectangle(buttonDivH);
		ofDrawRectangle(buttonXH);
		ofDrawRectangle(buttonMinusH);
		ofDrawRectangle(buttonPlusH);
		ofDrawRectangle(buttonEqualH);





		//--------------Anjali------------------------
		ofSetColor(255);
		testFont.drawString("HEX", 150, 210);
		testFont.drawString("C", 55, 210);

		testFont.drawString("/", 285, 210);
		testFont.drawString("X", 420, 210);
		testFont.drawString("-", 420, 330);
		testFont.drawString("+", 415, 450);
		testFont.drawString("=", 420, 570);

		testFont.drawString("1", 50, 704);
		testFont.drawString("2", 175, 704);
		testFont.drawString("3", 295, 704);
		testFont.drawString("4", 50, 608);
		testFont.drawString("5", 175, 608);
		testFont.drawString("6", 295, 608);
		testFont.drawString("7", 50, 512);
		testFont.drawString("8", 175, 512);
		testFont.drawString("9", 295, 512);
		testFont.drawString("0", 420, 690);


		//-------------Anjaly-----------------------
		testFont.drawString("A", 50, 416);
		testFont.drawString("B", 175, 416);
		testFont.drawString("C", 295, 416);
		testFont.drawString("D", 50, 320);
		testFont.drawString("E", 175, 320);
		testFont.drawString("F", 295, 320);

		//--------------------------------------
		break;
	}

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

	switch (currentScreen) {
	case MAIN_SCREEN:
		if (buttonHEX.inside(x, y)) {
			// Switch to the hex screen
			currentScreen = HEX_SCREEN;
			Clear();
		}
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
			if (!decimalRepeat) {
				appendNumber(".");
				decimalRepeat = true; //avoids repeating decimals(e.g 1.1.1)
			}
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

		if (buttonMinus.inside(x, y)) {
			processOperator("-"); // process substraction operator
		}

		
		if (buttonPandN.inside(x, y)) {
			if (!buttonClicked) {
				appendNumber("-"); // negative integers
				isNegative = true; 
			}
			else {
				if (isNegative) {
					// Change to positive
					currentNum.clear(); // Clear the previous minus sign
					appendNumber("+"); // Append plus sign
					isNegative = false; 
				}
				else {
					// Change to negative
					currentNum.clear(); // Clear the previous plus sign
					appendNumber("-"); // Append minus sign
					isNegative = true; 
				}

			buttonClicked = true; // Mark the button as clicked
		}

			buttonClicked = true; // Mark the button as clicked
		}

		if (buttonPercentage.inside(x, y)) {
			percentage(); // Process percentage function
		}
		if (buttonPi.inside(x, y)) {
			ValueOfPi(); // Process pi function
		}


		if (buttonClear.inside(x, y)) {
			Clear();
		}

		if (historyButton.inside(x, y)) {
			// Assuming "ofApp" is the name of your class instance
			if (!totals.empty()) {
				// Move to the previous index in the vector
				currentIndex = (currentIndex - 1 + totals.size()) % totals.size();
				float total = totals[currentIndex];
				if (total == static_cast<int>(total)) {
					currentNum = to_string(static_cast<int>(total)); // Update currentNum from history without decimal
				}
				else {
					currentNum = to_string(total); // Update currentNum from history with decimal
				}
			}
			else {
				cout << "History is empty!" << endl;
			}
		}
		break;
		
		//--------------------------------------
	case HEX_SCREEN:

		if (buttonHEX.inside(x, y)) {
			// Switch to the main screen
			currentScreen = MAIN_SCREEN;
			Clear();
		}
				if (buttonh1.inside(x, y)) {
			appendNumber("1"); // Append "1" to the current number
		}
		if (buttonh2.inside(x, y)) {
			appendNumber("2"); // Append "2" to the current number
		}
		if (buttonh3.inside(x, y)) {
			appendNumber("3"); // Append "3" to the current number
		}
		if (buttonh4.inside(x, y)) {
			appendNumber("4"); // Append "4" to the current number
		}
		if (buttonh5.inside(x, y)) {
			appendNumber("5"); // Append "5" to the current number
		}
		if (buttonh6.inside(x, y)) {
			appendNumber("6"); // Append "6" to the current number
		}
		if (buttonh7.inside(x, y)) {
			appendNumber("7"); // Append "7" to the current number
		}
		if (buttonh8.inside(x, y)) {
			appendNumber("8"); // Append "8" to the current number
		}
		if (buttonh9.inside(x, y)) {
			appendNumber("9"); // Append "9" to the current number
		}
		if (buttonh0.inside(x, y)) {
			appendNumber("0"); // Append "0" to the current number
		}


		if (buttonA.inside(x, y)) {
			appendNumber("A"); // Append "A" to the current number
		}
		if (buttonB.inside(x, y)) {
			appendNumber("B"); // Append "B" to the current number
		}
		if (buttonC.inside(x, y)) {
			appendNumber("C"); // Append "C" to the current number
		}
		if (buttonD.inside(x, y)) {
			appendNumber("D"); // Append "D" to the current number
		}
		if (buttonE.inside(x, y)) {
			appendNumber("E"); // Append "E" to the current number
		}
		if (buttonF.inside(x, y)) {
			appendNumber("F"); // Append "F" to the current number
		}


		if (buttonPlusH.inside(x, y)) {
			currentNum = hexToDecimal(); // convert the hex number to decimal
			processOperator("+"); // Process addition operator
		}
		if (buttonMinusH.inside(x, y)) {
			currentNum = hexToDecimal(); // convert the hex number to decimal
			processOperator("-"); // process substraction operator
		}
		if (buttonDivH.inside(x, y)) {
			currentNum = hexToDecimal(); // convert the hex number to decimal
			processOperator("/"); // Process divison operator
		}
		if (buttonXH.inside(x, y)) {
			currentNum = hexToDecimal(); // convert the hex number to decimal
			processOperator("*"); // Process multiplication operator
		}

		if (buttonEqualH.inside(x, y)) {
			currentNum = hexToDecimal();// convert the hex number to decimal
			cout << "Decimal"<< endl;
			calculate(); // Calculate the result
			currentNum = DecimalTohex();//covert the decimal to hexadecimal
			cout << "Hexadecimal\nTotal Calculated: " + currentNum << endl;
		}

		if (buttonClearH.inside(x, y)) {
			Clear();
		}
		break;
	}
}

void ofApp::Clear() {
	currentNum.clear(); // Clear the current number
	totalNum.clear(); // Clear the total number
	operatorState.clear(); // Clear the operator state
	runningTotal = 0; // Reset the running total to zero
	calculationPerformed = false;
	decimalRepeat = false;
	return; // Return to avoid executing other button checks
}

string ofApp::hexToDecimal() {
	size_t negativePosition = currentNum.find('-'); 
	bool negative = false; // Initialize a boolean variable to track negative sign
	string positive; 
        if (negativePosition != string::npos) { 
		positive = currentNum.erase(negativePosition, 1); // Erase 1 character starting from negativePosition 
		negative = true; // Set negative to true if negative sign was found
        };
	// Construct the API URL
	std::string url = "https://networkcalc.com/api/binary/" + currentNum + "?from=16";

	// Load JSON from the API
	ofxJSONElement json;
	if (!json.open(url)) {
		ofLogError() << "Failed to parse JSON from API";
		return " ";
	}
	
	string result = json["converted"].asString();
	 // If the number was negative, add the negative sign back 
	if (negative) { 
		result = "-" + result; 
	}
	return result;
}
string ofApp::DecimalTohex() {
	// Find the position of the decimal point
	size_t decimalPosition = currentNum.find('.');
	size_t negativePosition = currentNum.find('-'); 
	bool negative = false; // Initialize a boolean variable to track negative sign
	string positive = currentNum; 
        if (negativePosition != string::npos) { 
		positive.erase(negativePosition, 1); // Erase 1 character starting from negativePosition 
		negative = true; // Set negative to true if negative sign was found
        };
	
	// Extract the substring before the decimal point
	string integerPart = positive.substr(0, decimalPosition);

	std::string url = "https://networkcalc.com/api/binary/" + integerPart + "?from=10&to=16";

	// Load JSON from the API
	ofxJSONElement json;
	if (!json.open(url)) {
		ofLogError() << "Failed to parse JSON from API";
		return " ";
	}
	string result = json["converted"].asString();
	 // If the number was negative, add the negative sign back 
	if (negative) { 
		result = "-" + result; 
	}
	return result;
}

void ofApp::percentage() {
	if (!currentNum.empty()) {
		float currentNumber = stof(currentNum); // Convert the current number to a float
		float result = currentNumber * 0.01; // Calculate the percentage
		currentNum = to_string(result); // Update the running total with the percentage
		cout << "Percentage Calculated: %" << endl; // Output the percentage symbol 
	}

}
void ofApp::ValueOfPi() {
	if (!currentNum.empty()) {
		float currentNumber = stof(currentNum); // Convert the current number to a float
		float result = currentNumber * 3.14159265359; // Calculate the pi
		currentNum = to_string(result);  // Update the running total with the pi
		cout << "pi Calculated:pi" << endl; // Output the pi symbol 
	}
}
void ofApp::appendNumber(const string& number) {
	currentNum.append(number); // Append the given number to the current number
	cout << "Number Appended: " << currentNum << endl; // Output the updated current number 
}

void ofApp::processOperator(const string& op) {
	if (!calculationPerformed) {
		// If no calculation has been performed, store the current number and the operator
		if (!currentNum.empty()) {
			runningTotal = stof(currentNum); // Set the running total to the current number
			operatorState = op; // Store the operator
			calculationPerformed = true; // Mark that calculation has been performed
			currentNum.clear(); // Clear the current number to start entering the next number
			cout << "Operator Pressed: " << operatorState << endl; // Output the operator
			decimalRepeat = false;
		}
		else {
			cout << "Invalid Operation: No current number entered" << endl;
		}
	}
	else {
		// If a calculation has been performed, add the current number to the running total
		if (!currentNum.empty()) {
			float num2 = stof(currentNum); // Convert the current number to a float
			if (operatorState == "+") {
				runningTotal += num2; // Perform addition operation
			}
			else if (operatorState == "/") {
				if (num2 != 0) { // Check if divisor is not zero
					runningTotal /= num2; // Perform division operation
				}
				else {
					// Handle division by zero error
					cout << "Error: Division by zero" << endl;
					return;
				}
			}
			else if (operatorState == "*") {
				runningTotal *= num2; // Perform multiplication operation
			}
			else if (operatorState == "-") {
				runningTotal -= num2; // Perform subtraction operation
			}

			operatorState = op; // Store the new operator
			currentNum.clear(); // Clear the current number to start entering the next number
			cout << "Operator Pressed: " << operatorState << endl; // Output the operator
		}
		else {
			cout << "Invalid Operation: No current number entered" << endl;
		}
	}
}

void ofApp::calculate() {
	if (!currentNum.empty()) {
		float num2 = stof(currentNum); // Convert the current number to a float
		if (operatorState == "+") {
			runningTotal += num2; // Perform addition operation
		}
		else if (operatorState == "/") {
			if (num2 != 0) { // Check if divisor is not zero
				runningTotal /= num2; // Perform division operation
			}
			else {
				// Handle division by zero error
				cout << "Error: Division by zero" << endl;
				return;
			}
		}
		else if (operatorState == "*") {
			runningTotal *= num2; // Perform multiplication operation
		}
		else if (operatorState == "-") {
			runningTotal -= num2; // Perform subtraction operation
		}
		else if (operatorState == "") {
			runningTotal = num2; // if no operator then total == current number
		}

		if (runningTotal == static_cast<int>(runningTotal)) {
			currentNum = to_string(static_cast<int>(runningTotal));
		}
		else {
			currentNum = to_string(runningTotal);
		}

		cout << "Total Calculated: " << currentNum << endl; // Output the running total 
		operatorState.clear(); // Reset the operator state for next calculation
		resultSound.play();

		totals.push_back(runningTotal); // Store the running total in the vector

	
		cout << "History: ";
		for (auto it = totals.rbegin(); it != totals.rend(); ++it) { //Using for statement to save history from start to end
			cout << *it << " "; //Outputs the history everytime
		}
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
