#include <stdio.h>
int main()
{
    double si;
    int principal, amount, rate;
    printf("Enter a Prnicpal :");
    scanf("%d", &principal);
    printf("Enter a amount :");
    scanf("%d", &amount);
    printf("Enter a rate :");
    scanf("%d", &rate);
    si = principal * amount * rate / 100;
    printf("The simple intrest is:%lf", si);
    return 0;
}