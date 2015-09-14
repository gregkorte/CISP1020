/********************************************************
*  Name:           Pointers 02
*  Author:         Greg Korte
*  Date due:       15/09/14 6:00
*  Description:    This function uses pointers (passed to a
                   function) to change the values (pointed
                   to by the pointers) in main.
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
    float* pArea;
    float* pVolume;

    // get and store input
    cout << "Enter a height." << endl;
    cin >> inHeight;

    cout << "Enter a radius." << endl;
    cin >> inRadius;

    // function call
    arithmetic(inHeight, inRadius, pArea, pVolume);

    // output to screen
    cout << "\n\tRadius is " << inRadius << ", height is " << inHeight << endl;
    cout << "\n\t\t***Using the pointers***" << endl;
    cout << "\t\tArea:\t\t\t" << *pArea << endl;
    cout << "\t\tVolume:\t\t\t" << *pVolume << endl;

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

    float area = PI * pow(radiusIn, 2) * heightIn;
    float volume = (2 * (PI * pow(radiusIn, 2))) + (heightIn * (PI * radiusIn * 2));

    pArea = &area;
    pVolume = &volume;

    *pArea = *pArea;
    *pVolume = *pVolume;

    cout << "var: " << *pArea << "\n";
    cout << "var: " << *pVolume << "\n";

}