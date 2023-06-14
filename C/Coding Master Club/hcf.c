#include <stdio.h>
int main()
{
    int a, b, gcd;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        printf("The gcd is:%d", b);
        return 0;
    }
}