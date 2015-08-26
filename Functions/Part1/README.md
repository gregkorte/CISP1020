#Function Assignments 01

We are going to write a function that does not receive any parameters and returns no value.

The function header will be:
```
    void noArgsNoRet()
```

##Our problem:
Given the length and width (in feet) of a square parcel of land, convert that parcel of land from square feet to acres.

```
1 acre = 43560.174 square feet
```

######Within the function:
1.  Obtain the length of the parcel of land (in feet – a decimal).
2.  Obtain the width of the parcel of land (in feet – a decimal).
3.  Calculate the square footage.
4.  Convert the square footage to acres.
5.  Output the number of acres.

Your main will just have the function call.  All input and output will be in the function.

```c++
Int main()
{
      noArgsNoRet();
      system(“pause”);
      return 0;
}
void noArgsNoret()
{
      // your code
}
```

######Your output should look like the following:

```html
A parcel of land with the dimensions of
    length      ??????.?????
    width       ????.???
contains ??????.?????? acres
```

Notice that the words ‘length’ and ‘width’ line up and are indented
the ????.????? just represent a float.  We do not know how many digits the number will have.