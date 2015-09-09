/********************************************************
*  Name:           Pointers 01
*  Author:         Greg Korte
*  Date due:       15/09/14 6:00
*  Description:    This function passes two pointers into
                   a function to change multiple variables
                   in main.
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cmath>
#include <math.h>                  // needed for pow method

/************************************
*     defines
*************************************/
#define PI 3.14159
using namespace std;

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
    float* pArea;
    float* pVolume;

    pArea = &calcArea;
    pVolume = &calcVolume;

    // get and store input
    cout << "Enter a height." << endl;
    cin >> inHeight;

    cout << "Enter a radius." << endl;
    cin >> inRadius;

    // function call
    arithmetic(inHeight, inRadius, pArea, pVolume);

    cout << "\n\tRadius is " << inRadius << ", " << "height is " << inHeight << endl;
    cout << "\n\t\t*** Using the variables ***" << endl;
    cout << "\t\tArea:\t\t\t" << calcArea << endl;
    cout << "\t\tVolume:\t\t\t" << calcVolume << endl;
    cout << "\n\t\t*** Using the pointers ***" << endl;
    cout << "\t\tArea:\t\t\t" << *pArea << endl;
    cout << "\t\tVolume:\t\t\t" << *pVolume << "\n" << endl;

    system("pause");
    return 0;
}

/************************************
*      non-member functions
*************************************/
void arithmetic(int radiusIn, int heightIn, float* pArea, float* pVolume)
{
    /************************************
    *      local variables
    *************************************/

    *pArea = PI * pow(radiusIn, 2) * heightIn;
    *pVolume = (2 * (PI * pow(radiusIn, 2))) + (heightIn * (PI * radiusIn * 2));

}