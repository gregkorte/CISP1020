/*************************************************************
*  Name:           constructors02(Date02)
*  Author:         Greg Korte
*  Date due:       15-10-05
*  Description:    Create a date class with getters and setters.
                   Create two constructors, one default. Create
                   function to check leap year. Test output
                   by printing a test for each member function.
**************************************************************/

/***************************
*     libraries
****************************/
#include <iostream>                          // needed for Cin and Cout
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
      // constructors

      Date();
      Date(int, int, int);

      // setters
      void setMonth(int mm)        {month = mm;}
      void setDay(int dd)          {day = dd;}
      void setYear(int yy)         {year = yy;}

      // getters
      int getMonth()               {return month;}
      int getDay()                 {return day;}
      int getYear()                {return year;}

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
     Date date(2, 4, 1976);
     date.display();
 }

 // TEST setters
 void testSetters()
 {
     cout << "\n***** TestDate03 *****\n";
     Date date;
     date.setMonth(12);
     date.setDay(31);
     date.setYear(1972);
     date.display();
 }

 // TEST getters
 void testGetters()
 {
     cout << "\n***** TestDate04 *****\n";
     Date date;
     cout << date.getMonth() << "\n";
     cout << date.getDay() << "\n";
     cout << date.getYear() << "\n";
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
   date01.display();
   Date date02(4,12,1942);
   date02.display();
 }