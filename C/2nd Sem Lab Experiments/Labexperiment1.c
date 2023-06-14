//WAP to create methods for performing addition,subtraction,multiplication and division on 2 integers
#include <stdio.h>
// function two add two numbers
int add(int x, int y)
{
    int d = x + y;
    //return d;
    printf("Sum of %d and %d is :%d \n",x,y,d);
}
// function to multiply two numbers
int multiply(int x, int y)
{
    int e = x * y;
    //return e;
    printf("Multiply of %d and %d is :%d \n",x,y,e);
}
// function two subtract two numbers
int subtract(int x, int y)
{
    int f = x - y;
    //return f;
    printf("Subtraction of %d and %d is :%d \n",x,y,f);
}
// main funtion
int main()
{
    int a, b;
    printf("Enter 1 integer:");
    scanf("%d", &a);
    printf("Enter 1 integer:");
    scanf("%d", &b);
    add(a, b);
    subtract(a, b);
    multiply(a, b);
    //printf("Addition of %d and %d is:%d", a, b, add(a, b));
    //printf("\nSubtraction of %d and %d is:%d", a, b, subtract(a, b));
    //printf("\nMultiply of %d and %d is:%d", a, b, multiply(a, b));
    return 0;
}
//Code By Rudra