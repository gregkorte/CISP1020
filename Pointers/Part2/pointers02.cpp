/********************************************************
*  Name:           Pointers 02
*  Author:         Greg Korte
*  Date due:       15/09/14 6:00
*  Description:    This function receives no parameters
*                  and returns no value.
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
using namespace std;

/************************************
*     defines
*************************************/

/*************************************
*     function prototype
*************************************/
  void arithmetic(int, int, float*, float*);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/

    int inHeight;
    int inRadius;
    float *pArea;
    float *pVolume;

    *pArea = calcArea;
    *pVolume = calcVolume;

    cout << "Enter a height." << endl;
    cin >> inHeight;

    cout << "Enter a radius." << endl;
    cin >> inRadius;

    // function call
    arithemtic(inHeight, inRadius, *pArea, *pVolume);

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
void arithmetic(int, int, float*, float*)
{
    /************************************
    *      local variables
    *************************************/

    totalSqft = lengthIn*widthIn;
    totalAcres = totalSqft/sqftPerAcre;

    cout << "Radius is " << inRadius << ", Height is " << inHeight << endl;
    cout << "\t\t***Using the pointers***" << endl;
    cout << "\t\t\tArea:\t\t" << *pArea << endl;
    cout << "\t\t\tVolume:\t\t" << *pVolume << endl;

}