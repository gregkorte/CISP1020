/*************************************************************
*  Name:           constructors02
*  Author:         Greg Korte
*  Date due:       15-10-05
*  Description:    Create a date class with getters and setters.
                   Create function to check leap year. Test output
                   by printing a test for each member function.
**************************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cstdlib>             // needed for 
using namespace std;

/************************************
*     defines
*************************************/

/****************************************
*     class definitions
****************************************/
class Date                                   // capital letter
{
   private:                                  /**** comments line up ****/
      int month;                             // month
      int day;                               // day
      int year;                              // year

   public:
      /*******************************************************
      *   the word 'set'
      *   data item name starting with an upper case letter
      ********************************************************/

      // constructors

      Date();
      Date(int, int, int);

      // setters
      void setMonth(int);
      void setDay(int);
      void setYear(int);

      /*******************************************************
      *   the word 'get'
      *   data item name starting with an upper case letter
      *   example  string getRow()
      ********************************************************/

      // getters
      int getMonth();
      int getDay();
      int getYear();

      bool calcLeapYear(int);
      void display();
};

/****************************************
*     member functions for above class
****************************************/
Date::Date()
{
  setMonth(1);
  setDay(1);
  setYear(1900);
}

Date::Date(int mm, int dd, int yy)
{
  setMonth(mm);
  setDay(dd);
  setYear(yy);
}

void Date::setMonth(int mm)        {month = mm;}
void Date::setDay(int dd)          {day = dd;}
void Date::setYear(int yy)         {year = yy;}

int Date::getMonth()               {return month;}
int Date::getDay()                 {return day;}
int Date::getYear()                {return year;}

bool Date::calcLeapYear(int year)
{
  if ( (year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0))
  {
    return true;
  } else
  {
    return false;
  }
}

/********************************************
* displays data items and calculated fields
********************************************/
void Date::display()
{
  // use 'getters'
  cout << "\n";
  cout << "Month is " << getMonth() << "\n";
  cout << "Day is   " << getDay()   << "\n";
  cout << "Year is  " << getYear()  << "\n";
  if (calcLeapYear(year) == true)
  {
    cout << year << " is a leap year.\n";
  }
  else
  {
    cout << year << " is not a leap year.\n";
  }
    cout << "\n";
};

/*************************************
*     function prototype
*************************************/
    void testClass();
    void testDisplay();
    void testSetters();
    void testGetters();
    void testLeapYear();
    void testDate02();

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
     testSetters();
     testGetters();
     testLeapYear();
     testDate02();

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/

/************************************/

// TEST class
void testClass()
{
    cout << "\n***** TestDate01 *****\n";
    Date date;
    Date();
    date.display();
}

// TEST display output
void testDisplay()
{
    cout << "\n***** TestDate02 *****\n";
    Date date;
    date.display();
}

// TEST setters
void testSetters()
{
    cout << "\n***** TestDate03 *****\n";
    Date date;
    date.setMonth(1);
    date.setDay(1);
    date.setYear(1900);
    date.display();
}

// TEST getters
void testGetters()
{
    cout << "\n***** TestDate04 *****\n";
    Date date;
    cout << date.getMonth();
    cout << date.getDay();
    cout << date.getYear();
}

// TEST calcLeapYear
void testLeapYear()
{
  cout << "\n***** TestDate05 *****\n";
  Date date;
  date.setYear(1900);
  date.display();
  date.setYear(2000);
  date.display();
  date.setYear(1999);
  date.display();
  date.setYear(1996);
  date.display();
}

// TEST constructors
void testDate02()
{
  cout << "\n***** TestDate06 *****\n";
  Date date01;
  Date date02(1,1,1900);
  date01.display();
  date02.display();
}