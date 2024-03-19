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

using  namespace  std;

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
	// Declare variables amount (amount in cents), count25 (quantity of quarters), count10 (quantity of dimes),
	// count5 (quantity of nickels), count1 (quantity of pennies), and count (quantity of coins) to hold whole values

	// Prompt the user to "Enter amount in cents to be returned as change: "

	// Read the value from the keyboard and store it in the corresponding variable

	// Call coinChanger() to calculate the quantity of each type of coin and the total number of coins
	// that are needed to provide a given change

	// Call function printChange() to print the amount of change, the quantity of each type of coin and the total number of coins


	
						// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	//test(typeid(cents) == typeid(1));					// Incorrect data type used for cents
	test(typeid(count25) == typeid(1));						// Incorrect data type used for count25
	test(typeid(count10) == typeid(1));						// Incorrect data type used for count10
	test(typeid(count5) == typeid(1));						// Incorrect data type used for count5
	test(typeid(count1) == typeid(1));						// Incorrect data type used for count1
	test(typeid(amount) == typeid(1));						// Incorrect data type used for amount
	test(typeid(count) == typeid(1));						// Incorrect data type used for count
	coinChanger(71, count25, count10, count5, count1, count);
	test(count25 == 2 );										// Incorrect quantity of quarters
	test(count10 == 2);										// Incorrect quantity of dimes
	test(count5 == 0);										// Incorrect quantity of nickels
	test(count1 == 1);										// Incorrect quantity of pennies
	coinChanger(69, count25, count10, count5, count1, count);
	test(count25 == 2);										// Incorrect quantity of quarters
	test(count10 == 1);										// Incorrect quantity of dimes
	test(count5 == 1);										// Incorrect quantity of nickels
	test(count1 == 4);										// Incorrect quantity of pennies
	coinChanger(14, count25, count10, count5, count1, count);
	test(count25 == 0);										// Incorrect quantity of quarters
	test(count10 == 1);										// Incorrect quantity of dimes
	test(count5 == 0);										// Incorrect quantity of nickels
	test(count1 == 4);										// Incorrect quantity of pennies

	return 0;
}

//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement


// Calculate the quantity of each type of coin and the total number of coins that are needed to provide a given change
// and return all these values along with the total number of coins that are needed for the change





// Print the amount of cents, the quantity of each type of coin and the total number of coins 
// according to the format specifies on my handout
