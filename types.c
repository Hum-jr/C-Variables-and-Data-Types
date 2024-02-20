//
// Created by humph on 2/20/2024.
//

//Data types
//Integer
//  -signed and unsigned
//  -short and long
//  -fixed-width integer types
//  -#include <stdint.h>
//  -#inlude <inttypes.h> (C99)

//Char
//  -char,unsigned char,signed char
//  -A=65, Z=90
//  -Relies on the ASCII code

//Boolean
//  -Added in the C99 standard
//  -#include <stdbool.h>

//Enumeration

//Bit
//  -unsigned int age: 7;

//Void

//Printing and reading integer types
//We use format specifiers

//Format
//%d

//to use the complex numbers u need to import the complex header complex.h

//Derived data types
//Arrays
//Reps a collection of values with the same type and rep by a single name.
//For instance int arr[5]={1,2,3,4,5}
//Arrays have dimensions - 2D,3D...

//Using pointers
//Using structs
//Using unions
/*Union refers to a collection  of members (variables) of possibly
 different types into a single user defined type*/

//using type casting and type qualifiers

//Type casting/Typeconversion
//  -The proces of converting a data type to another type.

//Implicit type conversions

//  Integral promotion
//  Relies on type ranks
//  Promotion occurs when perfoming mathematical operations on integer values

//Usual arithmetic conversions
//  Automatically converts operands

//Type qualifiers
//  const-variables that can not be modified by the program once they are defined
//  volatile-variables that can be modified by sth outside the program


//Using Date and Time
//  #include <time.h>
//

//Using Localisation








#include <stdio.h>

int main(){
    float x = 3.0;
    printf("%f",x);
    return 0;
}
