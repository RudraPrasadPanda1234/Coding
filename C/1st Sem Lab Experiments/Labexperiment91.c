/*Write a C program which contains three User define Functions namely add(),subtract() and multiply().Each function accepts two integers as their arguments and calculate and retrun the reults*/
#include<stdio.h>
//function two add two numbers
int add(int x,int y)
{
    int d=x+y;
    return d;
}
//function to multiply two numbers 
int multiply(int x,int y)
{
    int e=x*y;
    return e;
}
//function two subtract two numbers
int subtract(int x,int y)
{
    int f=x-y;
    return f;
}
//main funtion 
int main()
{
    int a,b;
    printf("Enter 1 integer:");
    scanf("%d",&a);
    printf("Enter 1 integer:");
    scanf("%d",&b);
    printf("Addition of %d and %d is:%d",a,b,add(a,b));
    printf("\nSubtraction of %d and %d is:%d",a,b,subtract(a,b));
    printf("\nMultiply of %d and %d is:%d",a,b,multiply(a,b));
    return 0;
}