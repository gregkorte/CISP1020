/********************************************************
*  Name:           Structs 01
*  Author:         Greg Korte
*  Date due:       15/09/21 6:00
*  Description:    Create a struct, collect input for object
                   properties & print results to screen.
**********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
using namespace std;

/************************************
*     defines
*************************************/

struct StarTrekPersonel
{
    string ID;
    string name;
    string address;
    string city;
    string state;
    string zip;
    string planet;
};

/*************************************
*     function prototype
*************************************/

/************************************
*      global variables
*************************************/

int main()
{
    /************************************
    *      local variables
    *************************************/

    StarTrekPersonel strSample;

    cout << "Enter your Federation ID: ";
    getline(cin, strSample.ID);

    cout << "Enter your name:\t  ";
    getline(cin, strSample.name);

    cout << "Enter your address:\t  ";
    getline(cin, strSample.address);

    cout << "Enter your city:\t  ";
    getline(cin, strSample.city);

    cout << "Enter your state:\t  ";
    getline(cin, strSample.state);

    cout << "Enter your zip:\t\t  ";
    getline(cin, strSample.zip);

    cout << "Enter your planet:\t  ";
    getline(cin, strSample.planet);

    cout << "\n\n\t**** The strSample field ****" << endl;
    cout << "\t   ID:\t\t" << strSample.ID << endl;
    cout << "\t   Name:\t" << strSample.name << endl;
    cout << "\t   Address:\t" << strSample.address << endl;
    cout << "\t   City:\t" << strSample.city << endl;
    cout << "\t   State:\t" << strSample.state << endl;
    cout << "\t   Zip:\t\t" << strSample.zip << endl;
    cout << "\t   Planet:\t" << strSample.planet << endl;
    cout << "\n" << endl;

    system("pause");
    return 0;

}

/************************************
*      non-member functions
*************************************/

    /************************************
    *      local variables
    *************************************/
