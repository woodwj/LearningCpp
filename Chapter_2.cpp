// std::cout from iostream library
#include <iostream>

/*
functions
	1) Parameters in the brackets
	2) Datatype returned is left of funcName
	3) No Nested funcitons and i think above main func
	4) Between curly brackets is the function body
	   void returns nothing.
	5) Always provide a return value for any function
	that has a non - void return type.
	6) Function variables have local scope
	7) Local variables are destroyed in the opposite order of creation at the end
	8) Define your local variables as close to their first use as reasonable.
*/

// needed so Chapter_2.cpp knows multBy2 from ch1 - external function import
int multBy2(int x);

// example void function - no return for viod
void printDouble(int value)
{
	std::cout << value << " doubled is: " << multBy2(value) << '\n';
}

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

// forward declaration of add with ';'
int add(int x, int y);
/*
If a forward declaration is made, but the function is never called, the program will compile and run fine.
However, if a forward declaration is made and the function is called,
but the program never defines the function, the program will compile okay, 
but the linker will complain that it can’t resolve the function call.
*/

#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include "Ch1to2.h" // with double quote for header?
int main()
{
	std::cout << "This is a really, really, really, really, really, really, really, "
		"really long line\n"; // one extra indentation for continuation line
	
	printDouble(getValueFromUser());
	std::cout << "\n now i will take away two numbers, 5 and 3";
	std::cout << "\n" <<sub(5, 3);

	return EXIT_SUCCESS;
}

// parameter types within parenthesis - return num for int
int add(int x, int y)
{
	return x + y;
}


// A definition actually implements (for functions or types) or instantiates (for variables) the identifier.
//A declaration is a statement that tells the compiler about the existence of an identifier and its type information

// communicate with preprocessor - # e.g #include <iostream>
// a macro is a rule that defines how input text is converted into replacement output text
// #define MYID "123" then MYID replaced by 123 at preprocessing
// #ifdef to selectivly compile based off existance of an identifier
// closed with #endif
// macros wont replace other preprocesssor direvtives

// Header files allow us to put declarations in one location.
// This can save a lot of typing in multi-file programs.
// header files typically only contain function and variable
// declarations, not function and variable definitions