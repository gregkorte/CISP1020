#Function Assignments 04

We are going to write a function that has parameters and returns a value.

The function header will be:
```
    float hasArgsHasRet(float length, float width)
```

####Our problem:
Given the length and width (in feet) of a square parcel of land, convert that parcel of land from square feet to acres.

```
    1 acre = 43560.174 square feet
```

######In main()
1.  Ask for and obtain the length of the parcel (in feet – as a decimal).
2.  Ask for and obtain the width of the parcel (in feet – as a decimal).
3.  Call your function.
4.  Print out the length and width (see output format on the next page).
5.  Output the number of acres (use the return value).

######Within the function:
1.  Receive the length and width as parameters.
2.  Calculate the square footage.
3.  Convert the square footage to acres.
4.  Return the number of acres to main.

```c++
int main()
{   // get the length and width

    hasArgsHasRet (float length, float width);

    // Print all output (see output format on the next page)

    system(“pause”);
    return 0;
}
float hasArgsHasRet()
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