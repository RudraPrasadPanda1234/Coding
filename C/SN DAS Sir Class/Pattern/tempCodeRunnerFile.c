#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    // int a;
    // for (a = 1; n > 1; n--)
    //     a *= n;
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(n - r) * factorial(r));
    return ncr;
}
int main()
{
    int rows;
    int i, j;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf(" %3d", icj);
        }
        printf("\n");
    }
    return 0;
}