#include<stdio.h>
int main()
{
    float s=0.0;
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(float)1/i;
        //printf("1/%.1d\t",1/i);
    }
    printf("\n%f",s);
    return 0;
}