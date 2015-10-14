/*************************************************************
*  Name:           constructors01(Card02)
*  Author:         Greg Korte
*  Date due:       15-10-05
*  Description:    Create a Card class that has private data
                   items, create two constructors, getters,
                   setters, display the suit and value. Upload
                   a test plan.
**************************************************************/

/***************************
*     libraries
****************************/
#include <string>                           // needed for string
#include <string.h>                         // needed for string functions
#include <iostream>                         // needed for Cin and Cout
#include <cmath>
using namespace std;

/************************************
*     defines
*************************************/

/****************************************
*     class definitions
****************************************/
class Card                                  // capital letter
{
   private:                                 /**** comments line up ****/
      int value;                            // value
      char suit;                            // suit

   public:
      /*******************************************************
      *   the word 'set'
      *   data item name starting with an upper case letter
      ********************************************************/

      // constructors

      Card();
      Card(char, int);

      // setters
      void setSuit(char s)           {suit = s;}
      void setValue(int val)         {value = val;}

      /*******************************************************
      *   the word 'get'
      *   data item name starting with an upper case letter
      *   example  string getRow()
      ********************************************************/

      // getters
      char getSuit()         {return suit;}
      int  getValue()        {return value;}

      string chooseSuit(char);
      void display();
};

/****************************************
*     member functions for above class
****************************************/
Card::Card()
{
  setSuit(' ');
  setValue(0);
}

Card::Card(char suit, int val)
{
  setSuit(suit);
  setValue(val);
}

string Card::chooseSuit(char s)
{
  switch(s){
    case 'c':
       return "clubs";
    case 'd':
       return "diamonds";
    case 'h':
       return "hearts";
    case 's':
       return "spades";
    case ' ':
      return "default state";
  }
}

/********************************************
* displays data items and calculated fields
********************************************/
void Card::display()
{
     // use 'getters'
      cout << "\n";
      cout << "Value is "  << getValue()                  << "\n";
      cout << "Suit is  "  << chooseSuit(getSuit())       << "\n";
      cout << "\n";
}

/*************************************
*     function prototype
*************************************/
     void   testClass();
     void   testDisplay();
     void   testSetters();
     void   testGetters();
     void   testChooseSuit();
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
     testChooseSuit();

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
    cout << "\n***** TestCard01 *****\n";
    Card card01;
  card01.display();
    Card card02('d', 10);
    card02.display();
}

// TEST display output
void testDisplay()
{
    cout << "\n***** TestCard02 *****\n";
    Card card('c', 9);
    card.display();
}

// TEST setters
void testSetters()
{
    cout << "\n***** TestCard03 *****\n";
    Card card;
    card.setSuit('h');
    card.display();
}

// TEST getters
void testGetters()
{
    cout << "\n***** TestCard04 *****\n";
    Card card('d', 8);
    cout << card.getSuit() << "\n";
    cout << card.getValue() << "\n";
}

// TEST suit char to string
void testChooseSuit()
{
  cout << "\n***** TestCard05 *****\n";
    Card card('s', 7);
    card.display();
    cout << "\n";
}