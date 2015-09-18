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
    StarTrekPersonel* ptr, obj;
    ptr = &obj;
    ptr->ID;
    ptr->name;
    ptr->address;
    ptr->city;
    ptr->state;
    ptr->zip;
    ptr->planet;

    cout << "Enter your Federation ID: ";
    getline(cin, ptr->ID);

    cout << "Enter your name:\t  ";
    getline(cin, ptr->name);

    cout << "Enter your address:\t  ";
    getline(cin, ptr->address);

    cout << "Enter your city:\t  ";
    getline(cin, ptr->city);

    cout << "Enter your state:\t  ";
    getline(cin, ptr->state);

    cout << "Enter your zip:\t\t  ";
    getline(cin, ptr->zip);

    cout << "Enter your planet:\t  ";
    getline(cin, ptr->planet);

    cout << "\n\n\t**** The strSample field ****" << endl;
    cout << "\t   ID:\t\t" << ptr->ID << endl;
    cout << "\t   Name:\t" << ptr->name << endl;
    cout << "\t   Address:\t" << ptr->address << endl;
    cout << "\t   City:\t" << ptr->city << endl;
    cout << "\t   State:\t" << ptr->state << endl;
    cout << "\t   Zip:\t\t" << ptr->zip << endl;
    cout << "\t   Planet:\t" << ptr->planet << endl;
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
