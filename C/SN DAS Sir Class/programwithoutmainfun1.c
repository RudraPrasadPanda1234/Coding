#include<stdio.h>
#define decode(e,t,i,g,p,f,d) g##i##e##t
#define begine decode(i,n,a,m,a,t,e) 
int begine()
{
    printf("A program without main function");
    return 0;
}