//WAP to check wheter the given number is armstrong number or not
#include <stdio.h>
int pow(int base, int exp)
{
    if (exp == 0)
        return (1);
    else
        return (base * pow(base, exp - 1));
}
int main()
{
    int n, temp, rem, sum = 0, d = 0;
    printf("Enter a number to check wheter it is armstrong");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        d++;
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, d);
        temp = temp / 10;
    }
    if (sum == n)
        printf("Armstrong");
    else
        printf("Not armstrong");
    return 0;
}
//Code By Rudra