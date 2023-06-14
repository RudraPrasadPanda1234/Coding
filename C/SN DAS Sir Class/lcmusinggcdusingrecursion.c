#include <stdio.h>
// function prototype
int gcd(int, int);
// calling function
int main()
{
    int x, y, l, x1, y1, g;
    printf("Enter two number two find Greatest Common Divisior and Lowest Common Factor:");
    scanf("%d %d", &x, &y);
    x1 = x;
    y1 = y;
    g = gcd(x, y);
    l = (x1 * y1) / g;
    printf("The GCD of %d and %d is %d\nThe LCM of %d and %d is %d", x, y, g, x, y, l);
    return 0;
}
// function defination
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}