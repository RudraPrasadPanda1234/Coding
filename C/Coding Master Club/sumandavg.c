#include <stdio.h>
int main()
{
    double sum, avg, a, b;
    printf("Enter a number to find the sum and avg:");
    scanf("%lf", &a);
    printf("Enter a number to find the sum and avg:");
    scanf("%lf", &b);
    sum = a + b;
    avg = sum / 2;
    printf("The Sum of the given numbers is :%.2lf \n The Avg of the numbers is :%.2lf", sum, avg);
    return 0;
}