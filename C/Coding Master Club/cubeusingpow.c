#include <stdio.h>
#include <math.h>
int main()
{
    int a, c;
    printf("Enter a number two find the cube :");
    scanf("%d", &a);
    c = pow(a, 3);
    printf("The cube of the given number is : %d", c);
    return 0;
}