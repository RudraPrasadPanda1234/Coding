#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three number to find greatest number among it:");
    scanf("%d %d %d", &a, &b, &c);
    if (c > a && c > b)
    {
        largest = c;
    }
    else if (a > b && a > c)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    printf("The largest is :%d", largest);
    return 0;
}