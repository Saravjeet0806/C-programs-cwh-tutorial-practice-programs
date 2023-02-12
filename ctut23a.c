#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
       printf("Enter %d element of array\n", i);
        scanf("%d", &marks[i]);
    }

    return 0;
}
