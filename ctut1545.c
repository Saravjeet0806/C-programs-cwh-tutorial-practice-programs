#include <stdio.h>
// Without arguments and with return value :
int Sum(); /* Declaration of Function */

 /*Other Code*/ 
int Sum() 
{ 

	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
} 