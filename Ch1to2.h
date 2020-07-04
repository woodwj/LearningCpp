#pragma once
// 1) We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)
// 2) This is the content of the .h file, which is where the declarations go

#ifndef SubUsed
#define SubUsed
// function prototype for the header
int sub(int x, int y);
#endif
/* When writing a source file, include the corresponding header
(If one exists), even if you don’t need it yet. */

/* angled brackets tell the preprocessor we are including a header file
included with the compiler and that it should look in system directories
quotes is from  a user defined header file*/

// Use angled brackets to include header files that come with the compiler.
// Use double quotes to include any other header files.

// Each file should explicitly #include all of the header files it needs to compile. Do not rely on headers included transitively from other headers.
// Order your #includes as follows: your own user-defined headers first, then 3rd party library headers, then standard library headers, with the headers in each section sorted alphabetically.

// Header file best practices
/*
 Always include header guards (we’ll cover these next lesson).
 Do not define variables and functions in header files (global constants are an exception -- we’ll cover these later)
Give your header files the same name as the source files they’re associated with (e.g. grades.h is paired with grades.cpp).
Each header file should have a specific job, and be as independent as possible.
Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files
Every header you write should compile on its own
Only #include what you need
Do not #include .cpp files.
*/


// prevents dupolicate imports