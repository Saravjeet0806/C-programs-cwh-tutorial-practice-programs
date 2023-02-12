#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
char nm[100];
//clrscr ();
int i , j , len , f ;
printf (" enter string\n");
gets (nm);
len = strlen(nm);
for (i  = len-1,j = 0; j<=i ; j++ , i--)
{
if (nm[i] != nm[j] )
{
f =1;
break;
}
}
if (f == 1)
printf("not palindrome");
else 
printf ("it is a palindrome");
 getch ();
}

