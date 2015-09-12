/*************************************************************************
*  Name:       Pointers 03
*  Author:     Greg Korte
*  Date due:   15/09/14 6:00
*  Remarks:    1) Print each element in an array initialized by strcpy.
               2) Print each element in an array initialized in one line.
               3) 
*
*************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <stdio.h>
#include <string.h>                // needed for strcpy

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*          classes
****************************************/
/****************************************
*          member functions
****************************************/
/****************************************
*          function prototypes
****************************************/
void demo01();
void demo02();
void demo03();
void demo04();
void demo05();
void demo06();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
    demo01();
    demo02();
    // demo03();
    // demo04();
    // demo05();
    // demo06();

    system("pause");
    return 0;
}  // end main

/*****************************************
Section 1
*****************************************/
void demo01()
{
    cout << "\n\n  **** in Demo01 ****\n";
    // declare
    char monthName[12][15];

    // initialize
    strcpy(monthName[0], "January");
    strcpy(monthName[1], "February");
    strcpy(monthName[2], "March");
    strcpy(monthName[3], "April");
    strcpy(monthName[4], "May");
    strcpy(monthName[5], "June");
    strcpy(monthName[6], "July");
    strcpy(monthName[7], "August");
    strcpy(monthName[8], "September");
    strcpy(monthName[9], "October");
    strcpy(monthName[10], "November");
    strcpy(monthName[11], "December");

    // print
    for (int i = 0; i < 12; i++)
        cout << monthName[i] << endl;
}

/*****************************************
Section 2
*****************************************/
void demo02()
{
    cout << "\n\n  **** in Demo02 ****\n";
    // declare and initialize
    char monthName[12][15] =
        {
            {"January"},
            {"February"},
            {"March"},
            {"April"},
            {"May"},
            {"June"},
            {"July"},
            {"August"},
            {"September"},
            {"October"},
            {"November"},
            {"December"},
        };

    // print
    for (int i = 0; i < 12; i++)
        cout << monthName[i] << endl;
}

/*****************************************
Section 3
*****************************************/
void demo03()
{
    cout << "\n\n  **** in Demo03 ****\n";
    // declare and initialize
    char monthName[][15]= {"?????"};

    // print
}

/*****************************************
Section 4
*****************************************/
void demo04()
{
    cout << "\n\n  **** in Demo04 ****\n";
    // declare
    char* monthName[12];

    // allocate memory

    // load month values

    // print
}

/*****************************************
Section 5
*****************************************/
void demo05()
{
    cout << "\n\n  **** in Demo05 ****\n";
    // declare. instanciate and load the array
    // code for demo01() or demo02()

    // create a char pointer
    char* pMonthName;

    // make pointer point to the array

    // print array using the pointer
}

/*****************************************
Section 6
*****************************************/
void demo06()
{
    cout << "\n\n  **** in Demo06 ****\n";

    // create a char pointer
    char* pMonthName;
    // allocate memory
    pMonthName = new char[180];

    // load month names

    // print array using the pointer
}