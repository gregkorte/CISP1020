#Function Assignments 03

We are going to write a function that receives no parameters but returns a value.

The function header will be:

```
float noArgsHasRet()
```

####Our problem:
Given the length and width (in feet) of a square parcel of land, convert that parcel of land from square feet to acres.

```
1 acre = 43560.174 square feet
```

######In main()
1.  Call your function.
2.  Output the number of acres in main (use the return value).

######Within the function:
1.  Ask for and obtain the length of the parcel (in feet – as a decimal).
2.  Ask for and obtain the width of the parcel (in feet – as a decimal).
3.  Print out the length and width (see output format on the next page).
4.  Calculate the square footage.
5.  Convert the square footage to acres.
6.  Return the number of acres to main.

```c++
int main()
{
    // call function
    noArgsHasRet();

    // print out the number of acres
    system(“pause”);
    return 0;
}
float noArgsHasRet()
{
      // your code
}
```

Your output should look like the following:

```
A parcel of land with the dimensions of
    length      ??????.?????
    width       ????.???
contains ??????.?????? acres
```

Notice that the words ‘length’ and ‘width’ line up and are indented
the ????.????? just represent a float.  We do not know how many digits the number will have.