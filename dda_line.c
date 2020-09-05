#include <stdio.h>  // Header file that contains functions like printf and scanf.
#include <math.h>   //  Header file that contains function round.

void main()   // Execution of the prpgram starts here
{
	float x1,y1,x2,y2,dx,dy,step;   // Float variables have value in decimals
	int i; 
 
	printf("Enter the values of x1 and y1 : ");  // Accepting the inputs(x1,y1) from the user
	scanf("%f%f",&x1,&y1);                      // Storing the values of input in float variables(x1,y1)
	printf("Enter the values of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
 
	dx=abs(x2-x1);         // abs(Absolute) is used to consider positve value, as we are concerned only about magnitutde
	dy=abs(y2-y1);
 
	if(dx>=dy)           // Using if-else conditional to comapre values of dx and dy, to decide the step.
		step=dx;
	else
		step=dy;

	dx=dx/step;        // Calcualting increaments for x and y.
	dy=dy/step;

	i=0; 
	while(i<=step)   // Loop will keep on getting executed, till the condition remains true.
	{ 
        printf("\nCoordinate=%d,%d",(int)(x1+0.5),(int)(y1+0.5));  // converting the float variables(x,y) to integers and rounding off by 0.5
		x1=x1+dx;
		y1=y1+dy;
		i=i+1;
	}
}