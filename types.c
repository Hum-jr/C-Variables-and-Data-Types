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
//using the header <locale.h>

//TYpes
//







#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

struct employee{
    uint8_t employeeNro;
    char name[200];
    float salary;
    int age:7;
    struct tm dob;
};

const char companyName[100]="SingularSight";
void readEmployees(struct employee * employees,int nEmployees);
void printEmployees(struct employee employee[100],int employees);

int main(){
    struct employee employess[100];
    int nEmployee;

    printf("Welcome to the employee system of: %s\n",companyName);
    printf("How many employees do you want to import:");

    scanf("%d",&nEmployee);
    readEmployees(employess,nEmployee);
    printEmployees(employess,nEmployee);


    exit(0);
}

void readEmloyees(struct employee * employees,int nEmployees){
    for (int i=0; i < nEmployees; i++){
        printf("Processing employee %d \n",i+1);
        printf("Please provide the employee number,salary and DOB (dd/mm/yyyy): ");

        char empName[200];
        int dayDob,monthDob,yearDob;
        scanf("%s %d %f %d/%d/%d",empName,&employees[i].employeeNro,&employees[i].salary,&dayDob,&monthDob,&yearDob);

        strcpy(employees[i].name,empName);

        struct tm dobObj;
        dobObj.tm_yday =dayDob;
        dobObj.tm_mon = monthDob;
        dobObj.tm_year = yearDob-1900;

        time_t currTimeSec;
    }
}

void printEmployees(struct employee employees[100],int nEmployees){
    printf("\n");
    setlocale(LC_ALL,"");
    struct lconv * currentLocale = localeconv();

    printf("Printing employees list: \n");
    for (int i = 0; i < nEmployees; ++i) {
        struct employee emp = employees[i];
        printf("Name: %s Employee No: %s Salary: %.2f DOB: %02d/%02d/%d Age: %d\n",emp.name,emp.salary, currentLocale -> int_curr_symbol,emp.dob.tm_yday,emp.dob.tm_mon,emp.dob.tm_year+1900,emp.age);

    }
}