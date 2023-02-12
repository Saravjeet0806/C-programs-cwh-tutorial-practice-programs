#include<stdio.h>
#include<conio.h>
void main()
int a, fact ;
clrscr ();
printf (“enter the number”);
scanf (“%d” , &a);
fact = rec(a) ;
printf (“factorial value = %d” , fact);
}
rec (x)
int x;
{
int f ; 
if (x = = 1)
return (1);
else 
f = x*rec(x-1);
return (f);
}
