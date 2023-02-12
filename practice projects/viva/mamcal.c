# include <stdio.h>
#include <conio.h>
int main(){
 char operator;
 float num1,num2;
 printf("Enter operator +, - , * or / :\n");
 operator=getche();
 printf("\nEnter two operands:\n");

 scanf("%f %f",&num1,&num2);
 switch(operator) 
 {
 case '+':
 printf("num1+num2=%.2f",num1+num2);
 break;
 case '-':
 printf("num1-num2=%.2f",num1-num2);
 break;
 case '*':
 printf("num1*num2=%.2f",num1*num2);
 break;
 case '/':
 printf("num2/num1=%.2f",num1/num2);
 break;
 default: 
 printf("Error! operator is not correct"); /* if operator is other than +, -, * or /, error 
message is shown */
 break;
} 
return 0;
}