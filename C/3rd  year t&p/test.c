// #include<stdio.h>
// int abc(int a){
//     if (a==1)
//         return 1;
//     else
//         return abc(a-1)+abc(a-1);
// }
// int main(){
//     int a=3;
//     printf("%d",abc(a));
// }

// #include<stdio.h>
// int abc(int a){
//     if(a<=1)
//         return a;
//     int x=0;
//     for (int i = 1; i < 2; i++)
//     {
//         x=x+abc(a-1);
//     }
//     return x;
// }
// int main(){
//     int a=3;
//     printf("%d",abc(a));
// }

// #include<stdio.h>
// int abc(int a){
//     if(a==1)
//         return a;
//     int x=0;
//     for(int i=1;i<=2;i++){
//         x=x+abc(a-1)+abc(a-2);
//         return x;
//     }
// }
// int main(){
//     int a=3;
//     printf("%d",abc(a));
// }

// #include<stdio.h>
// int abc(int a){
//     if(a<=1) return 0;
//     int x=0,y=0;
//     for(int i=1;i<=2;i++){
//         x=y+abc(i-1)+abc(a-2);
//         y=x+abc(a-1)+abc(i-2);
//     }
//     return y;
// }
// int main(){
//     int a=2;
//     printf("%d",abc(a));
// }

//11-7-24
#include<stdio.h>
int sol(int n){
    if(n==0){
        printf("a");
        return n;
    }
    if(n==1){
        printf("b");
        return n;
    }
    if(ar[n]!=-1)
        return ar[n];
    else{
        printf("c");
        ar[n]=sol(n-1,ar)+sol(n-2,ar);
        return ar[n];
    }
}
int main(){
    int n=4;
    int ar[]={-1,-1,-1,-1,-1};
    printf("%d",sol(n));
}

