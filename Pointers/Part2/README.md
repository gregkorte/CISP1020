#Pointer Assignments 02

This assignment is to show that we can use pointers (passed to a function) to change the values (pointed to by the pointers) in main.

Write a C program that will use 2 pointers.

1.  Declare 2 ints named inHeight and inRadius.
2.  Ask the user for 2 ints and store the values in inHeight and inRadius.
3.  Declare the following 2 pointers:
        a.  float *      pArea
        b.  float *      pVolume
4.  write a function with the following header:
```
        void arithmetic(int, int, float*, float*)
```
5.  Pass inHeight and inRadius and the 2 pointers to the function.
6.  In the function, calculate the volume and surface area of the cylinder and put the corresponding answer into the proper pointer address.
7.  Output should look like the following and be printed from main():
```
         radius is ???????, height is ???????

               *** using the pointers ***
                area:           dddd.ddd
                volume:         dddd.ddd
```
