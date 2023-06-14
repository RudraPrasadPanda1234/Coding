#include <stdio.h>
int main()
{
    double grosssalary, hra, da, pf, basic;
    printf("Enter the basic salary:");
    scanf("%lf", &basic);
    pf = (12 / 100) * basic;
    da = (42 * basic) / 100;
    hra = (50 / 100) * (basic + da);
    grosssalary = basic + hra + da + pf;
    printf("The gross salary is:%lf", grosssalary);
    return 0;
}