// This file contains the 'main' function. Program execution begins and ends there.

//  or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/* Tips for Getting Started: 
   1. Use the Solution Explorer window to add/manage files
   2. Use the Team Explorer window to connect to source control
   3. Use the Output window to see build output and other messages
   4. Use the Error List window to view errors
   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
   6. In the future, to open this project again, go to File > Open > Project and select the .sln file */

/*  VS Hotkeys
    
    # Compilation  [ .vcxproj   -> .exe ]  [Config : Debug Win 32]
        Build               :   Ctrl + Shift + B
        Run program         :   Ctrl + F5
    
    # Editing
        Comment Section     :   Crtl + C/Q 
        Uncomment Section   :   Crtl + K/U

        
        */

// std::cout lives in the iostream library
#include <iostream>

int main()
{
    /* 1.2 comments - Writes to the console.
    Single lined Comments + New Line with \n. */
    // std::cout << "Hello World!\n";

    /* 1.3 variables 

    This tells the compiler that 'x' is a int. */

    // int a;

    // double initialization
    
    /* int b, c;
    d = 0;
    e = 0; */

    // copy initialization of value 5 into variable width - copies value in
    // int f = 0;
    // direct initialization of value 5 into variable width - is just quicker?
    // int g(0);

    // brace initialization - using curly brackets
    // copy brace initialization of value 6 into variable height
    // int h = {0};
    // direct brace initialization of value 5 into variable width (preferred)
    // int i{0};

    // multiple brace initialization (preferred)
    // int j{0}, k{0}; 
    

    /* For simple data types(like integers), copy and direct initialization
    are essentially the same.But for some advanced types, direct initialization
    can perform better than copy initialization. */

    // 1.5 Introduction to iostream: cout, cin, and endl
    /* The input/output library - Standard C++ Libary that contains a few
    predefined variables for us to use. One of the most useful is std::cout,
    which allows us to send data to the console to be printed as text.cout stands
    for “character output”. */

    //  std::cout
    // print Hello world! to console
    //std::cout << "Hello world!\n";

    // print value of a (0) to console
    //int a{ 6 };
    //std::cout << a;

    // the insertion operator (<<) allows for more data to be terminaled
    //std::cout << "\n" << "Hello" << 8 << "\n";

    // Prefer ‘\n’ over std::endl when outputting text to the console. asyouwritemore
    std::cout << "Waddup" << std::endl;
    // ask user for a number
    std::cout << "Enter a number: ";
    // define variable x to hold user input (and zero-initialize it)
    int x{ };
    std::cin >> x; 
    std::cout << "I guessed you would enter " << x << " and you did.\n";
    std::cin >> x;
    std::cout << "and then i also guessed you would reply '" << x << "' also.";
    
//There’s some debate over whether it’s necessary to initialize a variable immediately before you
//give it a user provided value via another source (e.g. std::cin), since the user-provided value
//will just overwrite the initialization value. In line with our previous recommendation that variables
//should always be initialized, best practice is to initialize the variable first.

    /* Initialization = The object is given a known value at the point of definition.
    Assignment = The object is given a known value beyond the point of definition.
    Uninitialized = The object has not been given a known value yet. */

// Take care to avoid all situations that result in undefined behavior, such as using uninitialized variables.
// Will get unassigned memory that may be empty of full -> random errors or may work fine -> always initilzie variables

// 1.8 Literals and Operators
// A literal (aka literal constant) is a fixed value that has been inserted directly into the source code.
// The value of a literal is fixed and can’t be changed, whereas the value of a variable can be changed through initialization and assignment.

// Math Operators: addition(+), subtraction(-), multiplication(*), and division(/).
// assignment (=) equality operators (==).
// << (insertion) and >> (extraction). 
// 
  
}


