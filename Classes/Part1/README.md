#Class Assignments 01
###Create a Date class:

1.  Create a class named Date.
2.  Class has 3 private data items (name the data items month, day, year).
    a.  ```int month```
    b.  ```int day```
    c.  ```int year```
3.  Create member functions.
    a.  Use a getter for each data item.
        i.   Use ‘get’ and the data items name.
        ii.  Return the data item.
        iii. ```int getMonth()  {return month;}```
    b.  Use a setter for each data item.
        i.   Use ‘set’ and the data items name.
        ii.  Change the data items value.
        iii. ```void setMonth(int x)    {month = x;}```
    c.  ```bool calcLeapYear()```
        i.  Uses the month, day, and year and determines if the year is a leap year.
        ii. Calculation.
            1.  Year evenly divisible by 400 is a leap year.
            2.  Year evenly divisible by 100 is not a leap year.
            3.  Year divisible by 4 is a leap year.
            4.  Else  is not a leap year.
    d.  ```void display()```
        i.   Blank line
        ii.  Month is    mm
        iii. Day is      dd
        iv.  Year is     yyyy
        v.   yyyy is (not) a leap year
4.  In ```main()```, test your class and the member functions.
5.  Upload the .cpp file.
6.  Upload the test document (plan).

######Notes:
Display output should be like this:

        Blank line
        Month is               mm
        Day is                 dd
        Year is                yyyy
        yyyy is (not) a leap year

*Notice the mm, dd, yyyy are lined up and are in that order.

The ```display()``` function takes no parameters.

Example of a test plan:

1.  Test constructor and display.
    a.  Execute constructor.
    b.  Execute display.
2.  Test setters.
    a.  Run the setters.
    b.  Run display (did the setters work?).
3.  Test getters.
    a.  Run each getter in a print line and see if values are OK.
4.  Test ```calcLeapYear()```.
    a.  Use ```setYear(int)``` for each of the following years.
    b.  Then run display.
    c.  Output should be (in display):
        i.      1900 – not a leap year
        ii.     2000 – is a leap year
        iii.    1999 – is not a leap year
        iv.     1996 – is a leap year

