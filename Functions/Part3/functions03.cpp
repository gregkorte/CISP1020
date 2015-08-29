/********************************************************
*  Name:           Functions 03
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    This function receives no parameters
*                  and returns a value.
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
float noArgsHasRet();

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/

    // function call
    float totalAcres = noArgsHasRet();

    cout << totalAcres << endl;

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
float noArgsHasRet()
{
    /************************************
    *      local variables
    *************************************/

    float lengthIn;
    float widthIn;
    float sqftPerAcre = 43560.471;
    float totalSqft;
    float totalAcres;

    cout << "Enter length of property in feet" << endl;
    cin >> lengthIn;

    cout << "Enter width of property in feet" << endl;
    cin >> widthIn;

    totalSqft = lengthIn*widthIn;
    totalAcres = totalSqft/sqftPerAcre;

    cout << "A parcel of land with the dimensions of" << endl;
    cout << "\tlength\t\t" << lengthIn << endl;
    cout << "\twidth\t\t" << widthIn << endl;
    cout << "contains " << totalAcres << " acres." << endl;

    return totalAcres;

}