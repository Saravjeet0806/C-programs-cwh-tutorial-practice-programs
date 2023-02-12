#include <stdio.h>
/*Print a multiplication table of a number entered by the user in pretty form
Example 
Input 
Enter the number you want multiplication table of 
6
OUtput
Table of 6
6 * 1 =6
6* 2 = 12
6 * 10= 60*/
int main(int argc, char const *argv[])
{
    printf("Enter the number you want multiplication table of");
    int a;
    scanf("%d", &a);
    printf("a * 1 = %d\n", a*1);
    printf("a * 2 = %d\n", a*2);
    printf("a * 3 = %d\n", a*3);
    printf("a * 4 = %d\n", a*4);
    printf("a * 5 = %d\n", a*5);
    printf("a * 6 = %d\n", a*6);
    printf("a * 7 = %d\n", a*7);
    printf("a * 8 = %d\n", a*8);
    printf("a * 9 = %d\n", a*9);
    printf("a * 10 = %d\n", a*10);


    return 0;
}
