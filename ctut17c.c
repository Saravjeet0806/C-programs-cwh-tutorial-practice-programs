#include <stdio.h>
int main()
{
label:
    printf("we are inside label");

    goto label;
end:

    return 0;
}