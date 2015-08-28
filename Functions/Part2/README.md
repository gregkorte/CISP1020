#Function Assignments 02

We are going to write a function that receives parameters and returns no value.

The function header will be:

```
void hasArgsNoRet(float length, float width)
```

####Our problem:
Given the length and width (in feet) of a square parcel of land, convert that parcel of land from square feet to acres.

```
1 acre = 43560.174 square feet
```

######In main()
1.  Ask for and obtain the length of the parcel (in feet – as a decimal).
2.  Ask for and obtain the width of the parcel (in feet – as a decimal).
3.  Call your function passing the length and width as arguments.
4.  Make all output still be in the function.

######Within the function:
1.  Receive the length and width as floats.
2.  Calculate the square footage.
3.  Convert the square footage to acres.
4.  Output the length, width, and number of acres.

```c++
int main()
{
    // get the length
    // get the width
    hasArgsNoRet (length, width);
    system(“pause”);
    return 0;
}
void noArgsNoret(float length, float width)
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