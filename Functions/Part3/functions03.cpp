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
    float output = noArgsHasRet();

    cout << output << endl;

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

    float length, width, acre, totalSqft, totalAcres;
    acre = 43560.471;

    cout << "Enter length of property in feet" << endl;
    cin >> length;

    cout << "Enter width of property in feet" << endl;
    cin >> width;

    totalSqft = length*width;
    totalAcres = totalSqft/acre;

    cout << "A parcel of land with the dimensions of" << endl;
    cout << "\tlength\t\t" << length << endl;
    cout << "\twidth\t\t" << width << endl;
    cout << "contains " << totalAcres << " acres." << endl;

    return totalAcres;

}