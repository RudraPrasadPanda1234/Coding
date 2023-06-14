#include <stdio.h>
int pow(int base, int exp);     //function prototype
int check_sum(int n);          //function prototype
//function declartion
int pow(int base, int exp)    
{
    if (exp == 0)
        return 1;
    else
        return (base* pow(base, exp - 1));
}
//function declartion
int check_sum(int num)
{
    int temp, rem, sum = 0, d = 0;
    temp = num;
    while (temp > 0)
    {
        d++;
        temp = temp / 10;
    }
    temp = num;
    while (temp > 0)
    {

        rem = temp % 10;
        sum = sum + pow(rem, d);        //function call
        temp = temp / 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
//main function
int main()
{
    int a, b, c, i;
    printf("Enter a range:");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        c = check_sum(i);       //function call
        if (c == 1)
            printf("%d\t", i);
    }
    return 0;
}