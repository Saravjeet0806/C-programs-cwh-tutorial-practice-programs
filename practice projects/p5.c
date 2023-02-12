#include<stdio.h>
#include<conio.h>
void main ()
{
int n , a = 0, b = 1 , i = 0 , j ;
//clrscr ();
printf ("enter numbers");
scanf ("%d  %d", a, b);
for (i=2; i<=n; i++)
{
j = a + b;
printf ("%d" , j);
a = b;
b = j;
}
printf ("invalid no");
getch ();
}
