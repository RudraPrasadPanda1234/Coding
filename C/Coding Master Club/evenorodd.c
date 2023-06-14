#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number to find it is even or odd ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
    return 0;
}