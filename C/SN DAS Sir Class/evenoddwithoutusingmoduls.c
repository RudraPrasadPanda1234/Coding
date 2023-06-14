#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter any +ve integer number");
    scanf("%d",&n);
    rem=n&1;
    if(rem==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}