#include <stdio.h>
#include <math.h>
int main()
{
    double x, n;
    printf("Enter base:");
    scanf("%lf", &x);
    printf("Enter expontenial");
    scanf("%lf", &n);
    double ans = pow(x, n);
    printf("The answer is :%.2lf", ans);
    return 0;
}