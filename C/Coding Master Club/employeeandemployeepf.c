#include <stdio.h>
int main()
{
    double basic, employeepf, epf, da, basicda;    // epf=employeerpf
    printf("Enter basic salary of Employee:");
    scanf("%lf", &basic);
    da = (42 * basic) / 100;
    basicda = basic + da;
    employeepf = (12 / 100) * basicda;
    epf = (3.67 / 100) * basicda;
    printf("The employee pf is:%.2lf", employeepf);
    printf("\nThe Employeer pf is:%.2lf", epf);
    return 0;
}