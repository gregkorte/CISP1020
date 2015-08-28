/********************************************************
*  Name:           Functions 04
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    This function receives parameters
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
float hasArgsHasRet(float length, float width);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/

    float length, width;

    cout << "Enter length of property in feet" << endl;
    cin >> length;

    cout << "Enter width of property in feet" << endl;
    cin >> width;

    // function call
    float totalAcres = hasArgsHasRet(length, width);

    cout << "A parcel of land with the dimensions of" << endl;
    cout << "\tlength\t\t" << length << endl;
    cout << "\twidth\t\t" << width << endl;
    cout << "contains " << totalAcres << " acres." << endl;

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
float hasArgsHasRet(float length, float width)
{
    /************************************
    *      local variables
    *************************************/

    float acre, totalSqft, totalAcres;
    acre = 43560.471;

    totalSqft = length*width;
    totalAcres = totalSqft/acre;

    return totalAcres;

}