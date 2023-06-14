
#include <stdio.h>
int hcf(int x, int y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    else
        return hcf(y, x % y);
}
int main()
{
    int x, y, cp;
    printf("enter any two number");
    scanf("%d%d", &x, &y);
    cp = hcf(x, y);
    if (cp == 1)
        printf("%d and %d is a coprime number", x, y);
    else
        printf("%d and %d is not a co prime number", x, y);
    return 0;
}