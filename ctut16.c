#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 20; i++)
    {
        printf("%d\n Enter your age\n", i);  //loop jabtak chalega jab age<20 aur i 20 bar values lele
        scanf("%d", &age);
        if (age > 20)
        {
            break;
        }
    }

    return 0;
}
