#include <stdio.h>
int main()
{
    int i, j, k, l,n;
    printf("Enter the numbers of row");
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (k = (n - i) * 2; k >= 1; k--)
        {
            printf(" ");
        }
        for (l = 1; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}