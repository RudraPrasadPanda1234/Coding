#include <stdio.h>
int main()
{
    int a[50], i, n, large, small;
    printf("\n enter the number of elements:");
    scanf("%d", &n);
    printf("\n input the array element:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    large = small = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > large)
            large = a[i];
        if (a[i] < small)
            small = a[i];
    }
    printf("\n the smallest number is %d \n", small);
    printf("\n the largest number is %d \n", large);
    return 0;
}