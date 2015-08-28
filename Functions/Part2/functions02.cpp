/********************************************************
*  Name:           Functions 02
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    This function receives parameters
*                  and returns no value
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
  void hasArgsNoRet(float length, float width);

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/
    double length, width;

    cout << "Enter length of property in feet" << endl;
    cin >> length;

    cout << "Enter width of property in feet" << endl;
    cin >> width;

    // function call
    hasArgsNoRet(length, width);

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
void hasArgsNoRet(float length, float width)
{
    /************************************
    *      local variables
    *************************************/

    double acre, totalSqft, totalAcres;
    acre = 43560.471;

    totalSqft = length*width;
    totalAcres = totalSqft/acre;

    cout << "A parcel of land with the dimensions of" << endl;
    cout << "\tlength\t\t" << length << endl;
    cout << "\twidth\t\t" << width << endl;
    cout << "contains " << totalAcres << " acres." << endl;

}