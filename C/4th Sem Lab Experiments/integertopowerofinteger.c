// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double x, n;
//     printf("Enter base:");
//     scanf("%lf", &x);
//     printf("Enter expontenial");
//     scanf("%lf", &n);
//     double ans = pow(x, n);
//     printf("The answer is :%.2lf", ans);
//     return 0;
// }

#include<stdio.h>
double pow(double base, double exp)
{
    if (exp == 0)
        return (1);
    else
        return (base * pow(base, exp - 1));
}
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