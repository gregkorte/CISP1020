/*************************************************************
*  Name:           classes02
*  Author:         Greg Korte
*  Date due:       15-09-28
*  Description:    Create a Coord class with getters and
                   setters. Create function to calculate the
                   distance between the coordinate and the
                   origin. Test output by printing a test for
                   each member function.
**************************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cmath>
using namespace std;

/************************************
*     defines
*************************************/

/****************************************
*     class definitions
****************************************/
class Coord                                  // capital letter
{
   private:                                  /**** comments line up ****/
      int xPoint;                            // x coord
      int yPoint;                            // y coord
      int zPoint;                            // z coord
      float deg;                             // degrees

   public:
      /*******************************************************
      *   the word 'set'
      *   data item name starting with an upper case letter
      ********************************************************/

      // constructors


      // setters
      void setXpoint(int x)         {xPoint = x;}
      void setYpoint(int y)         {yPoint = y;}
      void setZpoint(int z)         {zPoint = z;}
      void  setDeg(float d)         {deg = d;}

      /*******************************************************
      *   the word 'get'
      *   data item name starting with an upper case letter
      *   example  string getRow()
      ********************************************************/

      // getters
      int getXpoint()               {return xPoint;}
      int getYpoint()               {return yPoint;}
      int getZpoint()               {return zPoint;}
      float  getDeg()               {return deg;}

      void display();
};

/****************************************
*     member functions for above class
****************************************/
int distance2origin(int x, int y, int z)
{
  return sqrt((x - 0)^2 + (y - 0)^2 + (z - 0)^2);
}

/********************************************
* displays data items and calculated fields
********************************************/
void Coord::display()
{
     // use 'getters'
      cout << "xCoord is         " << getXpoint()       << "\n";
      cout << "yCoord is         " << getYpoint()       << "\n";
      cout << "zCoord is         " << getZpoint()       << "\n";
      cout << "Degress are       " << getDeg()          << "\n";
      cout << "Distance to origin" << distance2origin(xPoint, yPoint, zPoint) << "\n";
      cout << "\n";
}

/*************************************
*     function prototype
*************************************/
     void testClass();
     void testDisplay();
     
     void testSetXpoint();
     void testSetYpoint();
     void testSetZpoint();
     void testSetDegrees();
     
     int testGetXpoint();
     int testGetYpoint();
     int testGetZpoint();
     int testGetDegrees();
     
     int testDistance2origin();
/************************************
*      global variables
*************************************/

int main()
{
     /************************************
     *      local variables
     *************************************/
     testClass();
     testDisplay();
     testSetXpoint();
     testSetYpoint();
     testSetZpoint();
     testSetDegrees();
     testGetXpoint();
     testGetYpoint();
     testGetZpoint();
     testGetDegrees();
     testDistance2origin();

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/

/************************************/
// TEST class constructor
void testClass()
{
    cout << "\n***** TestCoord01 *****\n";
    Coord coord;
    Coord();
    coord.display();
}

//TEST display output
void testDisplay()
{
    cout << "\n***** TestCoord02 *****\n";
    Coord coord;
    coord.display();
}

//TEST setters
void testSetXpoint()
{
    cout << "\n***** TestCoord03 *****\n";
    Coord coord;
    coord.setXpoint(2);
    coord.display();
}
void testSetYpoint()
{
    cout << "\n***** TestCoord04 *****\n";
    Coord coord;
    coord.setYpoint(2);
    coord.display();
}
void testSetZpoint()
{
    cout << "\n***** TestCoord05 *****\n";
    Coord coord;
    coord.setZpoint(2);
    coord.display();
}
void testSetDegrees()
{
    cout << "\n***** TestCoord06 *****\n";
    Coord coord;
    coord.setDeg(90);
    coord.display();
}

//TEST getters
int testGetXpoint()
{
    cout << "\n***** TestCoord07 *****\n";
    Coord coord;
    cout << coord.getXpoint();
}
int testGetYpoint()
{
    cout << "\n***** TestCoord08 *****\n";
    Coord coord;
    cout << coord.getYpoint();
}
int testGetZpoint()
{
    cout << "\n***** TestCoord09 *****\n";
    Coord coord;
    cout << coord.getZpoint();
}
int testGetDegrees()
{
    cout << "\n***** TestCoord10 *****\n";
    Coord coord;
    cout << coord.getDeg();
}

int testDistance2origin()
{
  cout << "\n***** TestCoord11 *****\n";
  Coord coord;
  coord.setXpoint(2);
  coord.setYpoint(2);
  coord.setZpoint(2);
  distance2origin(coord.getXpoint(), coord.getYpoint(), coord.getZpoint());
  coord.display();
}