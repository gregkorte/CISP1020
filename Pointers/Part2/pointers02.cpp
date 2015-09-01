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
    float calcArea;
    float calcVolume;
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

}