#include <stdio.h>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int main()
{
    float s = 0.0, i;
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + 1.0 / fact(i);
        //printf("1/%d",1/i);
    }
    printf("\n%f", s);
    return 0;
}