/********************************************************
*  Name:           Structs 02
*  Author:         Greg Korte
*  Date due:       15/09/21 6:00
*  Description:    Use the struct from assignment 1, create
                   a pointer to the struct & print the
                   input information to the screen using the
                   pointer.
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
    StarTrekPersonel* obj, o;
    obj = &o;
    obj->ID;
    obj->name;
    obj->address;
    obj->city;
    obj->state;
    obj->zip;
    obj->planet;


    cout << "Enter your Federation ID: ";
    getline(cin, obj->ID);

    cout << "Enter your name:\t  ";
    getline(cin, obj->name);

    cout << "Enter your address:\t  ";
    getline(cin, obj->address);

    cout << "Enter your city:\t  ";
    getline(cin, obj->city);

    cout << "Enter your state:\t  ";
    getline(cin, obj->state);

    cout << "Enter your zip:\t\t  ";
    getline(cin, obj->zip);

    cout << "Enter your planet:\t  ";
    getline(cin, obj->planet);

    cout << "\n\n\t**** The strSample field ****" << endl;
    cout << "\t   ID:\t\t" << obj->ID << endl;
    cout << "\t   Name:\t" << obj->name << endl;
    cout << "\t   Address:\t" << obj->address << endl;
    cout << "\t   City:\t" << obj->city << endl;
    cout << "\t   State:\t" << obj->state << endl;
    cout << "\t   Zip:\t\t" << obj->zip << endl;
    cout << "\t   Planet:\t" << obj->planet << endl;
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
