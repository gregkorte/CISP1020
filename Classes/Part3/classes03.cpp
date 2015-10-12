/*************************************************************
*  Name:           classes03
*  Author:         Greg Korte
*  Date due:       15-10-05
*  Description:    Create a Card class that has private data
                   items, getters, setters, display the suit
                   and value. Upload a test plan.
**************************************************************/

/***************************
*     libraries
****************************/
#include <string>              // needed for string type
#include <iostream>            // needed for Cin and Cout
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
   private:                                  /**** comments line up ****/
      int value;                            // value
      char suit;                            // suit

   public:
      /*******************************************************
      *   the word 'set'
      *   data item name starting with an upper case letter
      ********************************************************/

      // constructors


      // setters
      void setValue(int val)          {value = val;}
      void setSuit(char s)            {suit = s;}

      /*******************************************************
      *   the word 'get'
      *   data item name starting with an upper case letter
      *   example  string getRow()
      ********************************************************/

      // getters
      int getValue()               {return value;}
      char getSuit()               {return suit;}

    void chooseSuit();
      void display();
};

/****************************************
*     member functions for above class
****************************************/

void chooseSuit(char s)
{
  switch(s){
    case 'c'  :
       cout << "clubs";
       break;
    case 'd'  :
       cout << "diamonds";
       break;
    case 'h'  :
       cout << "hearts";
       break;
    case 's'  :
       cout << "spades";
       break;
  }
}

/********************************************
* displays data items and calculated fields
********************************************/
void Card::display()
{
     // use 'getters'
      cout << "\n";
      cout << "Value is "  << getValue()                   << "\n";
      cout << "Suit is  "  << chooseSuit(getSuit())        << "\n";
      cout << "\n";
}

/*************************************
*     function prototype
*************************************/
     void   testClass();
     void   testDisplay();

     void   testSetValue();
     void   testSetSuit();

     int    testGetValue();
     char   testGetSuit();

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
     testSetValue();
     testSetSuit();
     testGetValue();
     testGetSuit();
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
    Card card;
    Card();
    card.display();
}

//TEST display output
void testDisplay()
{
    cout << "\n***** TestCard02 *****\n";
    Card card;
    card.display();
}

//TEST setters
void testSetValue()
{
    cout << "\n***** TestCard03 *****\n";
    Card card;
    card.setValue(2);
    card.display();
}
void testSetSuit()
{
    cout << "\n***** TestCard04 *****\n";
    Card card;
    card.setSuit('h');
    card.display();
}

////TEST getters
int testGetValue()
{
    cout << "\n***** TestCard05 *****\n";
    Card card;
    cout << card.getValue();
}
char testGetSuit()
{
    cout << "\n***** TestCard06 *****\n";
    Card card;
    cout << card.getSuit();
}
void testChooseSuit()
{
  cout << "\n***** TestCard07 *****\n";
    Card card;
    card.setSuit('h');
    chooseSuit(card.getSuit());
    cout << "\n";
}