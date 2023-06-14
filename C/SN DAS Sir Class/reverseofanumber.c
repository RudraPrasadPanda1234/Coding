#include<stdio.h>
int main()
{
    int n,d,rn=0,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        rn=(rn*10)+d;
    }
    printf("%d",rn);
    return 0;
}