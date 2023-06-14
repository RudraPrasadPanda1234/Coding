#include<stdio.h>
int fact(int x)
{
    //for(int i=1;i<=n)
    /*if(x>15)
    return 0;*/
    if(x==0)
    return 1;
    else 
    return x*fact(x-1);
}
int main()
{
    int n,f,flag=0;
    printf("Enter no to find the factorial:");
    scanf("%d",&n);
    f=fact(n);
    for(int i=1;i<n;i++)
    {
    if(f>15)
    flag =1;
    break;
    } 
    if(flag!=1)
    printf("%d",f);
    return 0;
}