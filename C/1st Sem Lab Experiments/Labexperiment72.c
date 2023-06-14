#include<stdio.h>
int main()
{
    int a[10],t,i,fact;
     for(i=0;i<10;i++)
    {
      printf("enter 10 numbers ");
      scanf("%d",&a[i]);
    }
    printf("enter elements to be searched");
    scanf("%d",&t);
    for(i=0;i<10;i++)
    {
      if(a[i]==t)
      {
       fact=1;
       break;
      }
    }
    if(fact==1)
      printf("%d is found at position %d",t,i+1);
        else
      printf("%d is not found in the array",t);
    return 0;
}