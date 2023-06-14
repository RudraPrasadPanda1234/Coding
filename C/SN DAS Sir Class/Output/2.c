#include<stdio.h>
int main()
{
    float a=0.1;
    printf("%d %d %d",sizeof(a),sizeof(0.1),sizeof(0.1f));
    return 0; //0.1 takes till double but 0.1f takes till float 
}