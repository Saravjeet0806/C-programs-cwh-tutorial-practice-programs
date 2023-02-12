#include <stdio.h>
int fibbonacci (int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("Fibonacci series is %d", n);
    return 0;
}
int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}