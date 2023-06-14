#include <stdio.h>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int main()
{
    int a, sum = 0, temp, rem, i, f;
    printf("Enter a number:");
    scanf("%d", &a);
    temp = a;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + fact(rem);
        // f=fact(rem);
        temp = temp / 10;
        // sum=sum+f;
    }
    if (sum == a)
        printf("Strong number");
    else
        printf("Not a strong number");
    return 0;
}