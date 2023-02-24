/*
//difference between compiler and interpreter 
 1. Compiler: 
It is a translator which takes input i.e., High-Level Language, and produces an output of low-level language i.e. machine or assembly language. 

A compiler is more intelligent than an assembler it checks all kinds of limits, ranges, errors, etc.
But its program run time is more and occupies a larger part of memory. It has a slow speed because a compiler goes through the entire program and then translates the entire program into machine codes.

2. Interpreter: 
An interpreter is a program that translates a programming language into a comprehensible language. –  

It translates only one statement of the program at a time.
Interpreters, more often than not are smaller than compilers. 


// first program in c++❤️//
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Hello World";// std::cout << "Hello World";
    cout << endl;// cout << '\n'
    cin >> a;
    cout << "You entered number "<< a<< endl;
    return 0;
}


// datatypes and variables 
variable : just a named block of memory 
there are different types of datatypes 

                        --> intergers
--> built-in/ Primitive --> floating
                        --> void


               --> arrays
--> Derived    --> pointers
               --> references


                 --> structures
                 --> unions
--> User-Defined --> enumerations
                 --> classes

only the memory occupied by long will vary from 32 bit(4) and 64 bit(8)


formula for signed and unsigned numbers to find the range.
signed : -2^(n-1) - 1 to 2^(n-1)
unsigned : 0 to 2^(n) -1

sizeof() operator to find the memory occupied by a data type 

negative numbers are stored in the form of 2's compliment in the memory 


size of a datatype has two things to do
--> to define the type of data stored
--> to find out the memory occupied in the memory 

// Type Casting 
--> Implicit type casting
--> Explicit type casting 

--> Implicit : is done by the compiler automatically
eg: char ch = 97;
cout << ch<< endl ; // prints "a" here it is type casting from integer to character
int num ='c';
cout << num << endl; // prints the ascii equivalent of c
--> Explicit : is done manually by the programmers
double d = 12.4555;
int x = (int)d;
// here d which is a float type is converted to integer

Operators 
- arithmetic(% + - * /)
- relational(> < >= <= != ==)
- assignment (=)
- logical (&& || !)
- bitwise(<< >> ^ ~ )

if any calculations involve different datatypes then the result will occupy the memory occupied by the largest datatype in terms of memory



*/













