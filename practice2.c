#include <stdio.h>

int main()
{

    int i = 0;
    int *j = &i;

    if (i == 0)
    {
        printf("%d %u\n", i, j);
        int i = 1;
        j = &i;
        if (i == 1)
        {
            printf("%d %u\n", i, j);
            int i = 2;
            j = &i;
            if (i == 2)
            {
                printf("%d %u\n", i, j);
            }
        }
    }
    printf("%d %u",*j,j);
 return 0;
}