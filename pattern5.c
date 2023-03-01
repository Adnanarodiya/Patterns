#include <stdio.h>
int n = 5;
int i, j, k, l;
void main()
{
    for (i = 1; i <= n; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" *");
        }
        for (l = 2; l <= i; l++)
        {
            printf(" *");
        }

        printf("\n");
    }
}