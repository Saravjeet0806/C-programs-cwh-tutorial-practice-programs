#include <stdio.h>

int main(int argc, char const *argv[])
{
   int choice;
   printf("If you passed in both Maths and science enter a number greater than 10 and if you passed either in Maths or Science enter a number less than 10\n");
   printf("Enter your choice\n");
   scanf("%d", &choice);
   printf("You have entered %d as your choice", choice);
   if (choice>=10)
   {
    printf("Congratulations you have won 1000 rupees as prize");
   }
   else if (choice<10)

   {
    printf("You get 100 rupees as prize");
   }
   
    return 0;
}
