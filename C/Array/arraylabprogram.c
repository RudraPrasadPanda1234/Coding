//program to enter name and search a letter for it
#include<stdio.h>
int main()
{
char a[100],t;    
int fact,i;
for(i=0;i<100;i++)
{
printf("enter a name");
scanf("%c",a[i]);
}
printf("enter a letter to search ");
scanf("%c",&t);
for(i=0;i<100;i++)
{
    if(a[i]==t)
      {
        fact=1;
        break;
      }
}
    if(fact==1)
      printf("%c is found at position %d",t,i+1);
        else
      printf("%c is not found in the array",t);
    return 0;
}