//WAP to find the sum of all the odd digit of given number without using % to find odd or even
#include<stdio.h>
int main()
{
    int n,rem,d,sum;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rem=d&1;
        if(rem!=0)
        sum+=d;
        n=n/10;
    }
    printf("The Sum of all digit is:%d",sum);
    return 0;
}