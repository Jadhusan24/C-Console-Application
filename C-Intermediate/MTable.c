#include <stdio.h>

int main()
{
    int i, j;
    int table = 10;
    int max = 12;

    for (i = 1; i<= table; i++)
    {
        for (j = 0; j <= max; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}