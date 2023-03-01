#include<stdio.h>
int n = 3;
int j = 1;
void main()
{
    for (int i = 1; i <= n; i++){
        for (j = 1 ; j <= i ; j++)
        {
            
            printf(" *");
            
        }
            
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--){
        for (j = i ; j >= 1 ; j--)
        {
            
            printf(" *");
            
        }
            
        printf("\n");
    }
}