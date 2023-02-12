#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Value at %d is %d\n", i, array[i]);
    }
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    func1(arr);
    return 0;
}
