/********************************************************
*  Name:           Functions 02
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    This function receives parameters
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
  void hasArgsNoRet(float lengthIn, float widthIn);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
    float lengthIn;
    float widthIn;

    cout << "Enter length of property in feet" << endl;
    cin >> lengthIn;

    cout << "Enter width of property in feet" << endl;
    cin >> widthIn;

    // function call
    hasArgsNoRet(lengthIn, widthIn);

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
void hasArgsNoRet(float lengthIn, float widthIn)
{
    /************************************
    *      local variables
    *************************************/

    float sqftPerAcre = 43560.471;
    float totalSqft;
    float totalAcres;

    totalSqft = lengthIn*widthIn;
    totalAcres = totalSqft/sqftPerAcre;

    cout << "A parcel of land with the dimensions of" << endl;
    cout << "\tlength\t\t" << lengthIn << endl;
    cout << "\twidth\t\t" << widthIn << endl;
    cout << "contains " << totalAcres << " acres." << endl;

}