#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Value at %d is %d\n", i, array[i]);
    }
    array[0] = 382; // global variable  inside func if you change the value of the array it get reflected in the main func
    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("Value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("Value at index 0 is %d\n", arr[0]);
    return 0;
}
