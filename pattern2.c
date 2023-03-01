#include<stdio.h>
int n = 4;
void main()
{
    for (int i = 1; i <= n; i++){
        for (int j = 1 ; j <= i; j++)
        {
            printf("  ");
        }
            for (int k = 4 ; k >= i; k--){
                printf(" *");

            }
        printf("\n");
    }
}