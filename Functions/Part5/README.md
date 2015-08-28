#Function Assignments 05

I have given you a program named FuncCallingFunc.cpp.

This program has main() and eight functions:

1. float areaCircle(float radiusIn);
2. float circumCircle(float radiusIn);
3. float areaSphere(float radiusIn);
4. float circumSphere(float radiusIn);
5. float volumeSphere(float radiusIn);
6. float areaCylinder(float radiusIn, float heightIn);
7. float volumeCylinder(float radiusIn, float heightIn);
8. float volumeCone(float radiusIn, float heightIn);


The challenge of this assignment is to reduce some redundant code by allowing functions to call other functions.

######Example:
1. The function `areaCircle(float)` calculates the area of a given circle using the equation:

    - area = PI * radius * radius

2. The function `areaCylinder(float, float)` calculates the surface area of a given cylinder using the equation:

    - area = 2 * PI * radius * radius + height * PI * radius * 2

By calling the function `areaCircle(float)` and `circumCircle(float)` the above equation can be shortened to:

- area = 2 * areaCircle(radius) + height * circumCircle(radius)

You just have to change the code in some functions to call other functions.