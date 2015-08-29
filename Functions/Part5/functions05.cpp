/******************************************************************************
*  Name:           Functions 05
*  Author:         Greg Korte
*  Date due:       15/08/31 6:00
*  Description:    Prompt user to enter radius and height.
*                  Runs through 5 functions.
*                  Then the functions return data to main and display.
******************************************************************************/

/******************************************
*     Library includes
******************************************/
#include <iostream>                // needed for I/O
#include <iomanip>
#include <cmath>
#include <math.h>                  // needed for pow method

/******************************************
*     Pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*     Function prototypes
****************************************/
float areaCircle(float radiusIn);
float circumCircle(float radiusIn);
float areaSphere(float radiusIn);
float circumSphere(float radiusIn);
float volumeSphere(float radiusIn);
float areaCylinder(float radiusIn, float heightIn);
float volumeCylinder(float radiusIn, float heightIn);
float volumeCone(float radiusIn, float heightIn);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   Local variables            *
    *******************************/

  float radiusIn;           //variable input for radius
  float heightIn;           //variable input for height
  float area;
  float circum;
  float volume;

  //Questions
  cout << "Enter the radius of the circle, cone, sphere, or cylinder: ";
  cin  >> radiusIn;
  cout << "Enter the height of the cylinder or cone: ";
  cin  >> heightIn;

  /**********************
  * Functions & Display *
  ***********************/
  cout << setprecision(2)  << fixed    << "\n";
  cout << "Radius is "     << radiusIn << "\n";
  cout << "Height is "     << heightIn << "\n\n\n";

  area   = areaCircle(radiusIn);
  cout  << "Area of the circle is:          " << setw(5) << area   << "\n";

  circum = circumCircle(radiusIn);
  cout  << "Circumference of the circle is: " << setw(5) << circum << "\n\n";

  area   = areaSphere(radiusIn);
  cout  << "Area of the sphere is:          " << setw(5) << area   << "\n";

  circum = circumSphere(radiusIn);
  cout  << "Circumference of the sphere is: " << setw(5) << circum << "\n";

  volume = volumeSphere(radiusIn);
  cout  << "Volume of the sphere is:        " << setw(5) << volume << "\n\n";

  area   = areaCylinder(radiusIn, heightIn);
  cout  << "Area of the cylinder is:        " << setw(5) << area   << "\n";

  volume = volumeCylinder(radiusIn, heightIn);
  cout  << "Volume of the cylinder is:      " << setw(5) << volume << "\n\n";

  volume = volumeCone(radiusIn, heightIn);
  cout  << "Volume of the cone is:          " << setw(5) << volume << "\n\n";

  system("pause");
  return 0;
}

/*******************************************
*  Given radius, calculate circle's area.
*******************************************/
float areaCircle(float radiusIn)
{
   float area;
   area = PI * pow(radiusIn, 2);      //Utilized pow() method for extra credit
   return area;
}

/**************************************************
*  Given radius, calculate circle's circumference.
**************************************************/
float circumCircle(float radiusIn)
{
   float circum;
   circum = PI * radiusIn * 2;
   return circum;
}

/*******************************************
*  Given radius, calculate sphere's area.
*******************************************/
float areaSphere(float radiusIn)
{
   float area;
   area = 4 * areaCircle(radiusIn);
   return area;
}

/**************************************************
*  Given radius, calculate sphere's circumference.
**************************************************/
float circumSphere(float radiusIn)
{
   circumCircle(radiusIn);
}

/**********************************
*  Given radius and height,
*  calculate sphere's volume.
**********************************/
float volumeSphere(float radiusIn)
{
   float volume;
   volume = 4.0 / 3.0 * areaCircle(radiusIn) * radiusIn;
   return volume;
}

/********************************************
*  Given radius and height,
*  calculate cylinder's surface area.
********************************************/
float areaCylinder(float radiusIn, float heightIn)
{
   float area;
   area = ((2 * areaCircle(radiusIn))) + ((heightIn * circumCircle(radiusIn)));
   return area;
}

/**********************************
*  Given radius and height,
*  calculate cylinder's volume.
**********************************/
float volumeCylinder(float radiusIn, float heightIn)
{
   float volume;
   volume = areaCircle(radiusIn) * heightIn;
   return volume;
}

/**********************************
*  Given radius and height,
*  calculate a cone's volume.
**********************************/
float volumeCone(float radiusIn, float heightIn)
{
   float volume;
   volume = ((areaCircle(radiusIn) * heightIn)) * ((.3333333333));
   return volume;
}