#include<stdio.h>
int main()
{
    int i,j,n,f,sign=-1;
    float sum=0.0;
    float p,x;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%f",&x);
    for(i=1;i<=n;i+=2)
    {
        p=1;
        f=1;
        for(j=1;j<=i;j++)
        {
            p=p*x;
            f=f*j;
        }
        sign=-1*sign;
        sum+=sign*p/f;
    }
    printf("The sum =%f",sum);
    return 0;
}