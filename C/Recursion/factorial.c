#include <stdio.h>
// function prototype
int fact(int);

int main()
{
    int n, f;
    printf("Enter no to find the factorial:");
    scanf("%d", &n);
    f = fact(n);
    printf("The factorial of %d is %d", n, f);
    return 0;
}
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}