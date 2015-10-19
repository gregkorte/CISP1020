/*************************************************************
*  Name:           constructors06(Date04)
*  Author:         Greg Korte
*  Date due:       15-10-05
*  Description:    Create a date class with getters and setters.
                   Create two constructors, one default. Create
                   function to check leap year. Create a function
                   to calculate the Julian day of the year. Test
                   output by printing a test for each member
                   function.
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
      int *month;                             // month
      int *day;                               // day
      int *year;                              // year

   public:
      // constructors

      Date();
      Date(int, int, int);
  
      // destructors

      ~Date();

      // setters
      void setMonth(int mm)        {*month = mm;}
      void setDay(int dd)          {*day = dd;}
      void setYear(int yy)         {*year = yy;}

      // getters
      int getMonth()               {return *month;}
      int getDay()                 {return *day;}
      int getYear()                {return *year;}

      bool calcLeapYear(int);
      int calcDayOfYear();
      void display();
};

/****************************************
*     member functions for above class
****************************************/
Date::Date()
{
  month = new int;
  day = new int;
  year = new int;

  setMonth(1);
  setDay(1);
  setYear(1900);
}

Date::Date(int mm, int dd, int yy)
{
  month = new int;
  day = new int;
  year = new int;

  setMonth(mm);
  setDay(dd);
  setYear(yy);
}

Date::~Date()
{
  delete year;
  delete month;
  delete day;
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

int Date::calcDayOfYear()
{
  int a = getYear()/100;
  int b = a/4;
  int c = 2-a+b;
  int d = 365.25*(getYear()+4716);
  int e = 30.6001*(getMonth()+1);
  return c+getDay()+d+e-1524.5;
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
  if (calcLeapYear(getYear()) == true)
  {
    cout << getYear() << " is a leap year.\n";
  }
  else
  {
    cout << getYear() << " is not a leap year.\n";
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
    void testCalcDayOfYear();

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
  testCalcDayOfYear();
  
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

 // TEST calcDayOfYear (Julian Day)
 void testCalcDayOfYear()
 {
  cout << "\n***** TestDate07 *****\n";
  Date date01(2015, 10, 19);
  int jd = date01.calcDayOfYear();
  cout << "\n" << jd << "\n";
 }