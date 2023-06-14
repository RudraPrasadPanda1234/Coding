#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is : %d",sum);
    return 0;
}