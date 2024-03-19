/////////////////////////////////////////////////////////////////////
//
// Name: <Put your name here>
// Due date:
// Class: <Your class number and section number, like: CSCI 1470.02>
// Semester: <This semester, like: Spring 2012>
// CSCI 1470 Instructor: <Your lecture instructor's name>
//
// Using your own words describe below what the program does 
// Program Description: 
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid

// Include here the libraries and anything else that your program needs to compile



// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototypes of the functions


int main()
{
// declare a variable named letter to hold the letter entered by the user

// declare a variable named digit to hold the digit returned by the functions

// display the title "Converts a capital letter to a digit on the telephone"

// prompt the user to enter a single capital letter

// get the value from the keyboard and store it in the corresponding variable

// display "Solution A"

// call letter2digitA() to get the corresponding digit for the given letter and assign it digit

// if there is a matching digit for the letter entered

//  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"

// otherwise

//  display the message "There is no matching digit for the letter ", letter, " entered"

// display "Solution B"

// call letter2digitB() to get the corresponding digit for the given letter and assign it digit

// if there is a matching digit for the letter entered

//  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"

// otherwise

//  display the message "There is no matching digit for the letter ", letter, " entered"



// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;

	test(letter2digitA('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('1') == '?');				// Incorrect letter to digit correlation

	test(letter2digitB('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('1') == '?');				// Incorrect letter to digit correlation

	return 0;                               // Indicate successful
}                                           //   completion


//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
// 
// This function uses COMPLEX CONDITIONAL EXPRESSIONS to determine the matching digit for the letter entered
// Works with RANGE of letters to determine the digit


// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
//
// This function uses MULTI-BRANCH IF-ELSE STATEMENTS to determine the matching digit for the letter entered
// Works with RANGE of letters to determine the digit
