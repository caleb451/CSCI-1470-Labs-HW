//******************************************************************************
// Team #             CSCI 1470      Fall 2023                    Homework # 1
// First and Last Name
// First and Last Name
//  Using your own words, write here a description of what the program does. 
// 
//******************************************************************************

#include <iostream>				// to be able to use cout
#include <typeinfo>				// to be able to use operator typeid

// Include here all the libraries that you need for your program to compile.



using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main()
{
// Enter here your algorithm as a series of MEANINGFUL steps.
// Write below EACH step of the algorithm the C++ statement that implements it.






// ----------------------------- Your code ends here -----------------------------

// Do NOT remove or modify the following statements

	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(DOL2MEX) == typeid(1.));			// Incorrect data type used for DOL2MEX
	test(typeid(DOL2EURO) == typeid(1.));			// Incorrect data type used for DOL2EURO
	test(typeid(pesos) == typeid(1.));				// Incorrect data type used for pesos
	test(typeid(euros) == typeid(1.));				// Incorrect data type used for euros
	test(typeid(wholedollarsp) == typeid(1));		// Incorrect data type used for wholedollarsp
	test(typeid(centdollarsp) == typeid(1));		// Incorrect data type used for centdollarsp
	test(typeid(wholedollarse) == typeid(1));		// Incorrect data type used for wholedollarse
	test(typeid(centdollarse) == typeid(1));		// Incorrect data type used for centdollarse
	test(typeid(wholetotal) == typeid(1));			// Incorrect data type used for wholetotal
	test(typeid(centtotal) == typeid(1));			// Incorrect data type used for centtotal
	if (pesos == 254.19 && euros == 48.36)			// Does not pass test 1
	{
		test(wholedollarsp == 14 && centdollarsp == 55);
		test(wholedollarse == 51 && centdollarse == 45);
		test(wholetotal == 66 && centtotal == 0);
	}
	if (pesos == 188.25 && euros == 130.00)				// Does not pass test 2
	{
		test(wholedollarsp == 10 && centdollarsp == 78);
		test(wholedollarse == 138 && centdollarse == 30);
		test(wholetotal == 149 && centtotal == 8);
	}
	if (pesos == 200.00 && euros == 200.00)			// Does not pass test 3
	{
		test(wholedollarsp == 11 && centdollarsp == 45);
		test(wholedollarse == 212 && centdollarse == 77);
		test(wholetotal == 224 && centtotal == 22);
	}
	if (pesos == 856.70 && euros == 93.07)				// Does not pass test 4
	{
		test(wholedollarsp == 49 && centdollarsp == 4);
		test(wholedollarse == 99 && centdollarse == 1);
		test(wholetotal == 148 && centtotal == 5);
	}

	return 0;
}
