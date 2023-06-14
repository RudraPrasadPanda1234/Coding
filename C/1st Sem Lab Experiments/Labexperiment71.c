#include<stdio.h>
int main()
{
    int a[50],i,large,small;
    for(i=0;i<10;i++)
    {
      printf("enter 10 numbers ");
      scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=0;i<10;i++)
    {
       if(a[i]>large)
       large=a[i];
       if(a[i]<small)
       small=a[i];
    }
        printf("the largest number is :%d",large);
        printf("\n the smallest number is :%d",small);
return 0;
}