#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begine decode(a,n,i,m,a,t,e) 
int begine()
{
    printf("A program without main function");
    return 0;
}

// #include<stdio.h>
// #define decode(h,r,a,b,p,e,d) b##h##a##r
// #define begine decode(a,n,i,m,a,t,e) 
// int begine()
// {
//     printf("A program without main function");
//     return 0;
// }