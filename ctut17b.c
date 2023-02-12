#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter number, enter 0 to exit\n");    //when we press 0 we exit the code... warna ye 8times input lega phir dubara phirse chalu hojayega
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
