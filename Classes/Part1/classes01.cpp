/*************************************************************
*  Name:           classes01
*  Author:         Greg Korte
*  Date due:       15-09-28
*  Description:    Create a date class with getters and setters.
                   Create function to check leap year. Test output
                   by printing a test for each member function.
**************************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
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


      // setters
      void setMonth(int mm)         {month = mm;}
      void setDay(int dd)           {day = dd;}
      void setYear(int yy)          {year = yy;}

      /*******************************************************
      *   the word 'get'
      *   data item name starting with an upper case letter
      *   example  string getRow()
      ********************************************************/

      // getters
      int getMonth()               {return month;}
      int getDay()                 {return day;}
      int getYear()                {return year;}

      void display();
};

/****************************************
*     member functions for above class
****************************************/
bool calcLeapYear(int year)
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
}

/*************************************
*     function prototype
*************************************/
    void testClass();
    void testDisplay();

    void testSetMonth();
    void testSetDay();
    void testSetYear();

    int  testGetMonth();
    int  testGetDay();
    int  testGetYear();

    bool testCalcLeapYear();

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
     testSetMonth();
     testSetDay();
     testSetYear();
     testGetMonth();
     testGetDay();
     testGetYear();
     testCalcLeapYear();

     system("pause");
     return 0;
}

/************************************
*      non-member functions
*************************************/

/************************************/
  //TEST class constructor
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

  // TEST Setters
    void testSetMonth()
    {
    cout << "\n***** TestDate03 *****\n";
    Date date;
    date.setMonth(12);
    date.display();
  }
    void testSetDay()
    {
    cout << "\n***** TestDate04 *****\n";
    Date date;
    date.setDay(31);
    date.display();
  }
    void testSetYear()
    {
    cout << "\n***** TestDate05 *****\n";
    Date date;
    date.setYear(1972);
    date.display();
  }

    // TEST Getters
    int testGetMonth()
    {
    cout << "\n***** TestDate06 *****\n";
    Date date;
    cout << date.getMonth() << endl;
  }
    int testGetDay()
    {
    cout << "\n***** TestDate07 *****\n";
    Date date;
    cout << date.getDay() << endl;
  }
    int testGetYear()
    {
    cout << "\n***** TestDate08 *****\n";
    Date date;
    cout << date.getYear() << endl;
  }

    // TEST calcLeapYear
    bool testCalcLeapYear()
    {
      cout << "\n***** TestDate09 *****\n";
      Date date;

      date.setYear(1900);
      calcLeapYear(date.getYear());
      date.display();

      date.setYear(2000);
      calcLeapYear(date.getYear());
      date.display();

      date.setYear(1999);
      calcLeapYear(date.getYear());
      date.display();

      date.setYear(1996);
      calcLeapYear(date.getYear());
      date.display();
  }