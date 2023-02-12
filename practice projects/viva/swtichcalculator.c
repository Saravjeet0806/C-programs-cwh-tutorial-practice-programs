#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    char operator;
    float num1, num2;
    printf("Enter operator");
    operator = getche();
    printf("enter numbers");
    scanf("%f %f", &num1, &num2 );
    switch (operator)
    {
    case '+' :
        printf("The sum of two numbers is %2.f", num1 + num2);
        break;
    }
    
    

    return 0;
}
