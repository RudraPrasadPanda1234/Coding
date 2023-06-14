#include<stdio.h>
int main()
{
    int x,y,i,mul=0;
    printf("Enter two numbers to find the multipication");
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
        mul=mul+x;
    }
    printf("The multiplication of the number is:%d",mul);
    return 0;
}