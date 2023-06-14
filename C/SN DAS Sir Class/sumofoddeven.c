#include<stdio.h>
int main()
{
    int n,i,os=0,es=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            es+=i;
        else
            os+=i;
    }
    printf("The even sum is :%d",es);
    printf("\nThe odd sum is:%d ",os);
    return 0;
}