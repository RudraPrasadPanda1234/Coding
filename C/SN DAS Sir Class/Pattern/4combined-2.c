#include <stdio.h>
int main()
{
    int i, n, j, l, k;
    printf("Enter the numbers of row");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (k = 2 * (n - i); k >= 1; k--)
        {
            printf("  ");
        }
        for (l = 1; l <= i; l++)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}