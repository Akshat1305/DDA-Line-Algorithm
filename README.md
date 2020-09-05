# DDA Line Algorithm

Taking the co-ordinates of start and end points from the user as the Input and printing the co-ordinates of the pixels through which the line passes as the Output.

## Getting Started

In any 2-Dimensional plane if we connect two points (x1, y1) and (x2, y2), we get a line segment. But in the case of computer graphics we can not directly join any two coordinate points, for that we should calculate intermediate point’s coordinate and put a pixel for each intermediate point, of the desired color with help of functions like putpixel(x, y, K) in C, where (x,y) is our co-ordinate and K denotes some color.

For using graphics functions, our system output screen is treated as a coordinate system where the coordinate of the top-left corner is (0, 0) and as we move down our y-ordinate increases and as we move right our x-ordinate increases for any point (x, y).

**Header file graphics.h works only in Turbo C++**

## Built With

:beginner: C (http://mingw-w64.org/doku.php)  - The programming language used.

## Acknowledgments
https://www.geeksforgeeks.org/dda-line-generation-algorithm-computer-graphics/
