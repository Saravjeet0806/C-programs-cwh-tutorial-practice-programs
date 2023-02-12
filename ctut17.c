#include <stdio.h>
int main()
{
   label: 
   printf("we are inside label");
   goto end;
   printf("hello world");
   goto label;
   end:
   printf("we are at the end");
    return 0;
}
