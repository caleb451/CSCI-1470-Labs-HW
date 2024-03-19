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
	// Declare a variable named randomNumber that holds whole numbers

	// Declare a variable named lowRange that holds whole numbers and initializes it to 0

	// Declare a variable named highRange that holds whole numbers and initializes it to 4

	// Seed the random number generator using expression 1) on my handout

	// Prompt the user to enter a question

	// Ignore the user input

	// Call function randNumGen() to generate a random number and assign it to randomNumber

	// Display title "Part A solution"

	// Display the message shown below
	//	"Answer: “, call function fortuneTellerA() to get the answer

	// Display title "Part B solution"

	//Displays the message shown below
	//	"Answer: “, call function fortuneTellerB() to get the answer


	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;

	test(randomNumber >= 0 && randomNumber <= 4);			// Incorrect random number (out of range)

	test(fortuneTellerA(0) == "Yes");						// Incorrect answer
	test(fortuneTellerA(1) == "Maybe");						// Incorrect answer
	test(fortuneTellerA(2) == "No");						// Incorrect answer
	test(fortuneTellerA(3) == "Ask again later");			// Incorrect answer
	test(fortuneTellerA(4) == "I don't know");				// Incorrect answer
	test(fortuneTellerA(14) == "I don't know");				// Incorrect answer

	test(fortuneTellerB(0) == "Yes");						// Incorrect answer
	test(fortuneTellerB(1) == "Maybe");						// Incorrect answer
	test(fortuneTellerB(2) == "No");						// Incorrect answer
	test(fortuneTellerB(3) == "Ask again later");			// Incorrect answer
	test(fortuneTellerB(4) == "I don't know");				// Incorrect answer
	test(fortuneTellerB(14) == "I don't know");				// Incorrect answer

	return 0;
}

//************************  Function definitions  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// This function generates a random number within a specified range.
// It receives two whole numbers : the first one is the upper boundary and
// the second one is the lower boundary used to generate the random number.
// Returns the random number generated using expression 2) on my handout




// Thisfunction uses multi - branch if - else statements to determine the answer to be 
// returned based on the number received.
// It receives the random number(whole number) and returns the corresponding answer
// based on the table shown on my handout
//
// Important: in this solution make your function directly return the answer in each
// branch of the multi - branch if - else statements.



// This function uses switch statements to determine the answer to be 
// returned based on the number received.
// It receives the random number(whole number) and returns the corresponding answer
// based on the table shown on my handout
//
// Important: in this solution declare a local variable that holds text and assign
// the corresponding answer in each case of the switch statement. Upon exiting the
// switch return the value in the local variable.