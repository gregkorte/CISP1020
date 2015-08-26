/********************************************************
*  Name:           Functions
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    Aggregate function building
*                  you can delete the references to the 
*                  function     void exampleOfFunction()
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
using namespace std;

/************************************
*     defines
*************************************/
#define  PI  3.14159

/*************************************
*     function prototype
*************************************/
void exampleOfFunction();

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
     int inNum;
     cout << "go Buffalo!!!!" << endl;
     cout << "the value of PI is " << PI << "\n";
     
     cout << "\nenter a number 0~2: ";
     cin >> inNum;
     
     cout << "you entered a " << inNum << "\n";
     
     // function call
     exampleOfFunction();
     
     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/
void exampleOfFunction()
{
    /************************************
    *      local variables
    *************************************/
    
    // your code
}
