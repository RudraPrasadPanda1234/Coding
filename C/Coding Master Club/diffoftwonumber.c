#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Enter a number:");
    scanf("%lf", &a);
    printf("Enter a number:");
    scanf("%lf", &b);
    if (a > b)
        c = a - b;
    else
        c = b - a;
    printf("The output is :%.2lf", c);
    return 0;
}