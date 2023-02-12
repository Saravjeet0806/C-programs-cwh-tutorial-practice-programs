#include <stdio.h>

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, *(ptr + i));
     *(ptr+2)=654;    
    }  
}

int main()
{
    /* code */ int arr[] = {23, 3, 13, 4};
    func2(arr);
    return 0;
}
