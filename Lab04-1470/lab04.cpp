/////////////////////////////////////////////////////////////////////
//
// Name: <Put your name here>
// Date: <Today's date>
// Class: <Your class number and section number, like: CSCI 1470.02>
// Semester: <This semester, like: Spring 2012>
// CSCI 1470 Instructor: <Your lecture instructor's name>
//
// Using your own words describe below what the program does 
// Program Description: 
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to be able to use std I/O (cin, cout)
#include <cmath>				// to be able to use predefined functions
#include <typeinfo>				// to be able to use operator typeid

// Include here all the other libraries that required for the program to compile


using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int  main( )
{
	// Declares variable Name that holds text

	// Declares variables a, h, k that hold whole numbers

	// Declares variables x1 and x2 that hold double precision real numbers

	// Prompts the user to "Please enter your name: "

	// Reads the name from keyboard and stores it in the corresponding variable

	// Displays title "Please enter the known terms for the quadratic equation:"

	// Prompts the user to enter a

	// Reads the value from the keyboard and stores it in the corresponding variable

	// Prompts the user to enter h

	// Reads the value from the keyboard and stores it in the corresponding variable

	// Prompts the user to enter k

	// Reads the value from the keyboard and stores it in the corresponding variable

	// Displays "Thanks ", name

	// Calculates x1 using the formula -h + square root(k/a)

	// Rounds x1 to the second decimal digit and reassigns it to x1

	// Calculates x2 using the formula -h - square root(k/a)

	// Rounds x2 to the second decimal digit and reassigns it to x2

	// Formats the output to display the solutions in fixed format with two decimal digits

	// Prints a message like the one below:
	// "The solutions for the equation are:"
	//                                 "x1: ", x1
	//								   "x2: ", x2

	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(name) == typeid(string));		// Incorrect data type used for name
	test(typeid(x1) == typeid(double));				// Incorrect data type used for x1
	test(typeid(x2) == typeid(double));				// Incorrect data type used for x2
	test(typeid(a) == typeid(int));					// Incorrect data type used for a
	test(typeid(k) == typeid(int));					// Incorrect data type used for k
	test(typeid(h) == typeid(int));					// Incorrect data type used for h
	if (a == 4 && h == 2 && k == 3)					// Incorrect value of x1 (check expressions for calculating x1 and for rounding x1)
		test(fabs(fabs(x1) - 1.13) < 0.001);
	if (a == 4 && h == 2 && k == 3)					// Incorrect value of x2 (check expressions for calculating x2 and for rounding x2) 
		test(fabs(fabs(x2) - 2.87) < 0.001);

    return 0 ;								//  Successful completion
}









