#include<stdio.h>
#include<conio.h>
void main ()
{
int i , j ; 
//clrscr ();
printf (" the required pattern is :");
for (i=1; i<=5; i++)
{
printf ("\n");
for (j = 1; j<=i; j++)
printf ("*");
}
getch ();
}

