#include<stdio.h>
int main()
{
    int i;
    unsigned char buffer[10]={'0'};
    printf("buffer %s \n",buffer);
    memset(buffer,' ',9);
    printf("Buffer with space %s \n",buffer);
    memset(buffer,'X',9);
    printf("buffer(memset with x)%s \n",buffer);
    memset(buffer,15,9);
    printf("buffer(memset with 15)%s \n",buffer);
    // for(i=0;i<10;i++)
    // {
    //     printf("%d",buffer[i]);
    // }
    return 0;
}