#include <stdio.h>

int main(void)
{   
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = 0; j < 2*n-2*i ; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            printf("*");
        }
        for (j = 0; j < 2*i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}