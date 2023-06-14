#include <stdio.h>
int sumoffactor(int i, int j);
int main()
{
    int a, p;
    printf("Enter a number :");
    scanf("%d", &a);
    p = sumoffactor(a, a / 2);
    if (p == a)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}
int sumoffactor(int i, int j)
{
    if (j == 1)
        return 1;
    if (i % j == 0)
        return j + sumoffactor(i, j - 1);
    else
        return sumoffactor(i, j - 1);
}