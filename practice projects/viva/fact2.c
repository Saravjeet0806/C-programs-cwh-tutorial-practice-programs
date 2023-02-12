#include <stdio.h>
int fact(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    printf("The factorial is %d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
