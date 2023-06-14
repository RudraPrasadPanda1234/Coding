#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,i,n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("The sum is : %d",sum);
    return 0;
}