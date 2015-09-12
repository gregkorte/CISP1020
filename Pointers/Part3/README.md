#Pointers / Arrays / Strings
 -Or
#####Your trip to hell <-----//Nice!

I have attached a program to this assignment that has the instructions imbedded in the code (you know – those little blue things).
One ‘problem’ per function.  Just do one at a time in the order presented.  You will find that there is some ‘cut and paste’ from one function to another.

###Section 1

1. Declare a 2 dimensional array of characters to hold the names
   of the months ```char monthName[12][15];```.
2. Initialize each row of the array with the proper month name
   use ```strcpy``` to do this.
3. Print month names - one per line.

```
void demo01()
     {
          cout << "\n\n  **** in Demo01 ****\n";
          // declare
          char monthName[12][15];
     }
```

###Section 2

######Same as demo01 except you declare and initialize the array in one line.
1. Declare a 2 dimensional array of characters to hold the names.
    of the months ```char monthName[12][15];```.
2. Initialize the array with the proper month name when you declare the array.
3. Print month names - one per line.

```
void demo02()
     {
          cout << "\n\n  **** in Demo02 ****\n";
          // declare and initialize
          char monthName[12][15]= {"?????"};

          // print
     }
```

###Section 3

######Same as demo02 except you declare the array with [] rows, [15] columns and ```char monthName[][15];```.
1. Declare a 2 dimensional array of characters to hold the names
   of the months ```char monthName[12][15];```.
2. Initialize the array with the proper month name when you declare the array.
3. Print month names - one per line.

```
void demo03()
     {
          cout << "\n\n  **** in Demo03 ****\n";
          // declare and initialize
          char monthName[][15]= {"?????"};

          // print
     }
```

###Section 4

######Using pointers
1. Declare an array of 12 char pointers ```char* monthName[12];```.
2. Allocate memory for each pointer.
3. Initialize (dereference) each pointer with the proper month name.
4. Print month names - one per line.

```
void demo04()
     {
          cout << "\n\n  **** in Demo04 ****\n";
          // declare
          char* monthName[12];

          // allocate memory

          // load month values

          // print
     }
```

###Section 5

######Using pointers
1. Copy the function demo01() or demo02() (start with one of those).
2. Declare a char pointer.
3. Make the pointer point to the array.
4. Print month names - one per line using the pointer.

```
void demo05()
     {
          cout << "\n\n  **** in Demo05 ****\n";
          // declare. instanciate and load the array
          // code for demo01() or demo02()

          // create a char pointer
          char* pMonthName;

          // make pointer point to the array

          // print array using the pointer
     }
```

###Section 6

######Using pointers - you probably have some of this code in demo05().
1. Start with demo05().
2. Declare a char pointer.
3. Allocate 180 characters of memory (12 * 15 = 180).
4. Load the month names (using the pointer).
5. Print month names - one per line using the pointer.

```
void demo06()
{
     cout << "\n\n  **** in Demo06 ****\n";

     // create a char pointer
     char* pMonthName;
     // allocate memory
     pMonthName = new char[180];

     // load month names

     // print array using the pointer
}
```
