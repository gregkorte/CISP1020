#Class Assignments 01
###Create a Date class:

1.  Create a class named Date.
2.  Class has 3 private data items (name the data items month, day, year).
    * ```int month```
    * ```int day```
    * ```int year```
3.  Create member functions.
    * Use a getter for each data item.
        - Use ‘get’ and the data items name.
        - Return the data item.
        - ```int getMonth()  {return month;}```
    * Use a setter for each data item.
        - Use ‘set’ and the data items name.
        - Change the data items value.
        - ```void setMonth(int x)    {month = x;}```
    * ```bool calcLeapYear()```
        - Uses the month, day, and year and determines if the year is a leap year.
        - Calculation.
            1.  Year evenly divisible by 400 is a leap year.
            2.  Year evenly divisible by 100 is not a leap year.
            3.  Year divisible by 4 is a leap year.
            4.  Else  is not a leap year.
    * ```void display()```
        - Blank line
        - Month is    mm
        - Day is      dd
        - Year is     yyyy
        - yyyy is (not) a leap year
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
    * Execute constructor.
    * Execute display.
2.  Test setters.
    * Run the setters.
    * Run display (did the setters work?).
3.  Test getters.
    * Run each getter in a print line and see if values are OK.
4.  Test ```calcLeapYear()```.
    * Use ```setYear(int)``` for each of the following years.
    * Then run display.
    * Output should be (in display):
        - 1900 – not a leap year
        - 2000 – is a leap year
        - 1999 – is not a leap year
        - 1996 – is a leap year

